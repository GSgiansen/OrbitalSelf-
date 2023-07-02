using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[CreateAssetMenu]
public class objectDatatbaseSO : ScriptableObject
{
    public List<ObjectData> objectsData;

}

[Serializable]
public class ObjectData
{
    [field: SerializeField]
    public String Name {get; private set;}

    [field: SerializeField]
    public int ID {get; private set;}

    [field: SerializeField]
    public Vector2Int Size {get; private set;} = Vector2Int.one;

    [field: SerializeField]
    public GameObject Prefab {get; private set;}



}