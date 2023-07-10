using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IBuildingstate
{
    void onAction(Vector3Int gridPos);
    void EndState();
    void UpdateState(Vector3Int gridpos);
}
