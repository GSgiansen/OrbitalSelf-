using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RemovingState : IBuildingstate
{
    private int gameObjectIndex = -1;
    int ID;
    Grid grid;
    PreviewSystem preview;
    objectDatatbaseSO database;
    GridData floorData, itemsData;
    Objectplacer objectplacer;

    public RemovingState(Grid grid, PreviewSystem preview, objectDatatbaseSO database, GridData floorData, GridData itemsData, Objectplacer objectplacer)
    {
        this.grid = grid;
        this.preview = preview;
        this.database = database;
        this.floorData = floorData;
        this.itemsData = itemsData;
        this.objectplacer = objectplacer;

        preview.StartShowingRemovePreview();

    }


    public void EndState()
    {
        preview.StopShowingPreview();
    }

    public void onAction(Vector3Int gridPos)
    {
        GridData selectedData = null;
        if (itemsData.CanPlaceObjectsAt(gridPos, Vector2Int.one) == false)
        {
            selectedData = itemsData;
        }
        else if (floorData.CanPlaceObjectsAt(gridPos, Vector2Int.one) == false)
        {
            selectedData = floorData;
        }
        if (selectedData == null)
        {
            
        }
        else
        {
            gameObjectIndex = selectedData.GetRepresentationIndex(gridPos);
            if (gameObjectIndex == -1)
            {
                return;
            }
            selectedData.RemoveObjectAt(gridPos);
            objectplacer.RemoveObjectAt(gameObjectIndex);
        }

        Vector3 cellPosition = grid.GetCellCenterWorld(gridPos);
        preview.UpdatePosition(cellPosition, CheckSelectionValid(gridPos));
    }

    private bool CheckSelectionValid(Vector3Int gridPos)
    {

            return !(floorData.CanPlaceObjectsAt(gridPos, Vector2Int.one) &&
                itemsData.CanPlaceObjectsAt(gridPos, Vector2Int.one));
    }

    public void UpdateState(Vector3Int gridpos)
    {
        bool validity = CheckSelectionValid(gridpos);
        preview.UpdatePosition(grid.CellToWorld(gridpos), validity);
    }
}
