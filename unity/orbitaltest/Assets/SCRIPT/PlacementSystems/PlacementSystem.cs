using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementSystem : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private InputManager inputManager;
    [SerializeField] private Grid grid;
    [SerializeField] private objectDatatbaseSO database;
    [SerializeField]
    private GameObject gridVisualisation;

    private GridData floorData, itemsData;

    [SerializeField]
    private Objectplacer objectplacer;


    [SerializeField]
    private PreviewSystem preview;

    private Vector3Int lastGridPosition = Vector3Int.zero;

    IBuildingstate buildingstate;

    [SerializeField]
    DecreaseInventory decreaseInventory;

    private void Start()
    {
        StopPlacement();
        floorData = new GridData();
        itemsData = new GridData();
        gridVisualisation.SetActive(false);

    }

    public void StopPlacement()
    {
        if (buildingstate == null)
        {
            return;
        }
        gridVisualisation.SetActive(false);
        buildingstate.EndState();
        inputManager.OnClicked -= PlaceStructure;
        inputManager.OnExit -= StopPlacement;
        lastGridPosition = Vector3Int.zero;
        buildingstate = null;

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
        buildingstate.onAction(gridPos);

    }

    public void StartPlacement(int objectID)
    {
        StopPlacement();
        gridVisualisation.SetActive(true);
        buildingstate = new PlacementState(objectID, grid, preview, database, floorData, itemsData, objectplacer,decreaseInventory);
        inputManager.OnClicked += PlaceStructure;
        inputManager.OnExit += StopPlacement;
    }

    public void StartRemoving()
    {
        StopPlacement();
        gridVisualisation.SetActive(true);
        buildingstate = new RemovingState(grid, preview, database, floorData, itemsData, objectplacer);
        inputManager.OnClicked += PlaceStructure;
        inputManager.OnExit += StopPlacement;
    }

    // Update is called once per frame
    void Update()
    {
        if (buildingstate == null)
        {
            return;
        }
        Vector3 mousePos = inputManager.GetSelectedMapPositon();
        Vector3Int gridPos = grid.WorldToCell(mousePos);
        if (gridPos != lastGridPosition)
        {
            buildingstate.UpdateState(gridPos);
            lastGridPosition = gridPos;
        }


    }

    // private bool CheckPlacementValidty(Vector3Int gridPos, int selectedObjectID)
    // {
    //     GridData selectedData = database.objectsData[selectedObjectID].ID == 0 ? floorData : itemsData;
       
    //     return selectedData.CanPlaceObjectsAt(gridPos, database.objectsData[selectedObjectID].Size);
    // }
}
