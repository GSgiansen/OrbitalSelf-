using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;

public class addCube : MonoBehaviour
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
        if (message.Equals("addCube"))
        {
            GenerateCubeToRight();
        }
    }
    void GenerateCubeToRight()
    {
        // Calculate the position for the new cube
        Vector3 newPosition = existingCube.transform.position + existingCube.transform.right * existingCube.transform.localScale.x;

        // Instantiate a new cube at the calculated position
        GameObject newCube = Instantiate(cubePrefab, newPosition, Quaternion.identity);

        // Set the parent of the new cube to match the existing cube's parent
        newCube.transform.SetParent(existingCube.transform.parent);
        UnityMessageManager.Instance.SendMessageToFlutter("Added new cube to the right from empty game ");
    }
}
