using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;


public class Rotatecamera : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private Vector3 targetRotation = new Vector3(45f, 0f, 0f); // Set the desired rotation angle
    public float rotationSpeed = 10f;

    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;

    }

    // Update is called once per frame
    void Update()
    {
    }
    void OnMessage(string message) {
        if (message == "RotateCameraLeft")
        {
            RotateCamera(-rotationSpeed);
        }
        else if (message == "RotateCameraRight")
        {
            RotateCamera(rotationSpeed);
        }
    }

    public void RotateCamera(float rotationAmount) {
                // Get the reference to the main camera
        transform.Rotate(Vector3.up, rotationAmount * Time.deltaTime);
    }

}
