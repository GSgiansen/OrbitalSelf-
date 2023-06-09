using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;

public class changeColor : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject existingCube;
    public GameObject cubePrefab;

    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnMessage(string message) {
        if (message.Equals("ChangeColor"))
        {
            UpdateColor();
        }
        else if (message.Equals("addCube"))
        {
            GenerateCubeToRight();
        }
    }

    private void UpdateColor()
    {
        GameObject cube = GameObject.Find("Cube"); // Find the cube object in the scene
        Renderer cubeRenderer = cube.GetComponent<Renderer>(); // Get the renderer component of the cube
        
        // Set the color of the cube to red
        cubeRenderer.material.color = Color.red;
        
        // Send a message back to Flutter with the updated color value
        UnityMessageManager.Instance.SendMessageToFlutter("ColorUpdated:FF0000");
    }
    void GenerateCubeToRight()
    {
        // Calculate the position for the new cube
        Vector3 newPosition = existingCube.transform.position + existingCube.transform.right * existingCube.transform.localScale.x;

        // Instantiate a new cube at the calculated position
        GameObject newCube = Instantiate(cubePrefab, newPosition, Quaternion.identity);

        // Set the parent of the new cube to match the existing cube's parent
        newCube.transform.SetParent(existingCube.transform.parent);
        UnityMessageManager.Instance.SendMessageToFlutter("Added new cube to the right");

    }
}
