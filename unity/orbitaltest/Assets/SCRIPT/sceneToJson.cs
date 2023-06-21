using UnityEngine;
using System.Collections.Generic;
using System.Text;
using FlutterUnityIntegration;
public class SceneToJsonConverter : MonoBehaviour
{
    void Start() {
        UnityMessageManager.Instance.OnMessage += OnMessage;
    }

    void OnMessage(string message) {
        if (message == "saveScene") {
            UnityMessageManager.Instance.SendMessageToFlutter("saveScene");
            string jsonString = ConvertSceneToJson();
        }
    }
    public string ConvertSceneToJson()
    {
        List<SceneObjectData> sceneObjects = new List<SceneObjectData>();

        // Find all objects in the scene
        GameObject[] allObjects = GameObject.FindObjectsOfType<GameObject>();
        UnityMessageManager.Instance.SendMessageToFlutter("allObjects length is " + allObjects.Length);
        List<GameObject> parentObjects = new List<GameObject>();

// Iterate through the GameObjects
foreach (GameObject obj in allObjects)
{
    // Check if the GameObject is the top-level parent
    if (obj.transform.root.gameObject == obj)
    {
        // This is the top-level parent GameObject, add it to the list
        parentObjects.Add(obj);
    }
}





        foreach (GameObject obj in parentObjects)
        {
            UnityMessageManager.Instance.SendMessageToFlutter("obj name is " + obj.name);
            SceneObjectData objectData = new SceneObjectData();
            objectData.name = obj.name.Replace("(Clone)", "");
            objectData.position = new Position(obj.transform.position.x, obj.transform.position.y, obj.transform.position.z);
            objectData.rotation = obj.transform.rotation;
            objectData.scale = obj.transform.localScale;
            objectData.prefabPath = ""; // Set the prefab path if needed

            // Add component data if necessary
            // objectData.components = GetObjectComponentData(obj);

            sceneObjects.Add(objectData);
        }

        UnityMessageManager.Instance.SendMessageToFlutter("sceneObjects length is " + sceneObjects.Count);

        // Convert the scene objects to JSON string
        string jsonString = JsonHelper.ToJson<SceneObjectData>(sceneObjects.ToArray());

        UnityMessageManager.Instance.SendMessageToFlutter("upload" + jsonString);

        return jsonString;
    }
}

