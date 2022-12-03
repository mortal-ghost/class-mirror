using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using NewControlsNamespace;

public class RotateSet : MonoBehaviour
{
    NewControls controls;
    private float input;
    [SerializeField] private GameObject player;
    private Vector3 rotateAxis;
    void Awake()
    {
        controls = new NewControls();
    }

    void Start()
    {
        rotateAxis = new Vector3(0,1,0);
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
        input  = controls.Movement.HorizontalAxis.ReadValue<float>();
    }
    void FixedUpdate()
    {   
        getinput();
        // Debug.Log($"Joystick: {input}");
        this.transform.RotateAround(player.transform.position,rotateAxis,-1.0f * input);
        Posmanager.setTransform = this.transform;
    }
}
