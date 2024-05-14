using UnityEngine;
using UnityEngine.EventSystems;

public class ScreenDragger : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    private Vector3 screenPoint;
    private Vector3 offset;

    private Vector3 initialScale;
    private float initialY;

    public void OnBeginDrag(PointerEventData eventData)
    {
        // Transform position from world space into screen space
        screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);
        offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector3(eventData.position.x, eventData.position.y, screenPoint.z));

        initialScale = transform.localScale;
        initialY = eventData.position.y;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
        {
            float deltaY = eventData.position.y - initialY;
            Vector3 newScale = initialScale * (1 + deltaY * 0.01f); // 0.01f is a scaling factor you can adjust to change the sensitivity of the scaling
            transform.localScale = newScale;
        }
        else
        {
            Vector3 curScreenPoint = new Vector3(eventData.position.x, eventData.position.y, screenPoint.z);
            Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + offset;
            // Ensure the position change only affects the x and y coordinates
            transform.position = new Vector3(curPosition.x, curPosition.y, transform.position.z);
        }
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        // You can add logic here for what should happen after the drag ends
    }
}


// using UnityEngine;
// using UnityEngine.EventSystems;

// public class ScreenDragger : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
// {
//     private Vector3 screenPoint;
//     private Vector3 offset;

//     public void OnBeginDrag(PointerEventData eventData)
//     {
//         // Transform position from world space into screen space
//         screenPoint = Camera.main.WorldToScreenPoint(gameObject.transform.position);
//         offset = gameObject.transform.position - Camera.main.ScreenToWorldPoint(new Vector3(eventData.position.x, eventData.position.y, screenPoint.z));
//     }

//     public void OnDrag(PointerEventData eventData)
//     {
//         Vector3 curScreenPoint = new Vector3(eventData.position.x, eventData.position.y, screenPoint.z);
//         Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + offset;
//         // Ensure the position change only affects the x and y coordinates
//         transform.position = new Vector3(curPosition.x, curPosition.y, transform.position.z);
//     }

//     public void OnEndDrag(PointerEventData eventData)
//     {
//         // You can add logic here for what should happen after the drag ends
//     }
// }
