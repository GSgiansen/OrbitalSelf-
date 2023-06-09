using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using FlutterUnityIntegration;

public class UnityMessageHandler : MonoBehaviour
{
    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;
        OnMessage("LoadScene");
        print("UnityMessageHandler Start");
    }

    void OnMessage(string message)
    {
        UnityMessageManager.Instance.SendMessageToFlutter("Message sent is:"+ message);

        if (message.Equals("LoadScene"))
        {
            string sceneFilePath = "Scenes/SampleScene";
            LoadTemplateScene(sceneFilePath);
            UnityMessageManager.Instance.SendMessageToFlutter("loaded scene from unity");
        }
    }

    void LoadTemplateScene(string sceneFilePath)
    {
        SceneManager.LoadScene(sceneFilePath, LoadSceneMode.Single);
    }
    
    void Update(){

    }
}

