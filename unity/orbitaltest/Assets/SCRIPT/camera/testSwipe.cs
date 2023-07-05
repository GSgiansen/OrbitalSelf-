using UnityEngine;

public class CameraSwipeRotation : MonoBehaviour
{
    public Transform target;
    public float rotationSpeed = 1f;

    private Vector3 touchStart;
    private Vector3 previousTouchPosition;

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            touchStart = Input.mousePosition;
            previousTouchPosition = touchStart;
        }
        else if (Input.GetMouseButton(0))
        {
            Vector3 currentTouchPosition = Input.mousePosition;
            Vector3 direction = currentTouchPosition - previousTouchPosition;
            previousTouchPosition = currentTouchPosition;

            float rotationAmount = direction.x * rotationSpeed;

            SetTreeSpawned();

            transform.RotateAround(target.position, Vector3.up, rotationAmount);
        }
    }

    public void SetTreeSpawned()
    {
        GameObject treeObject = GameObject.FindWithTag("Tree");
        if (treeObject != null)
        {
            target = treeObject.transform;
            //UnityMessageManager.Instance.SendMessageToFlutter("treeSpawned");
        }
    }
}
