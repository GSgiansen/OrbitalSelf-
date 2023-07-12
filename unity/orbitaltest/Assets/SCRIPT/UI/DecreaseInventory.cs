using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using FlutterUnityIntegration;

public class DecreaseInventory : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;
    }
    void OnMessage(string message)
    {
        // 1 is chair, 2 is Cat, 3 is Dog, 4 is Pot
        if (message.Substring(0,17) == "decreaseInventory") {
            int numToRemoval = int.Parse(message.Substring(17));


        }
    }
    public void InformFlutterDecrease(int numToRemoval) {
        UnityMessageManager.Instance.SendMessageToFlutter("decreaseInventory" + numToRemoval.ToString());
        print("decreasing inventory by " + numToRemoval.ToString());
    }
    void Update() {
    }
}
