

using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;

public class ScreenMove : MonoBehaviour
{
    public XRController rightHandController;
    public XRController leftHandController;
    public LayerMask screenLayer; // Layer of the screen
    public float moveSpeed = 0.07f; // Adjust to set the speed of the screen movement
    //public float rotationSpeed = 0.01f; // Adjust to set the speed of the screen rotation

    private Vector3 lastRightPosition;
    private Vector3 lastLeftPosition;

    void Update()
    {
        // Right Controller
        if (CheckIfControllerPointing(rightHandController))
        {
            HandleGripAndMovement(rightHandController);
        }

        // Left Controller
        if (CheckIfControllerPointing(leftHandController))
        {
            HandleGripAndMovement(leftHandController);
        }
        // Rotate();
        // Rotate screen based on the controllers movement in opposite directions
        // if (IsGripPressed(rightHandController) && IsGripPressed(leftHandController) && CheckIfControllerPointing(rightHandController) && CheckIfControllerPointing(leftHandController))
        // {
        //     Vector3 rightDiff = rightHandController.transform.position - lastRightPosition;
        //     Vector3 leftDiff = leftHandController.transform.position - lastLeftPosition;

        //     float angle = Vector3.SignedAngle(rightDiff, -leftDiff, Vector3.up);
        //     transform.Rotate(0, angle * rotationSpeed, 0);
        // }

        // lastRightPosition = rightHandController.transform.position;
        // lastLeftPosition = leftHandController.transform.position;
    }

    private void HandleGripAndMovement(XRController controller)
    {
        // Detect grip button pressed on the controller
        if (IsGripPressed(controller))
        {
            Debug.Log("Controller's grip is pressed while pointing at the target GameObject!");

            // Check if the device has a velocity feature
            if (controller.inputDevice.TryGetFeatureValue(CommonUsages.deviceVelocity, out Vector3 velocity))
            {
                // Move the screen towards the controller at the speed of the controller's velocity times a move speed factor
                transform.position += velocity * moveSpeed;
            }
        }
    }

    private bool CheckIfControllerPointing(XRController controller)
    {
        return Physics.Raycast(controller.transform.position, controller.transform.forward, out RaycastHit hit, Mathf.Infinity, screenLayer) && hit.transform == transform;
    }

    private bool IsGripPressed(XRController controller)
    {
        return controller.inputDevice.TryGetFeatureValue(CommonUsages.gripButton, out bool gripPressed) && gripPressed;
    }



    
}





