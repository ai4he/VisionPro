// using UnityEngine;
// using UnityEngine.XR.Interaction.Toolkit;
// using UnityEngine.XR;

// public class ScreenResize : MonoBehaviour
// {
//     public XRController leftHandController;
//     public XRController rightHandController;

//     private float initialHandDistance;
//     private Vector3 initialScale;

//     private bool scalingMode = false;

//     void Update()
//     {
//         // Detect grip button pressed on both controllers
//         if (leftHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool leftTriggerPressed) 
//             && rightHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool rightTriggerPressed))

//         {
//             if (leftTriggerPressed && rightTriggerPressed)
//             {
//                 // Begin scaling
//                 if (!scalingMode)
//                 {
//                     scalingMode = true;
//                     initialHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
//                     initialScale = transform.localScale;
//                 }

//                 // Continue scaling
//                 else
//                 {
//                     float currentHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
//                     float scaleRatio = currentHandDistance / initialHandDistance;
//                     transform.localScale = initialScale * scaleRatio;
//                 }
//             }

//             // End scaling
//             else
//             {
//                 scalingMode = false;
//             }
//         }
//     }
// }




using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR;

public class ScreenResize : MonoBehaviour
{
    public XRController leftHandController;
    public XRController rightHandController;
    public LayerMask screenLayer; // Layer of the screen
    public float rotationSpeed = 1f;
    private float initialHandDistance;
    private Vector3 initialScale;
    private bool scalingMode = false;
   

    // void Update()
    // {

        
    //     // Check if both controllers are pointing at the screen
    //     if (CheckIfBothControllersPointing())
    //     {
    //         // Detect grip button pressed on both controllers
    //         if (leftHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool leftTriggerPressed)
    //             && rightHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool rightTriggerPressed))
    //         {
    //             if (leftTriggerPressed && rightTriggerPressed)
    //             {
    //                 // Begin scaling
    //                 if (!scalingMode)
    //                 {
    //                     scalingMode = true;
    //                     initialHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
    //                     initialScale = transform.localScale;
    //                 }

    //                 // Continue scaling
    //                 else
    //                 {
    //                     float currentHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
    //                     float scaleRatio = currentHandDistance / initialHandDistance;
    //                     transform.localScale = initialScale * scaleRatio;
    //                 }
    //             }

    //             // End scaling
    //             else
    //             {
    //                 scalingMode = false;
    //             }
    //         }
    //     }
    //     else
    //     {
    //         scalingMode = false;
    //     }

        
    // }
    void Update()
    {
        // Check if both controllers are pointing at the screen
        if (CheckIfBothControllersPointing())
        {
            // Detect grip button pressed on both controllers
            if (leftHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool leftTriggerPressed)
                && rightHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool rightTriggerPressed))
            {
                if (leftTriggerPressed && rightTriggerPressed)
                {
                    // Begin scaling
                    if (!scalingMode)
                    {
                        scalingMode = true;
                        initialHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
                        initialScale = transform.localScale;
                    }

                    // Continue scaling
                    else
                    {
                        float currentHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
                        float scaleRatio = currentHandDistance / initialHandDistance;
                        transform.localScale = initialScale * scaleRatio;
                    }
                }

                // End scaling
                else
                {
                    scalingMode = false;
                }
            }
        }
        else
        {
            scalingMode = false;
        }
        //  Rotate();
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

    private bool CheckIfBothControllersPointing()
    {
        bool isLeftPointing = Physics.Raycast(leftHandController.transform.position, leftHandController.transform.forward, out RaycastHit leftHit, Mathf.Infinity, screenLayer);
        bool isRightPointing = Physics.Raycast(rightHandController.transform.position, rightHandController.transform.forward, out RaycastHit rightHit, Mathf.Infinity, screenLayer);

        return isLeftPointing && isRightPointing && leftHit.transform == transform && rightHit.transform == transform;
    }

   



    // private void RotateScreenBasedOnControllerInput()
    // {
    //     // Check for left controller pointing and trigger press
    //     if (IsControllerPointingAndTriggerPressed(leftHandController))
    //     {
    //         // Rotate to the left
    //         transform.Rotate(0, 0, rotationSpeed * Time.deltaTime, Space.World);
    //     }

    //     // Check for right controller pointing and trigger press
    //     if (IsControllerPointingAndTriggerPressed(rightHandController))
    //     {
    //         // Rotate to the right
    //         transform.Rotate(0, 0, -rotationSpeed * Time.deltaTime, Space.World);
    //     }
    // }

    // private bool IsControllerPointingAndTriggerPressed(XRController controller)
    // {
    //     bool isPointing = Physics.Raycast(controller.transform.position, controller.transform.forward, out RaycastHit hit, Mathf.Infinity, screenLayer);
    //     controller.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool triggerPressed);

    //     return isPointing && triggerPressed && hit.transform == transform;
    // }
}


// using System.IO;
// using UnityEngine;
// using UnityEngine.XR.Interaction.Toolkit;
// using UnityEngine.XR;

// public class ScreenResize : MonoBehaviour
// {
//     public XRController leftHandController;
//     public XRController rightHandController;
//     public LayerMask screenLayer; // Layer of the screen

//     private float initialHandDistance;
//     private Vector3 initialScale;
//     private Vector3 initialPosition;
//     private Vector3 finalPosition;
//     private bool scalingMode = false;

//     void Update()
//     {
//         // Check if both controllers are pointing at the screen
//         if (CheckIfBothControllersPointing())
//         {
//             // Detect grip button pressed on both controllers

//             // Detect grip button pressed on both controllers
           
    
             
              


//             if (leftHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool leftTriggerPressed)
//                 && rightHandController.inputDevice.TryGetFeatureValue(CommonUsages.triggerButton, out bool rightTriggerPressed))
//             {

//                 Debug.Log("Trigger pressed on left controller: " + leftTriggerPressed);
//                 Debug.Log("Trigger pressed on right controller: " + rightTriggerPressed);
//                 if (leftTriggerPressed && rightTriggerPressed)
//                 {
//                     // Begin scaling
//                     if (!scalingMode)
//                     {
//                         scalingMode = true;
//                         initialPosition = transform.position;  // Save the initial position
//                         initialHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
//                         initialScale = transform.localScale;
//                     }

//                     // Continue scaling
//                     else
//                     {
//                         float currentHandDistance = Vector3.Distance(leftHandController.transform.position, rightHandController.transform.position);
//                         float scaleRatio = currentHandDistance / initialHandDistance;
//                         transform.localScale = initialScale * scaleRatio;
//                     }
//                 }

//                 // End scaling
//                 else
//                 {
//                     // finalPosition = transform.position; // Save the final position
//                     // WritePositionToFile(initialPosition, finalPosition, "positions.txt"); // Save positions to file
//                     scalingMode = false;
//                 }
//             }
//         }
//         else
//         {
//             scalingMode = false;
//         }
//     }

//     private bool CheckIfBothControllersPointing()
//     {
//         bool isLeftPointing = Physics.Raycast(leftHandController.transform.position, leftHandController.transform.forward, out RaycastHit leftHit, Mathf.Infinity, screenLayer);
//         bool isRightPointing = Physics.Raycast(rightHandController.transform.position, rightHandController.transform.forward, out RaycastHit rightHit, Mathf.Infinity, screenLayer);

//         return isLeftPointing && isRightPointing && leftHit.transform == transform && rightHit.transform == transform;
//     }

//     private void WritePositionToFile(Vector3 initialPos, Vector3 finalPos, string filename)
//     {
//         string path = Application.persistentDataPath + "/" + filename;
//         string content = "Initial Position - x: " + initialPos.x + ", y: " + initialPos.y + ", z: " + initialPos.z;
//         content += "\nFinal Position - x: " + finalPos.x + ", y: " + finalPos.y + ", z: " + finalPos.z;

//         try
//         {
//             // If the file exists, append a new line. Otherwise, create the file.
//             if (File.Exists(path))
//             {
//                 File.AppendAllText(path, "\n\n" + content);
//             }
//             else
//             {
//                 File.WriteAllText(path, content);
//             }

//             Debug.Log("Position written to file successfully: " + path);
//         }
//         catch (System.Exception e)
//         {
//             Debug.LogError("Failed to write position to file: " + e.Message);
//         }
//     }

// }



