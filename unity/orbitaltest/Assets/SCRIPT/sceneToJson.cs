using UnityEngine;
using UnityEditor;
using System.IO;

public class SceneToJsonConverter : MonoBehaviour
{
    [MenuItem("Custom/Save Scene to JSON")]
    private static void SaveSceneToJson()
    {
        // Get the current active scene
        UnityEngine.SceneManagement.Scene currentScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene();

        // Create a container object to store the scene data
        SceneDataContainer sceneData = new SceneDataContainer();
        sceneData.name = currentScene.name;
        sceneData.objects = new SceneObjectData[currentScene.rootCount];

        // Iterate through all root objects in the scene
        for (int i = 0; i < currentScene.rootCount; i++)
        {
            GameObject rootObject = currentScene.GetRootGameObjects()[i];

            // Create an object data structure to store the object's information
            SceneObjectData objectData = new SceneObjectData();
            objectData.name = rootObject.name;
            objectData.position = rootObject.transform.position;
            objectData.rotation = rootObject.transform.rotation;
            objectData.scale = rootObject.transform.localScale;
            //objectData.prefabPath = PrefabUtility.GetPrefabAssetPathOfNearestInstanceRoot(rootObject);

            // Store the components of the object
            objectData.components = rootObject.GetComponents<Component>();

            sceneData.objects[i] = objectData;
        }

        // Serialize the scene data to JSON
        string sceneJson = JsonUtility.ToJson(sceneData, true);

        // Specify the file path to save the JSON file
        string filePath = Path.Combine(Application.dataPath, "scene.json");

        // Write the JSON string to the file
        File.WriteAllText(filePath, sceneJson);

        Debug.Log("Scene saved as JSON file: " + filePath);
    }
}

[System.Serializable]
public class SceneDataContainer
{
    public string name;
    public SceneObjectData[] objects;
}

[System.Serializable]
public class SceneObjectData
{
    public string name;
    public Vector3 position;
    public Quaternion rotation;
    public Vector3 scale;
    public Component[] components;
    //public string prefabPath;
}
