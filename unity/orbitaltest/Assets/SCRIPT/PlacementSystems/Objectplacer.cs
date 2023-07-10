using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Objectplacer : MonoBehaviour
{
    [SerializeField]
    private List<GameObject> placedObjects = new List<GameObject>();

    public int PlaceObject(GameObject prefab, Vector3 position)
    {
        GameObject gameObject = Instantiate(prefab);
        gameObject.transform.position = position;
        placedObjects.Add(gameObject);
        return placedObjects.Count - 1;
    }

    public void RemoveObjectAt (int index)
    {
        if (placedObjects.Count > index)
        {
            Destroy(placedObjects[index]);
            placedObjects.RemoveAt(index);
        }
    }
}
