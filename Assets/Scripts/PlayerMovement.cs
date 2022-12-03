using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NewControlsNamespace;

public class PlayerMovement : MonoBehaviour
{   
    NewControls controls;
    private float input;
    private Camera _mainCamera;
    void Awake()
    {
        controls = new NewControls();
    }

    void Start()
    {
        _mainCamera = Camera.main;
    }
    void OnEnable()
    {
        controls.Movement.Enable();
    }

    void OnDisable()
    {
        controls.Movement.Disable();
    }
    void getinput()
    {
        input  = controls.Movement.VerticalAxis.ReadValue<float>();
    }
    void FixedUpdate()
    {   
        getinput();
        // Debug.Log($"Joystick: {input}");
        this.transform.Translate(1.0f/50.0f * input * new Vector3(_mainCamera.transform.forward.x,0,_mainCamera.transform.forward.z));
        Posmanager.playerTransform = this.transform;
    }
}
