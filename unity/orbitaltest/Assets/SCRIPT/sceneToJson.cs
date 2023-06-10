using UnityEngine;
using UnityEditor;
using System.IO;
using System.Collections.Generic;

public class SceneToJsonConverter : MonoBehaviour
{
    //[MenuItem("Tools/Save Scene to JSON")]
    private static void SaveSceneToJson()
    {
        // Get the current active scene
        UnityEngine.SceneManagement.Scene currentScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene();

        SceneObjectData[] sceneData = new SceneObjectData[currentScene.rootCount];

        // Iterate through all root objects in the scene
        for (int i = 0; i < currentScene.rootCount ; i++)
        {
            if (currentScene.GetRootGameObjects()[i].name == "MainCamera" ||
                currentScene.GetRootGameObjects()[i].name == "Directional Light" ||
                currentScene.GetRootGameObjects()[i].name == "GameObject")
            {
                continue;
            }

            GameObject rootObject = currentScene.GetRootGameObjects()[i];

            // Create an object data structure to store the object's information
            SceneObjectData objectData = new SceneObjectData();
            objectData.name = rootObject.name;
            objectData.position = new Position
            {
                x = rootObject.transform.position.x,
                y = rootObject.transform.position.y,
                z = rootObject.transform.position.z
            };
            objectData.rotation = new Quaternion
            {
                x = rootObject.transform.rotation.x,
                y = rootObject.transform.rotation.y,
                z = rootObject.transform.rotation.z,
                w = rootObject.transform.rotation.w
            };
            objectData.scale = new Vector3
            {
                x = rootObject.transform.localScale.x,
                y = rootObject.transform.localScale.y,
                z = rootObject.transform.localScale.z
            };

            /*
            // Store the components of the object
            Component[] components = rootObject.GetComponents<Component>();
            List<ComponentData> componentDataList = new List<ComponentData>();
            foreach (Component component in components)
            {
                ComponentData componentData = new ComponentData
                {
                    instanceID = component.GetInstanceID()
                };
                componentDataList.Add(componentData);
            }
            objectData.components = componentDataList.ToArray();
            */

            sceneData[i] = objectData;
            
        }

        // Serialize the scene data to JSON
        string sceneJson = JsonHelper.ToJson(sceneData, true);

        // Specify the file path to save the JSON file
        string filePath = Path.Combine(Application.dataPath, "scene.json");

        // Write the JSON string to the file
        File.WriteAllText(filePath, sceneJson);

        Debug.Log("Scene saved as JSON file: " + filePath);
    }
}
