using UnityEngine;
using UnityEngine.UI;
using Newtonsoft.Json;
using System.Net.Sockets;
using System.Text;
using System;
using System.Threading.Tasks;
using System.Collections.Generic;
using UnityEngine.Networking;

[Serializable]
public class Monitor {
    public int id;
    public MonitorInfo info;
}

[Serializable]
public class MonitorInfo {
    public int left;
    public int top;
    public int width;
    public int height;
}

public class ButtonHandler : MonoBehaviour
{
    public ScreenManager screenManager;
    // public InputField monitorIdInputField;
    public string host = "localhost";
    public int basePort = 9998;
    public Dropdown monitorDropdown;

    public async void ListScreens()
    {
        // Create a TcpClient
        TcpClient client = new TcpClient();

        // Connect to the server
        await client.ConnectAsync(host, basePort);

        // Get the stream
        NetworkStream stream = client.GetStream();

        // Send the "list" command
        byte[] listCommand = Encoding.UTF8.GetBytes("list");
        await stream.WriteAsync(listCommand, 0, listCommand.Length);

        // Create a buffer
        byte[] buffer = new byte[client.ReceiveBufferSize];

        // Read the stream into the buffer
        int bytesRead = await stream.ReadAsync(buffer, 0, client.ReceiveBufferSize);

        // Convert the buffer to a string
        string data = Encoding.UTF8.GetString(buffer, 0, bytesRead);

        // Parse the JSON data
        List<Monitor> monitors = JsonConvert.DeserializeObject<List<Monitor>>(data);
        
        // Populate the dropdown
        List<Dropdown.OptionData> options = new List<Dropdown.OptionData>();
        foreach(Monitor monitor in monitors) {
            options.Add(new Dropdown.OptionData($"Monitor {monitor.id}: {monitor.info.width}x{monitor.info.height}"));
        }
        monitorDropdown.options = options;

        // Close the stream and client
        stream.Close();
        client.Close();
    }

    public async void AddScreen()
    {
        // Create a TcpClient
        TcpClient client = new TcpClient();

        // Connect to the server
        await client.ConnectAsync(host, basePort);

        // Get the stream
        NetworkStream stream = client.GetStream();

        // Send the "list" command
        byte[] listCommand = Encoding.UTF8.GetBytes("add");
        await stream.WriteAsync(listCommand, 0, listCommand.Length);

        // Create a buffer
        byte[] buffer = new byte[client.ReceiveBufferSize];

        // Read the stream into the buffer
        int bytesRead = await stream.ReadAsync(buffer, 0, client.ReceiveBufferSize);

        // Convert the buffer to a string
        string data = Encoding.UTF8.GetString(buffer, 0, bytesRead);

        // Close the stream and client
        stream.Close();
        client.Close();
    }

    public void StartScreen()
    {
        // if (monitorIdInputField.text != "")
        if (monitorDropdown.value >= 0)
        {
            // int monitorId = int.Parse(monitorIdInputField.text);
            int monitorId = monitorDropdown.value;
            if (!screenManager.IsScreenActive(monitorId))
            {
                screenManager.StartScreen(monitorId);
            }
        }
    }

    public void StopScreen()
    {
        // if (monitorIdInputField.text != "")
        if (monitorDropdown.value >= 0)
        {
            // int monitorId = int.Parse(monitorIdInputField.text);
            int monitorId = monitorDropdown.value;
            if (screenManager.IsScreenActive(monitorId))
            {
                screenManager.StopScreen(monitorId);
            }
        }
    }
}
