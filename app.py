import os
import io
import time
import socket
import struct
import threading
from PIL import Image
from mss import mss
from time import sleep
import numpy as np
import json
import subprocess

active_screencasts = {}
running_programs = []

def capture_and_send_screen(monitor_id, server_socket, stop_event):
    conn, _ = server_socket.accept()
    print(f"Client connected. Screen sharing started.")
    sct = mss()

    # Get the monitor
    monitor = sct.monitors[monitor_id]

    while not stop_event.is_set():
        try:
            screen = np.array(sct.grab(monitor))
            img = Image.fromarray(screen)
            buf = io.BytesIO()
            img.convert('RGB').save(buf, format='JPEG')
            byte_im = buf.getvalue()

            # Send the size of the data first
            size = len(byte_im)
            size = struct.pack('>L', size)
            conn.sendall(size)

            time.sleep(0.01)

            # Now send the image data
            conn.sendall(byte_im)
            time.sleep(0.1)
        except BrokenPipeError:
            print("Client disconnected, stopping screencast.")
            break

    server_socket.close()

def start_background(port):
    server_socket = socket.socket()
    server_socket.bind(("0.0.0.0", port))
    server_socket.listen(0)

    print(f"Screen background service on port {port}.")

    stop_event = threading.Event()
    screencast_thread = threading.Thread(target=handle_monitor_list_request, args=(server_socket, stop_event))
    screencast_thread.start()

    active_screencasts[port] = (screencast_thread, stop_event, server_socket)

def start_screencast(monitor_id, port):
    server_socket = socket.socket()
    server_socket.bind(("0.0.0.0", port))
    server_socket.listen(0)

    print(f"Screen sharing service started on port {port}. Waiting for client connection.")

    stop_event = threading.Event()
    screencast_thread = threading.Thread(target=capture_and_send_screen, args=(monitor_id, server_socket, stop_event))
    screencast_thread.start()

    active_screencasts[port] = (screencast_thread, stop_event, server_socket)

def stop_screencast(port):
    if port in active_screencasts:
        _, stop_event, server_socket = active_screencasts[port]
        stop_event.set()  # Signal the thread to stop
        server_socket.close()
        del active_screencasts[port]
        print(f"Service stopped on port {port}.")
    else:
        print(f"No active screen sharing on port {port}.")

# def list_monitors(conn):
#     sct = mss()
#     monitor_list = [{"id": i, "info": monitor} for i, monitor in enumerate(sct.monitors)]
#     conn.sendall(json.dumps(monitor_list).encode())

def list_monitors(conn):
    monitors = mss().monitors
    print(f"Listing monitors.")
    if conn:
        monitor_list = [{"id": i, "info": monitor} for i, monitor in enumerate(monitors)]
        conn.sendall(json.dumps(monitor_list).encode())
    else:
        print(monitors)
        for i, monitor in enumerate(monitors[1:], start=1):  # Exclude the first monitor as it's the "All in One" monitor
            print(f"Monitor {i}: {monitor}")

def handle_monitor_list_request(server_socket, stop_event):
    while not stop_event.is_set():
        try:
            conn, _ = server_socket.accept()
            data = conn.recv(1024)
            command = data.decode('utf-8').strip()
            if command == "list":
                list_monitors(conn)
            elif command == "add":
                add_program(conn)
            elif command == "remove":
                remove_program(conn)
            conn.close()
        except socket.error:
            break
    server_socket.close()

def add_last_screen():
    time.sleep(1.5)
    last_monitor = len(mss().monitors) - 1
    start_screencast(int(last_monitor), 9999 + int(last_monitor))

def add_program(conn):
    global running_programs
    print(f"Adding screen.")
    monitor_serial = int(time.time())
    command = ['nohup', './createdummy', f'serial={monitor_serial}', f'name={monitor_serial}', '&']
    program = subprocess.Popen(command, start_new_session=True)
    running_programs.append(program)
    conn.sendall(str(len(running_programs)).encode())
    add_last_screen()

def remove_program(conn):
    global running_programs
    print(f"Removing screen.")
    if running_programs:
        program = running_programs.pop()
        try:
            os.killpg(os.getpgid(program.pid), signal.SIGTERM)
        except ProcessLookupError:
            pass
        conn.sendall(str(len(running_programs)).encode())


# Run a new command line program
# def add_program(conn):
#     global running_programs
#     print(f"Adding screen.")
#     monitor_serial = time.time()
#     program = subprocess.Popen(['./createdummy', f"serial={monitor_serial}", f"name={monitor_serial}"], stdout=subprocess.PIPE)
#     running_programs.append(program)
#     conn.sendall(str(len(running_programs)).encode())
#     add_last_screen()

# End the last running command line program
# def remove_program(conn):
#     global running_programs
#     print(f"Removing screen.")
#     if running_programs:
#         program = running_programs.pop()
#         program.terminate()
#         conn.sendall(str(len(running_programs)).encode())

def main():
    print("Welcome to VR Project!")
    print("Here are your available commands:")
    print("start N: Start screen sharing on monitor N")
    print("stop N: Stop screen sharing on monitor N")
    print("list: List available monitors")
    print("quit: Stop all screen sharing and quit the application")

    start_background(port=9998)

    commands = {
        "start": lambda n: start_screencast(int(n), 9999 + int(n)),
        "stop": lambda n: stop_screencast(9999 + int(n)),
        "list": list_monitors
    }

    for i in range(len(mss().monitors)):
        commands["start"](i)

    while True:
        cmd = input("> ").split(" ")
        if cmd[0] == "quit":
            # Stop all active screencasts when quitting
            for port in list(active_screencasts.keys()):
                stop_screencast(port)
            break
        elif cmd[0] in commands:
            arg = cmd[1] if len(cmd) > 1 else None  # If there is no second argument, use None
            commands[cmd[0]](arg)

if __name__ == "__main__":
    main()


# import io
# import time
# import socket
# import struct
# import threading
# from PIL import Image
# from mss import mss
# from time import sleep
# import numpy as np

# active_screencasts = {}

# def capture_and_send_screen(monitor_id, server_socket, stop_event):
#     conn, _ = server_socket.accept()
#     print(f"Client connected. Screen sharing started.")
#     sct = mss()

#     # Get the monitor
#     monitor = sct.monitors[monitor_id]

#     while not stop_event.is_set():
#         try:
#             screen = np.array(sct.grab(monitor))
#             img = Image.fromarray(screen)
#             buf = io.BytesIO()
#             img.convert('RGB').save(buf, format='JPEG')
#             byte_im = buf.getvalue()

#             # Send the size of the data first
#             size = len(byte_im)
#             size = struct.pack('>L', size)
#             conn.sendall(size)

#             time.sleep(0.01)

#             # Now send the image data
#             conn.sendall(byte_im)
#             time.sleep(0.1)
#         except BrokenPipeError:
#             print("Client disconnected, stopping screencast.")
#             break

#     server_socket.close()

# def start_screencast(monitor_id, port):
#     server_socket = socket.socket()
#     server_socket.bind(("0.0.0.0", port))
#     server_socket.listen(0)

#     print(f"Screen sharing service started on port {port}. Waiting for client connection.")

#     stop_event = threading.Event()
#     screencast_thread = threading.Thread(target=capture_and_send_screen, args=(monitor_id, server_socket, stop_event))
#     screencast_thread.start()

#     active_screencasts[port] = (screencast_thread, stop_event, server_socket)

# def stop_screencast(port):
#     if port in active_screencasts:
#         _, stop_event, server_socket = active_screencasts[port]
#         stop_event.set()  # Signal the thread to stop
#         server_socket.close()
#         del active_screencasts[port]
#         print(f"Screen sharing stopped on port {port}.")
#     else:
#         print(f"No active screen sharing on port {port}.")

# def list_monitors():
#     sct = mss()
#     for i, monitor in enumerate(sct.monitors):
#         print(f"Monitor {i}: {monitor}")

# def main():
#     print("Welcome to VR Project!")
#     print("Here are your available commands:")
#     print("start N: Start screen sharing on monitor N")
#     print("stop N: Stop screen sharing on monitor N")
#     print("list: List available monitors")
#     print("quit: Stop all screen sharing and quit the application")

#     commands = {
#         "start": lambda n: start_screencast(int(n), 9999 + int(n)),
#         "stop": lambda n: stop_screencast(9999 + int(n)),
#         "list": lambda _: list_monitors()
#     }

#     while True:
#         cmd = input("> ").split(" ")
#         if cmd[0] == "quit":
#             # Stop all active screencasts when quitting
#             for port in list(active_screencasts.keys()):
#                 stop_screencast(port)
#             break
#         elif cmd[0] in commands:
#             commands[cmd[0]](cmd[1] if len(cmd) > 1 else None)

# if __name__ == "__main__":
#     main()


# import io
# import time
# import socket
# import struct
# import threading
# from PIL import Image
# from PIL import ImageGrab
# from mss import mss
# from time import sleep
# import numpy as np

# active_screencasts = {}

# def capture_and_send_screen(server_socket, stop_event):
#     conn, _ = server_socket.accept()
#     print(f"Client connected. Screen sharing started.")
#     while not stop_event.is_set():
#         try:
#             screen = np.array(ImageGrab.grab())
#             img = Image.fromarray(screen)
#             buf = io.BytesIO()
#             img.convert('RGB').save(buf, format='JPEG')
#             byte_im = buf.getvalue()

#             # Send the size of the data first
#             size = len(byte_im)
#             size = struct.pack('>L', size)
#             conn.sendall(size)

#             time.sleep(0.01)

#             # Now send the image data
#             conn.sendall(byte_im)
#             time.sleep(0.1)
#         except BrokenPipeError:
#             print("Client disconnected, stopping screencast.")
#             break

#     server_socket.close()

# def start_screencast(port):
#     server_socket = socket.socket()
#     server_socket.bind(("0.0.0.0", port))
#     server_socket.listen(0)

#     print(f"Screen sharing service started on port {port}. Waiting for client connection.")

#     stop_event = threading.Event()
#     screencast_thread = threading.Thread(target=capture_and_send_screen, args=(server_socket, stop_event))
#     screencast_thread.start()

#     active_screencasts[port] = (screencast_thread, stop_event, server_socket)

# def stop_screencast(port):
#     if port in active_screencasts:
#         _, stop_event, server_socket = active_screencasts[port]
#         stop_event.set()  # Signal the thread to stop
#         server_socket.close()
#         del active_screencasts[port]
#         print(f"Screen sharing stopped on port {port}.")
#     else:
#         print(f"No active screen sharing on port {port}.")

# def main():
#     print("Welcome to VR Project!")
#     print("Here are your available commands:")
#     print("start N: Start screen sharing on monitor N")
#     print("stop N: Stop screen sharing on monitor N")
#     print("quit: Stop all screen sharing and quit the application")

#     commands = {
#         "start": lambda n: start_screencast(9999 + int(n)),
#         "stop": lambda n: stop_screencast(9999 + int(n))
#     }

#     while True:
#         cmd = input("> ").split(" ")
#         if cmd[0] == "quit":
#             # Stop all active screencasts when quitting
#             for port in list(active_screencasts.keys()):
#                 stop_screencast(port)
#             break
#         elif cmd[0] in commands:
#             commands[cmd[0]](cmd[1])

# if __name__ == "__main__":
#     main()


# import io
# import time
# import socket
# import struct
# import threading
# from PIL import Image
# from PIL import ImageGrab
# from mss import mss
# from time import sleep
# import numpy as np

# def capture_and_send_screen(conn):
#     while True:
#         try:
#             screen = np.array(ImageGrab.grab())
#             img = Image.fromarray(screen)
#             buf = io.BytesIO()
#             img.convert('RGB').save(buf, format='JPEG')
#             byte_im = buf.getvalue()

#             # Send the size of the data first
#             # print(len(byte_im))
#             size = len(byte_im)
#             size = struct.pack('>L', size)
#             conn.sendall(size)

#             time.sleep(0.01)

#             # Now send the image data
#             conn.sendall(byte_im)
#             time.sleep(0.1)
#         except BrokenPipeError:
#             print("Client disconnected, stopping screencast.")
#             break

# def start_screencast(port):
#     server_socket = socket.socket()
#     server_socket.bind(("0.0.0.0", port))
#     server_socket.listen(0)

#     conn, _ = server_socket.accept()
#     print(f"Screen sharing started on port {port}. Press CTRL+C to stop.")

#     try:
#         capture_and_send_screen(conn)
#     except KeyboardInterrupt:
#         print(f"Screen sharing stopped on port {port}.")
#         server_socket.close()
        
#     threading.Thread(target=start_screencast, args=(port,)).start()

# def main():
#     print("Welcome to VR Project!")
#     print("Here are your available commands:")
#     print("start N: Start screen sharing on monitor N")
#     print("stop N: Stop screen sharing on monitor N")
#     print("quit: Stop all screen sharing and quit the application")

#     commands = {
#         "start": lambda n: start_screencast(9999 + int(n)),
#         "stop": lambda n: stop_screencast(9999 + int(n))
#     }

#     while True:
#         cmd = input("> ").split(" ")
#         print(cmd)
#         if cmd[0] == "quit":
#             break
#         elif cmd[0] in commands:
#             commands[cmd[0]](cmd[1])

# if __name__ == "__main__":
#     main()
