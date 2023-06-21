using UnityEngine;
using System.Collections;
using FlutterUnityIntegration;

public class CameraController : MonoBehaviour
{
    public Transform target; // Reference to the island
    public float zoomDistance = 10f; // Distance between camera and island
    public float zoomOffset = 1f; // Offset factor for zoom in
    public float zoomSpeed = 5f; // Zoom speed
    public float maxZoomDistance = 20f; // Maximum zoom distance from the island
    public float moveSpeed = 10f; // Camera movement speed

    private Vector3 originalPosition;
    private float originalOrthographicSize;
    private Vector3 targetPosition;
    private float targetOrthographicSize;
    private bool initialZoomIn = false;
    private bool treeSpawned = false;

    private void Start()
    {
        UnityMessageManager.Instance.OnMessage += OnMessage;
        originalPosition = transform.position;
        originalOrthographicSize = Camera.main.orthographicSize;

        // Check if initial zoom-in is enabled
        if (initialZoomIn)
        {
            // Perform the initial zoom-in
            ZoomIn();
        }
        else
        {
            // Set the camera to its original position and size
            MoveCamera(originalPosition, originalOrthographicSize);
        }
    }

    private void Update()
    {
        SetTreeSpawned();
        if (Input.GetKeyDown(KeyCode.Z))
        {
            ZoomIn();
        }
        else if (Input.GetKeyDown(KeyCode.X))
        {
            ZoomOut();
        }

        // Smoothly move the camera towards the target position
        transform.position = Vector3.Lerp(transform.position, targetPosition, moveSpeed * Time.deltaTime);

        // Smoothly adjust the orthographic size
        Camera.main.orthographicSize = Mathf.Lerp(Camera.main.orthographicSize, targetOrthographicSize, zoomSpeed * Time.deltaTime);
    }

    void OnMessage(string message)
    {
        if (message == "zoomIn")
        {
            ZoomIn();
        }
        else if (message == "zoomOut")
        {
            ZoomOut();
        }
    }

    private void MoveCamera(Vector3 position, float orthographicSize)
    {
        targetPosition = position;
        targetOrthographicSize = orthographicSize;
    }

    public void ZoomIn()
    {
        if (!treeSpawned)
        {
            Debug.LogWarning("Tree not spawned yet. Cannot perform zoom in.");
            return;
        }

        Vector3 originalToTarget = target.position - originalPosition;
        Vector3 zoomedPosition = originalPosition + originalToTarget.normalized * (zoomDistance * zoomOffset);

        float distance = Vector3.Distance(zoomedPosition, target.position);
        float maxDistance = maxZoomDistance;
        if (distance > maxDistance)
        {
            zoomedPosition = target.position + (originalToTarget.normalized * maxDistance);
        }

        MoveCamera(zoomedPosition, 1f);
    }

    public void ZoomOut()
    {
        MoveCamera(originalPosition, originalOrthographicSize);
    }

    public void SetTreeSpawned()
    {
        GameObject treeObject = GameObject.FindWithTag("Tree");
        if (treeObject != null)
        {
            treeSpawned = true;
            target = treeObject.transform;
            //UnityMessageManager.Instance.SendMessageToFlutter("treeSpawned");
        }
        else
        {
            treeSpawned = false;
            UnityMessageManager.Instance.SendMessageToFlutter("treeDespawned");
        }
    }
}
