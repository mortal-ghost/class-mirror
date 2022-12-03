using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NewControlsNamespace;
using UnityEngine.UI;

public class Scrolling : MonoBehaviour
{   
    NewControls controls;
    public Scrollbar scrollbar;
    float input;
    // Start is called before the first frame update
    void Awake()
    {
        controls = new NewControls();
    }

    void OnEnable()
    {
        controls.Scrolling.Enable();
    }

    void OnDisable()
    {
        controls.Scrolling.Disable();
    }

    // Update is called once per frame
    void Update()
    {
        input = controls.Scrolling.Scroll.ReadValue<float>();
        // Debug.Log(scrollbar.value);
        // Debug.Log(scrollbar.size);
        scrollbar.value += (0.05f)*scrollbar.size*input;
    }   
}
