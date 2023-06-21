using UnityEngine;
using System.IO;

public class FileLoader : MonoBehaviour
{
    private void Start()
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, "unity_assets/MainIsland.prefab");

        if (File.Exists(filePath))
        {
            string jsonContent = File.ReadAllText(filePath);
            Debug.Log("File content: " + jsonContent);
        }
        else
        {
            Debug.LogError("File not found: " + filePath);
        }
    }
}
