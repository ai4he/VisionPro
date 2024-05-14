
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Networking;
using TMPro;

public class Response : MonoBehaviour
{
    public TextMeshProUGUI responseText;
    public TMP_InputField goalInputField;
    // Wrapper method for button click
    public void OnButtonClick()
    {
        StartCoroutine(PostDataToServer());
        ClearGoal();
    }

    // Converted to IEnumerator for coroutine
    IEnumerator PostDataToServer()
    {
        string session_id = ""; // Replace with your session ID
        string goal = "";
        string activities = "mk shoes women - Google Search,Untitled document - Google Docs, addidas shoes - Google Search,LSU Tigers Nike Off-Court Wordmark Slide Sandals,addidas shoes - Google Search";

        // Convert data to form data
        WWWForm form = new WWWForm();
        form.AddField("session_id", session_id);
        form.AddField("goal", goal);
        form.AddField("activities", activities);

        // Send request using UnityWebRequest
        using (UnityWebRequest request = UnityWebRequest.Post("https://api.haielab.org/submit", form))
        {
            yield return request.SendWebRequest();

            if (request.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError("Error: " + request.error);
                UpdateResponseText("Error: " + request.error);
            }
            else
            {
                // Successfully received response
                string responseBody = request.downloadHandler.text;
                UpdateResponseText(responseBody);
            }
        }
    }

    void UpdateResponseText(string text)
    {
        if (responseText != null)
        {
            responseText.text = text;
        }
    }

    void ClearGoal()
        {
            // Clear the text from the goal input field
            if (goalInputField != null)
            {
                goalInputField.text = string.Empty;
            }
        }
}
