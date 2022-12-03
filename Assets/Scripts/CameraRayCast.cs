using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using SimpleFileBrowser;
using UnityEngine.EventSystems;
using NewControlsNamespace;

public class CameraRayCast : MonoBehaviour
{   
    [SerializeField]private GameObject sphere;
    [SerializeField] private Material defaultMaterial;
    [SerializeField] private Material highlightedMaterial;
    [SerializeField] public LayerMask layerMask;

    private Vector3 collision = Vector3.zero;
    private Transform selection;
    private Renderer selectionrenderer;
    NewControls controls;
    private Button btn = null;
    private Toggle tog = null;
    private GameObject curObject, prevObject;

    private float input;
    // Start is called before the first frame update

    void Awake()
    {
        controls = new NewControls();
        controls.Buttons.ButtonClick.performed += ctx => getinput();
    }

    void OnEnable()
    {
        controls.Buttons.Enable();
    }

    void OnDisable()
    {
        controls.Buttons.Disable();
    }
    void getinput()
    {
        input  = controls.Buttons.ButtonClick.ReadValue<float>();
        // Debug.Log(input);
        btn?.onClick.Invoke();
        tog?.OnPointerClick(new PointerEventData(null));
        // tog?.onValueChanged.Invoke(!(tog.isOn));
        curObject?.GetComponent<FileBrowserItem>()?.OnPointerClick(new PointerEventData(null));
        
    }

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {   
        RaycastHit hit;
        if(Physics.Raycast(this.transform.position,this.transform.forward, out hit, maxDistance: 10000.0f, layerMask: layerMask))
        {   
            collision = hit.point;
            sphere.transform.position = collision;
            curObject = hit.transform.gameObject;

            if(!curObject.Equals(prevObject))
            {
                curObject?.GetComponent<FileBrowserItem>()?.OnPointerEnter(null);
                prevObject?.GetComponent<FileBrowserItem>()?.OnPointerExit(null);
                prevObject = curObject;
            }

            btn = curObject.GetComponent<Button>();
            tog = curObject.GetComponent<Toggle>();
            
        }
    }
}
