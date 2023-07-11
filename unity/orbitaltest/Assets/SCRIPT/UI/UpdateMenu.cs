using UnityEngine;
using UnityEngine.UI;

public class UpdateButtonText : MonoBehaviour
{
    public string newText = "New Text";

    private void Start()
    {
        // Find all Button components in the scene
        Button[] buttons = FindObjectsOfType<Button>();

        // Update the text on each button
        foreach (Button button in buttons)
        {
            Text buttonText = button.GetComponentInChildren<Text>();
            // store the information in "X {number}" format
            if (button.tag == "cat") {
                buttonText.text = "cat";
            }
            else if (button.tag == "dog") {
                buttonText.text = "dog";
            }
            else if (button.tag == "pot") {
                buttonText.text = "pot";
            }
            else if (button.tag == "chair") {
                buttonText.text = "chair";
            }
        }
    }
}
