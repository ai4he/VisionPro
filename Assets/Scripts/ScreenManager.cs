using System.Collections.Generic;
using UnityEngine;

public class ScreenManager : MonoBehaviour
{
    public GameObject screenPrefab;
    public GameObject screensContainer;
    public string host = "198.21.172.85";
    public int basePort = 9999;
    private Dictionary<int, ScreenReceiver> screens = new Dictionary<int, ScreenReceiver>();

    public void StartScreen(int monitorId)
    {
        if (screens.ContainsKey(monitorId)) return;
        Debug.Log(screensContainer.transform.childCount);
        GameObject screenObject = Instantiate(screenPrefab, screensContainer.transform);
        // Debug.Log("This is a debug message.");
        // Debug.Log(screens.Count);
        screenObject.transform.position = screensContainer.transform.position + new Vector3(screens.Count*1, 0, 0); // Set the position of the new screen
        screenObject.transform.localScale = new Vector3((float)0.1, (float)0.1, (float)0.1); 
        Transform canvasTransform = screenObject.transform.Find("Canvas");
        if (canvasTransform != null)
        {
            canvasTransform.localScale = Vector3.one;
        }
        // RectTransform rectTransform = screenObject.GetComponent<RectTransform>();
        // rectTransform.sizeDelta = new Vector2(320, 240);

        ScreenReceiver screen = screenObject.GetComponent<ScreenReceiver>();
        screen.StartReceiving(host, basePort + monitorId);

        screens.Add(monitorId, screen);
        Debug.Log(screensContainer.transform.childCount);
    }

    public void StopScreen(int monitorId)
    {
        if (!screens.ContainsKey(monitorId)) return;

        ScreenReceiver screen = screens[monitorId];
        screen.StopReceiving();

        screens.Remove(monitorId);

        Destroy(screen.gameObject);
    }

    public bool IsScreenActive(int monitorId)
    {
        return screens.ContainsKey(monitorId);
    }

    public void HandleCommand(string command)
    {
        string[] parts = command.Split(' ');
        string action = parts[0];
        int monitorId = int.Parse(parts[1]);

        if (action == "start")
        {
            if (!IsScreenActive(monitorId))
            {
                StartScreen(monitorId);
            }
        }
        else if (action == "stop")
        {
            if (IsScreenActive(monitorId))
            {
                StopScreen(monitorId);
            }
        }
    }
}
