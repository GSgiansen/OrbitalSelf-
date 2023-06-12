using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

public class JsonToSceneLocal : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        LoadSceneFromJson();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void LoadSceneFromJson()
    {
        string jsonFilePath = Path.Combine(Application.dataPath, "scene.json");

        if (File.Exists(jsonFilePath))
        {
            string jsonContent = File.ReadAllText(jsonFilePath);
            //SceneDataContainer sceneData = JsonUtility.FromJson<SceneDataContainer>(jsonContent);

            
            SceneDataContainer sceneData = JsonUtility.FromJson<SceneDataContainer>(jsonContent);
            if (sceneData != null)
            {
                foreach (SceneObjectData objectData in sceneData.objects)
                {
                    if (objectData.name == "") {
                        continue;
                    }
                    GameObject myPrefab = Resources.Load(objectData.name) as GameObject;
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
}

[System.Serializable]
public class SceneDataContainer{
    public string name;
    public SceneObjectData[] objects;
}