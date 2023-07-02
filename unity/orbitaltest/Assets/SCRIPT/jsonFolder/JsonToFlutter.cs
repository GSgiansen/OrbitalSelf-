using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;

public class JsonToFlutter : MonoBehaviour
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
        UnityMessageManager.Instance.SendMessageToFlutter("JsonToFlutter");
    }

    public void sendJsonToFlutter(string jsonString) {
        UnityMessageManager.Instance.SendMessageToFlutter(jsonString);
    }
}
