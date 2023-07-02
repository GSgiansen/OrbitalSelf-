using UnityEngine;

public class ChangeColorOnTouch : MonoBehaviour
{
    private Color originalColor; // Original color of the object

    private void Start()
    {
        originalColor = GetComponent<Renderer>().material.color;
    }

    private void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            if (touch.phase == TouchPhase.Began)
            {
                // Change the color to red
                GetComponent<Renderer>().material.color = Color.red;
            }
            else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
            {
                // Restore the original color
                GetComponent<Renderer>().material.color = originalColor;
            }
        }
    }
}
