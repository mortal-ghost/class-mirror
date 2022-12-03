using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeviceCameraInput : MonoBehaviour
{
    //to switch between multiple camera devices
    public int deviceIndex = 0;
    private WebCamTexture webcamTexture;
    // Use this for initialization
    void Start()
    {
        // creating an array of available camera Devices
        //note- getting this list is a heavy task
        //can optimize on this
        WebCamDevice[] devices = WebCamTexture.devices;

        //texture to store camera feed
        webcamTexture = new WebCamTexture();

        //if no devices found
        if(devices.Length==0)
        {
            Debug.LogError("No Camera Device Found");
            return;
        }

        //setting input device
        //default is device[0]
        webcamTexture.deviceName = devices[deviceIndex].name;

        //setting up renderer
        Renderer renderer = GetComponent<Renderer>();
        renderer.material.mainTexture = webcamTexture;

        //playing from current camera
        webcamTexture.Play();
    }

    public void StopCam()
    {
        webcamTexture.Stop();
    }
    // Update is called once per frame
    void Update()
    {
        /*
        to change camera
        -stop current camera
        -destroy current texture
        -create new texture from other device
        -play
        */
    }
}
