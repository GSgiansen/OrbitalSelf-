using UnityEngine;
using System.IO;

public class AssetToJsonConverter : MonoBehaviour
{
    public string resourcesFolder = "Assets/Resources";
    public string outputFolder = "Assets/ConvertedAssets";

    private void Start()
    {
        ConvertAssetsToJson();
    }

    private void ConvertAssetsToJson()
    {
        string[] assetPaths = GetAllAssetPaths();

        foreach (string assetPath in assetPaths)
        {
            string assetName = Path.GetFileNameWithoutExtension(assetPath);
            string outputPath = Path.Combine(outputFolder, assetName + ".json");

            Object asset = Resources.Load(assetName);
            MyAssetData assetData = ExtractAssetData(asset);

            string assetJson = JsonUtility.ToJson(assetData);

            // Create the output directory if it doesn't exist
            Directory.CreateDirectory(outputFolder);

            File.WriteAllText(outputPath, assetJson);
        }
    }

    private MyAssetData ExtractAssetData(Object asset)
    {
        MyAssetData assetData = new MyAssetData();

        if (asset is GameObject gameObject)
        {
            assetData.Name = gameObject.name;
            assetData.Color = GetColorFromGameObject(gameObject);
            assetData.Position = gameObject.transform.position;
            assetData.Size = gameObject.transform.localScale;
        }

        return assetData;
    }

    private Color GetColorFromGameObject(GameObject gameObject)
    {
        Renderer renderer = gameObject.GetComponent<Renderer>();
        if (renderer != null && renderer.sharedMaterial != null)
        {
            return renderer.sharedMaterial.color;
        }
        return Color.white;
    }

    private string[] GetAllAssetPaths()
    {
        string[] assetPaths = Directory.GetFiles(resourcesFolder, "*.*", SearchOption.AllDirectories);
        for (int i = 0; i < assetPaths.Length; i++)
        {
            assetPaths[i] = assetPaths[i].Replace('\\', '/');
            assetPaths[i] = assetPaths[i].Replace(resourcesFolder + "/", "");
            assetPaths[i] = Path.ChangeExtension(assetPaths[i], null);
        }
        return assetPaths;
    }
}

[System.Serializable]
public class MyAssetData
{
    public string Name;
    public Color Color;
    public Vector3 Position;
    public Vector3 Size;
}
