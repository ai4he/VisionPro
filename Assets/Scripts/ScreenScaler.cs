using UnityEngine;

public class ScreenScaler : MonoBehaviour
{
    private Vector3 initialScale;
    private float initialY;

    private void OnMouseDown()
    {
        initialScale = transform.localScale;
        initialY = Input.mousePosition.y;
    }

    private void OnMouseDrag()
    {
        if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
        {
            float deltaY = Input.mousePosition.y - initialY;
            Vector3 newScale = initialScale * (1 + deltaY * 0.01f); // 0.01f is a scaling factor you can adjust to change the sensitivity of the scaling
            transform.localScale = newScale;
        }
    }
}
