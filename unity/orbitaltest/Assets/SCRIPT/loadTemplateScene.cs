using UnityEngine;
using UnityEngine.SceneManagement;
using FlutterUnityIntegration;
using System.Collections;
using System;
using System.IO;

public class TemplateSceneLoader : MonoBehaviour
{
    private void Start()
    {
        // Register the method to handle the message from Flutter
        UnityMessageManager.Instance.OnMessage += OnMessage;
        UnityMessageManager.Instance.SendMessageToFlutter("started");
    }

    void OnMessage(string byteArray) {
        UnityMessageManager.Instance.SendMessageToFlutter("TemplateSceneLoader OnMessage");
        GenerateSceneFromByteArray(byteArray);
    }
    public void GenerateSceneFromByteArray(String sceneData)
    {
        UnityMessageManager.Instance.SendMessageToFlutter("TemplateSceneLoader GenerateSceneFromByteArray");
        SceneData loadedSceneData = JsonUtility.FromJson<SceneData>(sceneData);
        UnityMessageManager.Instance.SendMessageToFlutter(sceneData);

        // Load the scene if it is valid
        if (loadedSceneData != null && loadedSceneData.IsValid())
        {
            SceneManager.LoadScene(loadedSceneData.sceneName);
            UnityMessageManager.Instance.SendMessageToFlutter("Succeeded");
        }
        else
        {
            UnityMessageManager.Instance.SendMessageToFlutter("Failed");
            Debug.LogError("Failed to load scene from byte array.");

        }
    }

}

public class SceneData
{
    public string sceneName;
    public bool IsValid()
    {
        return !string.IsNullOrEmpty(sceneName);
    }
}