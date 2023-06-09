using UnityEngine;
using System.IO;

public class JsonLoader : MonoBehaviour
{
string jsonFilePath = Path.Combine(Application.dataPath, "scene.json");

    void Start()
    {
        LoadSceneFromJson();
    }

    private void LoadSceneFromJson()
    {
        if (File.Exists(jsonFilePath))
        {
            string jsonContent = File.ReadAllText(jsonFilePath);
            SceneDataContainer sceneData = JsonUtility.FromJson<SceneDataContainer>(jsonContent);

            if (sceneData != null)
            {
                foreach (SceneObjectData objectData in sceneData.objects)
                {
                    GameObject obj = GameObject.CreatePrimitive(PrimitiveType.Cube);
                    obj.transform.position = objectData.position;
                    obj.transform.rotation = objectData.rotation;
                    obj.transform.localScale = objectData.scale;
                    
                    
                }
            }
            else
            {
                Debug.LogError("Failed to deserialize scene data from JSON.");
            }
        }
        else
        {
            Debug.LogError("JSON file not found: " + jsonFilePath);
        }
    }
}
