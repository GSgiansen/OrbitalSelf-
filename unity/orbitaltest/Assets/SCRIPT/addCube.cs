using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;

public class addCube : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject existingCube;
    public GameObject cubePrefab;
    public GameObject dogPrefab;
    public GameObject plantPrefab;
    public GameObject chairPrefab;
    public GameObject catPrefab;

    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    
    void OnMessage(string message) {
        if (message.Equals("addcube"))
        {
            GenerateCubeToRight();
        }
        if (message.Equals("adddog")) {
            GenerateDogToFront();
        }
        if (message.Equals("addplant")) {
            GeneratePlantToRight();
        }
        if (message.Equals("addchair")) {
            GenerateChairToRight();
        }
        if (message.Equals("addcat")) {
            GenerateCatToMiddle();
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


    void GenerateDogToFront()
{
    // Set the distance at which the dog spawns from the existing cube
    float spawnDistance = 1.5f;

    // Calculate the position for the new dog
    Vector3 newPosition = existingCube.transform.position + existingCube.transform.forward * spawnDistance;

    // Instantiate a new dog at the calculated position
    GameObject newDog = Instantiate(dogPrefab, newPosition, Quaternion.identity);

    // Set the parent of the new dog to match the existing cube's parent
    newDog.transform.SetParent(existingCube.transform.parent);
    UnityMessageManager.Instance.SendMessageToFlutter("Added dog to the game");
}




    void GeneratePlantToRight() {
        float spawnDistance = 1f;
        Vector3 newPosition = existingCube.transform.position + existingCube.transform.right * spawnDistance;
        

        // Instantiate a new cube at the calculated position
        GameObject newCube = Instantiate(plantPrefab, newPosition, Quaternion.identity);

        // Set the parent of the new cube to match the existing cube's parent
        newCube.transform.SetParent(existingCube.transform.parent);
        UnityMessageManager.Instance.SendMessageToFlutter("Added dog to the game");

    }

    void GenerateChairToRight() {
        float spawnDistance = 1f;
        Vector3 newPosition = existingCube.transform.position + existingCube.transform.right * spawnDistance + existingCube.transform.forward * spawnDistance;
        
        

        // Instantiate a new cube at the calculated position
        GameObject newCube = Instantiate(chairPrefab, newPosition, Quaternion.identity);

        // Set the parent of the new cube to match the existing cube's parent
        newCube.transform.SetParent(existingCube.transform.parent);
        UnityMessageManager.Instance.SendMessageToFlutter("Added dog to the game");

    }

    void GenerateCatToMiddle() {
        float spawnDistance = 1.25f;
        Vector3 newPosition = existingCube.transform.position + existingCube.transform.right * spawnDistance + existingCube.transform.forward * spawnDistance;
        
        

        // Instantiate a new cube at the calculated position
        GameObject newCube = Instantiate(catPrefab, newPosition, Quaternion.identity);

        // Set the parent of the new cube to match the existing cube's parent
        newCube.transform.SetParent(existingCube.transform.parent);
        UnityMessageManager.Instance.SendMessageToFlutter("Added cat to the game");
    }
}
