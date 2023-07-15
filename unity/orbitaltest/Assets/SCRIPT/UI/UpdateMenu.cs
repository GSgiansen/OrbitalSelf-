using UnityEngine;
using UnityEngine.UI;
using FlutterUnityIntegration;
using System.Collections.Generic;
public class UpdateButtonText : MonoBehaviour
{
    public string newText = "New Text";

    private void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;
    }

    void OnMessage(string message)
    {
        // UnityMessageManager.Instance.SendMessageToFlutter(message);
        if (message.Substring(0,13) == "loadInventory") {
        // UnityMessageManager.Instance.SendMessageToFlutter(message);
        string jsonString = message.Substring(13);
        UnityMessageManager.Instance.SendMessageToFlutter(jsonString);

        JsonInventory inventoryData = JsonUtility.FromJson<JsonInventory>(jsonString);
        UnityMessageManager.Instance.SendMessageToFlutter(inventoryData.cat.name);

        UpdateInventory(inventoryData);
        // Update the text on each button
        UnityMessageManager.Instance.SendMessageToFlutter("after ca;;");

        }

        //TODO
        // send the data from the users inventory to unity
        // process the data to display it for the text

    }

    void Update() {
        Button[] buttons = FindObjectsOfType<Button>();
        foreach (Button button in buttons)
        {
        Text buttonText = button.GetComponentInChildren<Text>();
        if (buttonText.text == "X0") {
                button.gameObject.SetActive(false);
            }
        if (buttonText.text == "X 0") {
                button.gameObject.SetActive(false);
            }
        }
    }
    
    public void AskFlutterForInventory() {
        UnityMessageManager.Instance.SendMessageToFlutter("ReqloadInventory");
    }

        
    

    void UpdateInventory(JsonInventory lst ){
        Button[] buttons = FindObjectsOfType<Button>();


        foreach (Button button in buttons)
        {
            Text buttonText = button.GetComponentInChildren<Text>();
            print(buttonText.text);

            if (buttonText.text == "X 0") {
                button.gameObject.SetActive(false);
            }
            // store the information in "X {number}" format
            if (button.tag == "cat") {
                // int num = int.Parse(buttonText.text.Substring(1,2));
                // UnityMessageManager.Instance.SendMessageToFlutter(num.ToString());
                // int newnum = num + 1;
                // num = newnum;
                int num = lst.cat.number;

                if (num > 0) {
                    button.gameObject.SetActive(true);
                }
                else if (num <= 0) {
                    button.gameObject.SetActive(false);
                }

                buttonText.text = "X" + num.ToString() ;
            }
            else if (button.tag == "dog") {
                int num = lst.dog.number;
                if (num > 0) {
                    button.gameObject.SetActive(true);
                }
                else if (num <= 0) {
                    button.gameObject.SetActive(false);
                }


                buttonText.text = "X" + num.ToString() ;
                
            }
            else if (button.tag == "pot") {
                int num = lst.plant.number;
               if (num > 0) {
                    button.gameObject.SetActive(true);
                }
                else if (num <= 0) {
                    button.gameObject.SetActive(false);
                }
                buttonText.text = "X" + num.ToString() ;
            }
            else if (button.tag == "chair") {
                int num = lst.chair.number;
               if (num > 0) {
                    button.gameObject.SetActive(true);
                }
                else if (num <= 0) {
                    button.gameObject.SetActive(false);
                }
                buttonText.text = "X" + num.ToString() ;
            }
            else{
                print(buttonText.text);
            }
        }
    }

    }


public class JsonInventory {
    public InventoryItem cat;
    public InventoryItem dog;
    public InventoryItem plant;
    public InventoryItem chair;

}

[System.Serializable]
public class InventoryItem {
    public string name;
    public int number;
}