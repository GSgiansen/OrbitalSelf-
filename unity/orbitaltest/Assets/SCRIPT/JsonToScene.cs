using UnityEngine;
using System.IO;
using FlutterUnityIntegration;
using System.Collections.Generic;

public class JsonLoader : MonoBehaviour
{

//sending the json file from flutter 
    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;

        GameObject[] allObjects = UnityEngine.Object.FindObjectsOfType<GameObject>();
        UnityMessageManager.Instance.SendMessageToFlutter("allObjects length is " + allObjects.Length);

    }

    void OnMessage(string message) {
        UnityMessageManager.Instance.SendMessageToFlutter("message is " + message.Substring(0, 27));
        LoadSceneFromJson(message);
        //GameObject cube = Resources.Load("Tree") as GameObject;
        //Instantiate(cube, new Vector3(1, 0.5f, 1), Quaternion.identity);
        //message would be the json string
        //save the json string to a file
        //load the scene from the file
    
    }
    public void LoadSceneFromJson(string jsonString) {
        UnityMessageManager.Instance.SendMessageToFlutter("jsonString length is " + jsonString.Length);
        UnityMessageManager.Instance.SendMessageToFlutter(jsonString);
        SceneObjectData[] sceneData = JsonHelper.FromJson<SceneObjectData>(jsonString);
        UnityMessageManager.Instance.SendMessageToFlutter("loaded sceneData");
        if (sceneData != null)
        {
            foreach (SceneObjectData objectData in sceneData)
            {
                if (objectData.name == "")
                {
                    continue;
                }
                UnityMessageManager.Instance.SendMessageToFlutter("object name is " + objectData.name);
                GameObject myPrefab = Resources.Load(objectData.name) as GameObject;
                Instantiate(myPrefab, new Vector3(objectData.position.x, objectData.position.y, objectData.position.z), objectData.rotation);
                if (myPrefab.CompareTag("Tree")) {
                    UnityMessageManager.Instance.SendMessageToFlutter("tree spawned");
                    addCube newScript = myPrefab.AddComponent<addCube>();

                }
            }
        }
    }
    /*
    private void SaveToJsonFile(string jsonString, string jsonFilePath)
    {
        UnityMessageManager.Instance.SendMessageToFlutter("jsonString length is " + jsonString.Length);

        File.WriteAllText(jsonFilePath, jsonString);
        Debug.Log("JSON file saved to: " + jsonFilePath);
        LoadSceneFromJson(jsonFilePath);
    }
    

    private void LoadSceneFromJson(string jsonFilePath)
    {
        if (File.Exists(jsonFilePath))
        {
            UnityMessageManager.Instance.SendMessageToFlutter("File exists, file path is " + jsonFilePath);
            string jsonContent = File.ReadAllText(jsonFilePath);
            UnityMessageManager.Instance.SendMessageToFlutter("json content is " + jsonContent.Length);
            GameObject cube = Resources.Load("Tree") as GameObject;
            cube.transform.position = new Vector3(1, 0.5f, 1);
            UnityMessageManager.Instance.SendMessageToFlutter(cube.name);
            SceneDataContainer sceneData = JsonUtility.FromJson<SceneDataContainer>(jsonContent);
            UnityMessageManager.Instance.SendMessageToFlutter("sceneData is " + sceneData.name);

            
            SceneDataContainer sceneData = JsonUtility.FromJson<SceneDataContainer>(jsonContent);
            UnityMessageManager.Instance.SendMessageToFlutter("sceneData is " + sceneData.name);
            if (sceneData != null)
            {
                UnityMessageManager.Instance.SendMessageToFlutter("sceneData is not null");
                foreach (SceneObjectData objectData in sceneData.objects)
                {
                    if (objectData.name == "") {
                        continue;
                    }
                    GameObject myPrefab = Resources.Load(objectData.name) as GameObject;
                    UnityMessageManager.Instance.SendMessageToFlutter("loaded object with" + objectData.name);
                    print(myPrefab);
                    Instantiate(myPrefab, objectData.position, objectData.rotation);
                    
                }
            }
            
        }

        else
        {
            Debug.LogError("Cannot load scene data, because the file does not exist.");
        }
    }
    */
}


[System.Serializable]
public class SceneObjectData
{
    public string name;
    public Position position;
    public Quaternion rotation;
    public Vector3 scale;
    public string prefabPath;
}

[System.Serializable]
public class Position
{

    public float x;
    public float y;
    public float z;
    public Position(float x, float y, float z)
    {
        this.x = x;
        this.y = y;
        this.z = z;
    }
    public static implicit operator Vector3(Position position)
    {
        return new Vector3(position.x, position.y, position.z);
    }
}

[System.Serializable]
public class ComponentData
{
    public int instanceID;
}
