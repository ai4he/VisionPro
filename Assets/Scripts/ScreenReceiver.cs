using System;
using System.IO;
using System.Net.Sockets;
using System.Threading;
using UnityEngine;
using UnityEngine.UI;
using System.Net;

public class ScreenReceiver : MonoBehaviour
{
    public RawImage rawImage;
    private Texture2D currentTexture;
    private Thread receiverThread;
    private TcpClient client;
    private NetworkStream networkStream;

    private void Start()
    {
        currentTexture = new Texture2D(2, 2);
    }

    public void StartReceiving(string host, int port)
    {
        receiverThread = new Thread(() => ReceiveData(host, port));
        receiverThread.IsBackground = true;
        receiverThread.Start();
    }

    public void StopReceiving()
    {
        receiverThread.Abort();
        if (client != null)
        {
            client.Close();
            client = null;
        }
        if (currentTexture != null)
        {
            Destroy(currentTexture);
        }
    }

    void ReceiveData(string host, int port)
    {
        try
        {
            client = new TcpClient(host, port);
            networkStream = client.GetStream();

            byte[] lengthBuffer = new byte[4];
            while (true)
            {
                int bytesRead = 0;
                while (bytesRead < lengthBuffer.Length)
                {
                    int read = networkStream.Read(lengthBuffer, bytesRead, lengthBuffer.Length - bytesRead);
                    if (read == 0) throw new Exception("Connection closed");
                    bytesRead += read;
                }

                int length = IPAddress.NetworkToHostOrder(BitConverter.ToInt32(lengthBuffer, 0));
                if (length <= 0 || length > 100000000) throw new Exception("Invalid image length");

                byte[] imageData = new byte[length];
                bytesRead = 0;
                while (bytesRead < imageData.Length)
                {
                    int read = networkStream.Read(imageData, bytesRead, imageData.Length - bytesRead);
                    if (read == 0) throw new Exception("Connection closed");
                    bytesRead += read;
                }
                UnityMainThreadDispatcher.Instance().Enqueue(() =>
                {
                    Texture2D texture = new Texture2D(2, 2);
                    texture.LoadImage(imageData);
                    if (currentTexture != null)
                    {
                        Destroy(currentTexture);
                    }
                    currentTexture = texture;
                    rawImage.texture = currentTexture;
                    rawImage.SetNativeSize();
                });
            }
        }
        catch (Exception e)
        {
            Debug.LogError(e);
        }
    }

    private void OnDestroy()
    {
        StopReceiving();
    }
}



// using System;
// using System.IO;
// using System.Net.Sockets;
// using System.Threading;
// using UnityEngine;
// using UnityEngine.UI;
// using System.Net;


// public class ScreenReceiver : MonoBehaviour
// {
//     public RawImage rawImage;
//     private Thread receiverThread;
//     private TcpClient client;
//     private NetworkStream networkStream;

//     public void StartReceiving(string host, int port)
//     {
//         receiverThread = new Thread(() => ReceiveData(host, port));
//         receiverThread.IsBackground = true;
//         receiverThread.Start();
//     }

//     public void StopReceiving()
//     {
//         receiverThread.Abort();
//         if (client != null)
//         {
//             client.Close();
//             client = null;
//         }
//     }

//     void ReceiveData(string host, int port)
//     {
//         try
//         {
//             client = new TcpClient(host, port);
//             networkStream = client.GetStream();

//             byte[] lengthBuffer = new byte[4];
//             while (true)
//             {
//                 int bytesRead = 0;
//                 while (bytesRead < lengthBuffer.Length)
//                 {
//                     int read = networkStream.Read(lengthBuffer, bytesRead, lengthBuffer.Length - bytesRead);
//                     if (read == 0) throw new Exception("Connection closed");
//                     bytesRead += read;
//                 }

//                 int length = IPAddress.NetworkToHostOrder(BitConverter.ToInt32(lengthBuffer, 0));
//                 if (length <= 0 || length > 100000000) throw new Exception("Invalid image length");

//                 byte[] imageData = new byte[length];
//                 bytesRead = 0;
//                 while (bytesRead < imageData.Length)
//                 {
//                     int read = networkStream.Read(imageData, bytesRead, imageData.Length - bytesRead);
//                     if (read == 0) throw new Exception("Connection closed");
//                     bytesRead += read;
//                 }
//                 // Debug.Log(bytesRead);
//                 UnityMainThreadDispatcher.Instance().Enqueue(() =>
//                 {
//                     // Texture2D texture = new Texture2D(2, 2);
//                     // texture.LoadRawTextureData(imageData);
//                     // texture.Apply();
//                     // rawImage.texture = texture;
//                     // rawImage.SetNativeSize();

//                     Texture2D texture = new Texture2D(2, 2);
//                     texture.LoadImage(imageData);
//                     // Debug.Log($"Applying texture of size {texture.width}x{texture.height}");
//                     rawImage.texture = texture;
//                     rawImage.SetNativeSize();
//                 });
//             }
//         }
//         catch (Exception e)
//         {
//             Debug.LogError(e);
//         }
//     }

//     private void OnDestroy()
//     {
//         StopReceiving();
//     }
// }


// using System;
// using System.IO;
// using System.Net.Sockets;
// using System.Threading;
// using UnityEngine;
// using UnityEngine.UI;

// public class ScreenReceiver : MonoBehaviour
// {
//     public string serverIP = "127.0.0.1";
//     public int serverPort = 9999;

//     private Thread receiverThread;
//     private NetworkStream networkStream;
//     private RawImage rawImage;
//     private ScreenManager screenManager;

//     void Awake()
//     {
//         rawImage = GetComponent<RawImage>();
//         screenManager = FindObjectOfType<ScreenManager>();
//         StartReceiving();
//     }

//     void OnDestroy()
//     {
//         StopReceiving();
//     }

//     public void StartReceiving()
//     {
//         receiverThread = new Thread(ReceiveData);
//         receiverThread.IsBackground = true;
//         receiverThread.Start();
//     }

//     public void StopReceiving()
//     {
//         receiverThread?.Abort();
//         networkStream?.Close();
//     }

//     private void ReceiveData()
//     {
//         using (TcpClient client = new TcpClient(serverIP, serverPort))
//         {
//             using (networkStream = client.GetStream())
//             {
//                 while (true)
//                 {
//                     string command = ReadCommand();
//                     screenManager.HandleCommand(command);

//                     if (command.StartsWith("stop"))
//                     {
//                         // If this is a stop command, don't try to read image data
//                         continue;
//                     }

//                     byte[] imageData = ReadImageData();
//                     ApplyTexture(imageData);
//                 }
//             }
//         }
//     }

//     private string ReadCommand()
//     {
//         byte[] lengthBuffer = ReadNBytes(4);
//         int commandLength = BitConverter.ToInt32(lengthBuffer, 0);
//         byte[] commandData = ReadNBytes(commandLength);
//         return System.Text.Encoding.ASCII.GetString(commandData);
//     }

//     private byte[] ReadImageData()
//     {
//         byte[] lengthBuffer = ReadNBytes(4);
//         int imageLength = BitConverter.ToInt32(lengthBuffer, 0);
//         return ReadNBytes(imageLength);
//     }

//     private byte[] ReadNBytes(int n)
//     {
//         byte[] buffer = new byte[n];
//         int bytesRead = 0;

//         while (bytesRead < n)
//         {
//             bytesRead += networkStream.Read(buffer, bytesRead, n - bytesRead);
//         }

//         return buffer;
//     }

//     private void ApplyTexture(byte[] imageData)
//     {
//         UnityMainThreadDispatcher.Instance().Enqueue(() =>
//         {
//             Texture2D texture = new Texture2D(2, 2);
//             if (texture.LoadImage(imageData))
//             {
//                 rawImage.texture = texture;
//                 rawImage.SetNativeSize();
//             }
//         });
//     }
// }


// using System;
// using System.Net;
// using System.Net.Sockets;
// using System.Threading;
// using UnityEngine;
// using UnityEngine.UI;

// public class ScreenReceiver : MonoBehaviour
// {
//     public string ServerIp = "127.0.0.1";
//     public int ServerPort = 9999;
//     public RawImage rawImage;

//     private TcpClient client;
//     private NetworkStream networkStream;
//     private Thread receivingThread;

//     public void StartReceiving()
//     {
//         client = new TcpClient(ServerIp, ServerPort);
//         networkStream = client.GetStream();

//         receivingThread = new Thread(ReceiveData);
//         receivingThread.Start();
//     }

//     public void StopReceiving()
//     {
//         try
//         {
//             // Close the network stream and the client
//             if (networkStream != null)
//                 networkStream.Close();
//             if (client != null)
//                 client.Close();

//             // Also, make sure to stop the receiving thread
//             if (receivingThread != null && receivingThread.IsAlive)
//             {
//                 receivingThread.Abort();
//                 receivingThread = null;
//             }
//         }
//         catch (Exception e)
//         {
//             Debug.LogError(e);
//         }
//     }

//     private void OnApplicationQuit()
//     {
//         StopReceiving();
//     }

//     void ReceiveData()
//     {
//         byte[] lengthBuffer = new byte[4];
//         while (true)
//         {
//             try
//             {
//                 // Receive the image length
//                 int bytesRead = 0;
//                 while (bytesRead < lengthBuffer.Length)
//                 {
//                     int read = networkStream.Read(lengthBuffer, bytesRead, lengthBuffer.Length - bytesRead);
//                     if (read == 0) throw new Exception("Connection closed");
//                     bytesRead += read;
//                 }

//                 int length = IPAddress.NetworkToHostOrder(BitConverter.ToInt32(lengthBuffer, 0));
//                 if (length <= 0 || length > 100000000) // Adjust this value as per your requirement
//                     throw new Exception("Invalid image length");

//                 // Receive the image data
//                 byte[] imageData = new byte[length];
//                 bytesRead = 0;
//                 while (bytesRead < imageData.Length)
//                 {
//                     int read = networkStream.Read(imageData, bytesRead, imageData.Length - bytesRead);
//                     if (read == 0) throw new Exception("Connection closed");
//                     bytesRead += read;
//                 }

//                 // Run the texture update code on the main thread
//                 UnityMainThreadDispatcher.Instance().Enqueue(() => {
//                     // Load the image into a Texture2D
//                     Texture2D texture = new Texture2D(2, 2);
//                     texture.LoadImage(imageData);

//                     // Update the RawImage component
//                     rawImage.texture = texture;
//                     rawImage.SetNativeSize();
//                 });
//             }
//             catch (Exception e)
//             {
//                 Debug.LogError(e);
//                 break;
//             }
//         }
//     }
// }



// using System;
// using System.IO;
// using System.Net;
// using System.Net.Sockets;
// using System.Threading;
// using UnityEngine;
// using UnityEngine.UI;

// public class ScreenReceiver : MonoBehaviour
// {
//     public string serverIP = "127.0.0.1";
//     public int serverPort = 9999;

//     private TcpClient client;
//     private NetworkStream networkStream;
//     private Thread receiveThread;
//     private RawImage rawImage;

//     void Start()
//     {
//         // Set up the RawImage component
//         rawImage = GetComponent<RawImage>();

//         // Connect to the server
//         client = new TcpClient(serverIP, serverPort);
//         networkStream = client.GetStream();

//         // Start the receive thread
//         receiveThread = new Thread(ReceiveData);
//         receiveThread.Start();
//     }

//     //void ReceiveData()
//     //{
//     //    byte[] lengthBuffer = new byte[4];
//     //    while (true)
//     //    {
//     //        try
//     //        {
//     //            // Receive the image length
//     //            int bytesRead = 0;
//     //            while (bytesRead < lengthBuffer.Length)
//     //            {
//     //                int read = networkStream.Read(lengthBuffer, bytesRead, lengthBuffer.Length - bytesRead);
//     //                if (read == 0) throw new Exception("Connection closed");
//     //                bytesRead += read;
//     //            }

//     //            // int length = BitConverter.ToInt32(lengthBuffer, 0);
//     //            int length = IPAddress.NetworkToHostOrder(BitConverter.ToInt32(lengthBuffer, 0));

//     //            if (length <= 0 || length > 100000000) // Adjust this value as per your requirement
//     //                throw new Exception("Invalid image length");

//     //            // Receive the image data
//     //            byte[] imageData = new byte[length];
//     //            bytesRead = 0;
//     //            while (bytesRead < imageData.Length)
//     //            {
//     //                int read = networkStream.Read(imageData, bytesRead, imageData.Length - bytesRead);
//     //                if (read == 0) throw new Exception("Connection closed");
//     //                bytesRead += read;
//     //            }

//     //            // Run the texture update code on the main thread
//     //            if (UnityMainThreadDispatcher.Instance() != null)
//     //            {
//     //                UnityMainThreadDispatcher.Instance().Enqueue(() => {
//     //                    // Load the image into a Texture2D
//     //                    Texture2D texture = new Texture2D(2, 2);
//     //                    texture.LoadImage(imageData);

//     //                    // Update the RawImage component
//     //                    rawImage.texture = texture;
//     //                    rawImage.SetNativeSize();
//     //                });
//     //            }
//     //        }
//     //        catch (Exception e)
//     //        {
//     //            Debug.LogError(e);
//     //            break;
//     //        }
//     //    }
//     //}

//     void ReceiveData()
//     {
//         byte[] lengthBuffer = new byte[4];
//         while (true)
//         {
//             try
//             {
//                 // Receive the image length
//                 int bytesRead = 0;
//                 while (bytesRead < lengthBuffer.Length)
//                 {
//                     int read = networkStream.Read(lengthBuffer, bytesRead, lengthBuffer.Length - bytesRead);
//                     if (read == 0) throw new Exception("Connection closed");
//                     bytesRead += read;
//                 }

//                 // int length = BitConverter.ToInt32(lengthBuffer, 0);
//                 int length = IPAddress.NetworkToHostOrder(BitConverter.ToInt32(lengthBuffer, 0));
//                 if (length <= 0 || length > 100000000) // Adjust this value as per your requirement
//                     throw new Exception("Invalid image length");

//                 // Receive the image data
//                 byte[] imageData = new byte[length];
//                 bytesRead = 0;
//                 while (bytesRead < imageData.Length)
//                 {
//                     int read = networkStream.Read(imageData, bytesRead, imageData.Length - bytesRead);
//                     if (read == 0) throw new Exception("Connection closed");
//                     bytesRead += read;
//                 }
//                 Debug.Log($"Received image data of size {imageData.Length} bytes");
//                 // Run the texture update code on the main thread

//                 Debug.Log($"UnityMainThreadDispatcher instance is null: {UnityMainThreadDispatcher.Instance() == null}");

//                 if (UnityMainThreadDispatcher.Instance() != null)
//                 {
//                     UnityMainThreadDispatcher.Instance().Enqueue(() => {
//                         Debug.Log("Entering texture update code");
//                         if (rawImage == null) return;
//                         Debug.Log("CODE TWO");
//                         // Load the image into a Texture2D
//                         Texture2D texture = new Texture2D(2, 2);
//                         texture.LoadImage(imageData);
//                         Debug.Log($"Applying texture of size {texture.width}x{texture.height}");

//                         // Update the RawImage component
//                         rawImage.texture = texture;
//                         rawImage.SetNativeSize();
//                     });
//                 }
//             }
//             catch (Exception e)
//             {
//                 Debug.LogError(e);
//                 break;
//             }
//         }
//     }

//     void OnDestroy()
//     {
//         // Clean up
//         if (receiveThread != null)
//             receiveThread.Abort();
//         if (networkStream != null)
//             networkStream.Close();
//         if (client != null)
//             client.Close();
//     }
// }