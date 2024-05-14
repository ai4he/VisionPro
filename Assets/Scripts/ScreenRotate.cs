// using UnityEngine;

// public class ScreenScaler : MonoBehaviour
// {
//     private Vector3 initialScale;
//     private float initialY;

//     private void OnMouseDown()
//     {
//         initialScale = transform.localScale;
//         initialY = Input.mousePosition.y;
//     }

//     private void OnMouseDrag()
//     {
//         if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
//         {
//             float deltaY = Input.mousePosition.y - initialY;
//             Vector3 newScale = initialScale * (1 + deltaY * 0.01f); // 0.01f is a scaling factor you can adjust to change the sensitivity of the scaling
//             transform.localScale = newScale;
//         }
//     }
// }
// using UnityEngine;
// using UnityEngine.XR.Interaction.Toolkit;

// public class ScreenScaler : MonoBehaviour
// {
//     public XRRayInteractor leftHandInteractor;
//     public XRRayInteractor rightHandInteractor;

//     private float initialHandDistance;
//     private Vector3 initialScale;
//     private bool scalingMode = false;

//     private void Update()
//     {
//         if (!scalingMode)
//         {
//             if (CheckIfBothControllersPointing())
//             {
//                 // Start scaling
//                 scalingMode = true;
//                 initialHandDistance = Vector3.Distance(leftHandInteractor.transform.position, rightHandInteractor.transform.position);
//                 initialScale = transform.localScale;
//             }
//         }
//         else
//         {
//             if (CheckIfBothControllersPointing())
//             {
//                 // Continue scaling
//                 float currentHandDistance = Vector3.Distance(leftHandInteractor.transform.position, rightHandInteractor.transform.position);
//                 float scaleRatio = currentHandDistance / initialHandDistance;
//                 transform.localScale = initialScale * scaleRatio;
//             }
//             else
//             {
//                 // End scaling
//                 scalingMode = false;
//             }
//         }
//     }

//     private bool CheckIfBothControllersPointing()
//     {
//         RaycastHit leftHit;
//         RaycastHit rightHit;

//         bool isLeftPointing = leftHandInteractor.TryGetCurrent3DRaycastHit(out leftHit);
//         bool isRightPointing = rightHandInteractor.TryGetCurrent3DRaycastHit(out rightHit);

//         if (isLeftPointing && isRightPointing)
//         {
//             if (leftHit.transform == transform && rightHit.transform == transform)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }
// }


// using UnityEngine;
// using UnityEngine.XR.Interaction.Toolkit;
// using UnityEngine.XR;

// public class ScreenScaler : MonoBehaviour
// {
//     public XRController leftHandController;
//     public XRController rightHandController;

//     private float initialHandDistance;
//     private Vector3 initialScale;
//     private bool scalingMode = false;

//     private void Update()
//     {
//         if (!scalingMode)
//         {
//             if (CheckIfBothControllersPointing())
//             {
//                 // Start scaling
//                 scalingMode = true;
//                 initialHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
//                 initialScale = transform.localScale;
//             }
//         }
//         else
//         {
//             if (CheckIfBothControllersPointing())
//             {
//                 // Continue scaling
//                 float currentHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
//                 float scaleRatio = currentHandDistance / initialHandDistance;
//                 transform.localScale = initialScale * scaleRatio;
//             }
//             else
//             {
//                 // End scaling
//                 scalingMode = false;
//             }
//         }
//     }

//     private bool CheckIfBothControllersPointing()
//     {
//         RaycastHit leftHit;
//         RaycastHit rightHit;

//         bool isLeftPointing = Physics.Raycast(leftHandController.transform.position, leftHandController.transform.forward, out leftHit);
//         bool isRightPointing = Physics.Raycast(rightHandController.transform.position, rightHandController.transform.forward, out rightHit);

//         if (isLeftPointing && isRightPointing)
//         {
//             if (leftHit.transform == transform && rightHit.transform == transform)
//             {
//                 if (leftHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool leftTriggerPressed) && leftTriggerPressed
//                     && rightHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool rightTriggerPressed) && rightTriggerPressed)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }

// }










//////////////////////////////////////////////////////////////////////////////////////////////////
///

using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR;

public class ScreenRotate : MonoBehaviour
{
    public XRController leftHandController;
    public XRController rightHandController;
    public LayerMask screenLayer; // Layer of the screen
    public float rotationSpeed = 20f;
    private float initialHandDistance;
    private Vector3 initialScale;
    private bool scalingMode = false;
   


    void Update()
    {
        // Check if both controllers are pointing at the screen
       
         Rotate();
        // Your rotation logic should be here or in another method, 
        // ensuring it only modifies transform.rotation
    }



  void Rotate()
    {
        // Check if left controller is pointing
        if (CheckifLeftControllersPointing())
        {
            if (leftHandController.inputDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 leftThumbstick) && leftThumbstick.x != 0)
            {
                // Rotate based on left thumbstick horizontal movement
                transform.Rotate(Vector3.up, leftThumbstick.x * rotationSpeed * Time.deltaTime, Space.World);
            }
        }

        // Check if right controller is pointing
        if (CheckifRightControllersPointing())
        {
            if (rightHandController.inputDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 rightThumbstick) && rightThumbstick.x != 0)
            {
                // Rotate based on right thumbstick horizontal movement
                transform.Rotate(Vector3.up, rightThumbstick.x * rotationSpeed * Time.deltaTime, Space.World);
                scalingMode = false;
            }
        }
    }


    private bool CheckifLeftControllersPointing(){

        bool isLeftPointing = Physics.Raycast(leftHandController.transform.position, leftHandController.transform.forward, out RaycastHit leftHit, Mathf.Infinity, screenLayer);
        
        return isLeftPointing && leftHit.transform == transform;

    }


    private bool CheckifRightControllersPointing(){


        bool isRightPointing = Physics.Raycast(rightHandController.transform.position, rightHandController.transform.forward, out RaycastHit rightHit, Mathf.Infinity, screenLayer);
        return isRightPointing && rightHit.transform == transform;
    }

    
   
}


