using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Google.XR.Cardboard;

public class Calibrate : MonoBehaviour
{
    public string uri;
    public void ChangeVRParameters()
    {
        Api.SaveDeviceParams(uri);
        Debug.Log("Params changed!");
    }

    public void ScanQR()
    {
        Api.ScanDeviceParams();
    }
}
