using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.EventSystems;
public class InputManager : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private Camera sceneCamera;
    private Vector3 lastPosition;
    [SerializeField] private LayerMask placementLayerMask;

    public event Action OnClicked, OnExit;



    public Vector3 GetSelectedMapPositon()
{
    Ray ray = sceneCamera.ScreenPointToRay(Input.mousePosition);
    RaycastHit hitInfo;

    if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity, placementLayerMask))
    {
        // Round the hit position to the nearest grid square center
        Vector3 roundedPosition = RoundToNearestGridCenter(hitInfo.point);
        lastPosition = roundedPosition;
    }

    return lastPosition;
}

private Vector3 RoundToNearestGridCenter(Vector3 position)
{
    // Calculate the size of each grid square based on your grid setup
    float gridSize = 0.5f; // Adjust this value to match your grid square size

    // Round the position to the nearest grid square center
    float x = Mathf.Round(position.x / gridSize) * gridSize;
    float y = Mathf.Round(position.y / gridSize) * gridSize;
    float z = Mathf.Round(position.z / gridSize) * gridSize;

    return new Vector3(x, y, z);
}


    // Update is called once per frame
    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            OnClicked?.Invoke();
            print("left clicked");
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            OnExit?.Invoke();
        }
    }

    public bool IsMouseOverUI()
    {
        return EventSystem.current.IsPointerOverGameObject();
    }
}
