using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementSystem : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private GameObject mouseIndicator, cellIndicator;
    [SerializeField] private InputManager inputManager;
    [SerializeField] private Grid grid;
    [SerializeField] private objectDatatbaseSO database;
    private int selectedObjectID = -1;

    [SerializeField]
    private GameObject gridVisualisation;

    private GridData floorData, itemsData;

    private Renderer previewRenderer;

    private List<GameObject> placedObjects = new List<GameObject>();

    private void Start()
    {
        StopPlacement();
        floorData = new GridData();
        itemsData = new GridData();
        previewRenderer = cellIndicator.GetComponentInChildren<Renderer>();

    }

    private void StopPlacement()
    {
        selectedObjectID = -1;
        gridVisualisation.SetActive(false);
        cellIndicator.SetActive(false);
        inputManager.OnClicked -= PlaceStructure;
        inputManager.OnExit -= StopPlacement;

    }

    private void PlaceStructure()
    {
        if(inputManager.IsMouseOverUI())
        {
            return;
        }
        print("check if can place");
        Vector3 mousePos = inputManager.GetSelectedMapPositon();
        Vector3Int gridPos = grid.WorldToCell(mousePos);
        bool placementValidty = CheckPlacementValidty(gridPos, selectedObjectID);
        if (placementValidty == false) {
            return;
        }


        GameObject gameObject = Instantiate(database.objectsData[selectedObjectID].Prefab);
        gameObject.transform.position = grid.CellToWorld(gridPos);
        placedObjects.Add(gameObject);
        GridData selectedData = database.objectsData[selectedObjectID].ID == 0 ? floorData : itemsData;
        selectedData.AddObjectAt(gridPos, database.objectsData[selectedObjectID].Size, database.objectsData[selectedObjectID].ID, placedObjects.Count - 1);

    }

    public void StartPlacement(int objectID)
    {
        StopPlacement();
        selectedObjectID = database.objectsData.FindIndex(x => x.ID == objectID);
        if(selectedObjectID < 0)
        {
            Debug.LogError("Object ID not found in database");
            return;
        }
        print("id is " + selectedObjectID);
        gridVisualisation.SetActive(true);
        cellIndicator.SetActive(true);
        inputManager.OnClicked += PlaceStructure;
        inputManager.OnExit += StopPlacement;
    }

    // Update is called once per frame
    void Update()
    {
        if (selectedObjectID < 0)
        {
            return;
        }
        Vector3 mousePos = inputManager.GetSelectedMapPositon();
        Vector3Int gridPos = grid.WorldToCell(mousePos);

        bool placementValidty = CheckPlacementValidty(gridPos, selectedObjectID);
        previewRenderer.material.color = placementValidty ? Color.white: Color.red;



        mouseIndicator.transform.position = mousePos;
        cellIndicator.transform.position = grid.CellToWorld(gridPos);

    }

    private bool CheckPlacementValidty(Vector3Int gridPos, int selectedObjectID)
    {
        GridData selectedData = database.objectsData[selectedObjectID].ID == 0 ? floorData : itemsData;
       
        return selectedData.CanPlaceObjectsAt(gridPos, database.objectsData[selectedObjectID].Size);
    }
}
