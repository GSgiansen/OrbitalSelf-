using UnityEngine;
using UnityEngine.UI;

public class MenuButton : MonoBehaviour
{
    public GameObject menuPage;
    public Image arrowUpImage;
    private bool isMenuOpen = false;

    private void Start()
    {
        // Set the initial state of the menu
        menuPage.SetActive(isMenuOpen);
    }

    public void ToggleMenu()
    {
        // Toggle the menu state
        isMenuOpen = !isMenuOpen;

        menuPage.SetActive(isMenuOpen);
    }
}
