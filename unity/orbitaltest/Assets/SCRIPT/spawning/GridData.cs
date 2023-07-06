using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridData
{
    Dictionary<Vector3Int, PlacementData> placeObjects = new();

    public void AddObjectAt(Vector3Int gridPositon, Vector2Int objectSize, int id, int placedObjectIndex)
    {
        List<Vector3Int> positionsToOccupy = CalculatePositions(gridPositon, objectSize);

        PlacementData placementData = new PlacementData(positionsToOccupy, id, placedObjectIndex);

        foreach (var pos in positionsToOccupy)
        {
            if (placeObjects.ContainsKey(pos))
            {
                Debug.LogError("Trying to place object on occupied position");
                return;
            }
            placeObjects[pos] = placementData;
        }
    }

    private List<Vector3Int> CalculatePositions(Vector3Int gridPositon, Vector2Int objectSize)
    {
        List<Vector3Int> positionsToOccupy = new List<Vector3Int>();

        for (int x = 0; x < objectSize.x; x++)
        {
            for (int y = 0; y < objectSize.y; y++)
            {
                //positionsToOccupy.Add(gridPositon + new Vector3Int(x,y,0));
                positionsToOccupy.Add(gridPositon + new Vector3Int(x,0,y));
            }
        }

        return positionsToOccupy;
    }

    public bool CanPlaceObjectsAt(Vector3Int gridPositon, Vector2Int objectSize)
    {
        List<Vector3Int> positionsToOccupy = CalculatePositions(gridPositon, objectSize);

        foreach (var pos in positionsToOccupy)
        {
            if (placeObjects.ContainsKey(pos))
            {
                return false;
            }
        }

        return true;
    }

}

public class PlacementData
{
    public List<Vector3Int> occupiedPositions;


    public int ID { get; private set; }

    public int PlacedObjectIndex { get; private set; }

    public PlacementData(List<Vector3Int> occupiedPositions, int id, int placedObjectIndex)
    {
        this.occupiedPositions = occupiedPositions;
        ID = id;
        PlacedObjectIndex = placedObjectIndex;
    }
}