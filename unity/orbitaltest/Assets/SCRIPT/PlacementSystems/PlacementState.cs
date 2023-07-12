using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlacementState: IBuildingstate 
{
    private int selectedObjectID = -1;
    int ID;
    Grid grid;
    PreviewSystem preview;
    objectDatatbaseSO database;
    GridData floorData, itemsData;
    Objectplacer objectplacer;
    DecreaseInventory decreaseInventory;

    public PlacementState(int ID, Grid grid, PreviewSystem preview, objectDatatbaseSO database, GridData floorData, GridData itemsData, Objectplacer objectplacer, DecreaseInventory decreaseInventory)
    {
        this.ID = ID;
        this.grid = grid;
        this.preview = preview;
        this.database = database;
        this.floorData = floorData;
        this.itemsData = itemsData;
        this.objectplacer = objectplacer;
        this.decreaseInventory = decreaseInventory;

        selectedObjectID = database.objectsData.FindIndex(x => x.ID == ID);
        if (selectedObjectID > -1)
        {
        preview.StartShowingPlacementPreview(database.objectsData[selectedObjectID].Prefab, database.objectsData[selectedObjectID].Size);
        }
        else {
            Debug.LogError("Object ID not found");
            return;
        }
    
    }

    public void EndState()
    {
        preview.StopShowingPreview();

    }

    public void onAction(Vector3Int gridPos)
    {
        bool placementValidty = CheckPlacementValidty(gridPos, selectedObjectID);
        if (placementValidty == false) {
            return;
        }

        int index = objectplacer.PlaceObject(database.objectsData[selectedObjectID].Prefab, grid.CellToWorld(gridPos));

        GridData selectedData = database.objectsData[selectedObjectID].ID == 0 ? floorData : itemsData;
        selectedData.AddObjectAt(gridPos, database.objectsData[selectedObjectID].Size, database.objectsData[selectedObjectID].ID, index);
        preview.UpdatePosition(grid.CellToWorld(gridPos),false);
        decreaseInventory.InformFlutterDecrease(ID);


    }


    private bool CheckPlacementValidty(Vector3Int gridPos, int selectedObjectID)
    {
        GridData selectedData = database.objectsData[selectedObjectID].ID == 0 ? floorData : itemsData;
       
        return selectedData.CanPlaceObjectsAt(gridPos, database.objectsData[selectedObjectID].Size);
    }

    public void UpdateState(Vector3Int gridPos)
    {
        bool placementValidty = CheckPlacementValidty(gridPos, selectedObjectID);
        preview.UpdatePosition(grid.CellToWorld(gridPos), placementValidty);
    }



}
