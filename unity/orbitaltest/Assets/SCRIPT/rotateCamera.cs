using UnityEngine;
using FlutterUnityIntegration;

public class CameraRotation : MonoBehaviour
{
    public Transform target; // The central point of rotation
    public float rotationSpeed =10f; // Speed of rotation

    private Vector3 offset; // Distance between camera and target
    private bool mainIslandFound = false;

    private void Start()
    {


        UnityMessageManager.Instance.OnMessage += OnMessage;
    }

    private void Update()
    {
        // Check for input from the left arrow key (KeyCode.LeftArrow)
        SetMainIsland();
        if (Input.GetKey(KeyCode.LeftArrow))
        {
            RotateCamera(-rotationSpeed);
        }
        // Check for input from the right arrow key (KeyCode.RightArrow)
        else if (Input.GetKey(KeyCode.RightArrow))
        {
            RotateCamera(rotationSpeed);
        }
    }

    public void OnMessage(string message)
    {
        if (message == "rotateLeft")
        {
            RotateCamera(-rotationSpeed);
        }
        else if (message == "rotateRight")
        {
            RotateCamera(rotationSpeed);
        }
    }

    private void RotateCamera(float direction)
    {
        // Calculate the desired position in the circular path
        float angle = Time.time * direction * 4;
        Vector3 desiredPosition = target.position + Quaternion.Euler(0f, angle, 0f) * offset;

        // Rotate the camera smoothly towards the desired position
        transform.position = Vector3.Lerp(transform.position, desiredPosition, Time.deltaTime * rotationSpeed);

        // Make the camera look at the target
        transform.LookAt(target);
    }

    private void SetMainIsland()
    {
        // Get the main island
        GameObject mainIsland = GameObject.FindWithTag("MainIsland");

        // Set the target to the main island
        if (mainIsland != null) {
            target = mainIsland.transform;
            if (mainIslandFound == false) {
                UnityMessageManager.Instance.SendMessageToFlutter("mainIslandFound");
                mainIslandFound = true;
                Debug.Log("Main island found");
                offset = transform.position - target.position;
            }

            
        }
    }
}


