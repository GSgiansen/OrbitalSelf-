using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PreviewSystem: MonoBehaviour
{
    // [SerializeField] private float previewOffset = 0.5f;

    [SerializeField] 
    private GameObject cellIndicator;
    private GameObject previewObject;
    
    [SerializeField]
    private Material previewMaterialPrefab;
    private Material previewMaterialInstance;

    private Renderer cellIndicatorRenderer;

    private void Start()
    {
        previewMaterialInstance = new Material(previewMaterialPrefab);
        cellIndicator.SetActive(false);
        cellIndicatorRenderer = cellIndicator.GetComponentInChildren<Renderer>();
    }

    public void StartShowingPlacementPreview(GameObject prefab, Vector2Int size)
    {
        previewObject = Instantiate(prefab);
        PreparePreviewObject(previewObject);
        PrepareCursor(size);
        cellIndicator.SetActive(true);
    }

    private void PrepareCursor(Vector2Int size)
    {
        if (size.x > 0 || size.y > 0)
        {
        cellIndicator.transform.localScale = new Vector3(size.x, 1, size.y);
        cellIndicatorRenderer.material.mainTextureScale = size;

        }

    }

    private void PreparePreviewObject(GameObject previewObject)
    {
        Renderer[] renderers = previewObject.GetComponentsInChildren<Renderer>();
        foreach (Renderer renderer in renderers)
        {
            Material[] materials = renderer.materials;
            for(int i = 0; i < materials.Length; i++)
            {
                materials[i] = previewMaterialInstance;
            }
            renderer.materials = materials;
        }
    }

    public void StopShowingPreview()
    {
        cellIndicator.SetActive(false);
        if (previewObject != null)
        {
            Destroy(previewObject);
        }
    }

    public void UpdatePosition(Vector3 position, bool validity)
    {
        if (previewObject != null)
        {
            MovePreview(position);
            ApplyFeedbackPreview(validity);
        }
        MoveMouser(position);
        ApplyFeedbackIndicator(validity);
    }

    private void MovePreview(Vector3 position)
    {
        previewObject.transform.position = new Vector3(position.x, position.y, position.z);
    }

    private void MoveMouser(Vector3 position)
    {
        cellIndicator.transform.position = position;
    }

    private void ApplyFeedbackPreview(bool validity)
    {
        Color color = validity ? Color.white: Color.red;
        color.a = 0.4f;
        previewMaterialInstance.color = color;
    }

    private void ApplyFeedbackIndicator(bool validity)
    {
        Color color = validity ? Color.white: Color.red;
        color.a = 0.4f;
        cellIndicatorRenderer.material.color = color;
    }

    internal void StartShowingRemovePreview()
    {
        cellIndicator.SetActive(true);
        PrepareCursor(Vector2Int.one);
        ApplyFeedbackIndicator(false);

    }

}
