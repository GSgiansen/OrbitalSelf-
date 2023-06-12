using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;
using UnityEngine.SceneManagement;

public class loadNewScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnMessage(string message) {
        if (message.Equals("loadNewScene"))
        {
            string sceneFilePath = "Scenes/truetest";
            LoadTemplateScene(sceneFilePath);
            UnityMessageManager.Instance.SendMessageToFlutter("loaded new scene from unity");
        }
    }
    
    void LoadTemplateScene(string sceneFilePath)
    {
        SceneManager.LoadScene(sceneFilePath, LoadSceneMode.Single);
        SceneManager.SetActiveScene(SceneManager.GetSceneByPath(sceneFilePath));
    }
}
