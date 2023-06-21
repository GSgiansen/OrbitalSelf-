using UnityEngine;
using System.IO;

public class JsonToAssetLoader : MonoBehaviour
{
    public string inputFolder = "Assets/ConvertedAssets";
    public GameObject prefab; // The prefab to instantiate for each asset

    private void Start()
    {
        LoadAssetsFromJson();
    }

    private void LoadAssetsFromJson()
    {
        string[] jsonFiles = Directory.GetFiles(inputFolder, "*.json");
        foreach (string jsonFile in jsonFiles)
        {
            string jsonText = File.ReadAllText(jsonFile);
            MyAssetData assetData = JsonUtility.FromJson<MyAssetData>(jsonText);

            GameObject assetObject = Instantiate(prefab, assetData.Position, Quaternion.identity);
            assetObject.name = assetData.Name;
            assetObject.transform.localScale = assetData.Size;

            Renderer renderer = assetObject.GetComponent<Renderer>();
            if (renderer != null)
            {
                renderer.sharedMaterial.color = assetData.Color;
            }
        }
    }
}
