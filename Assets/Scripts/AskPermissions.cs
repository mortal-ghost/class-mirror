using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.Android;

public class AskPermissions : MonoBehaviour
{   
    #if UNITY_ANDROID && !UNITY_EDITOR
    private AndroidJavaClass plugin;
    #endif
    // Start is called before the first frame update
    void Start()
    {   
        #if UNITY_ANDROID && !UNITY_EDITOR
            // Get package name
            
            plugin = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            var unityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
            AndroidJavaObject currentActivityObject = unityClass.GetStatic<AndroidJavaObject>("currentActivity");
            string packageName = currentActivityObject.Call<string>("getPackageName");
            Debug.Log(packageName);

            // Create the intent object
            var intentObject = new AndroidJavaObject("android.content.Intent", "android.settings.MANAGE_APP_ALL_FILES_ACCESS_PERMISSION");
            
            // Set the uri
            var uriClass = new AndroidJavaClass("android.net.Uri");
            AndroidJavaObject uriObject = uriClass.CallStatic<AndroidJavaObject>("fromParts", "package", packageName, null);
            intentObject.Call<AndroidJavaObject>("setData", uriObject);

            // Start the activity
            currentActivityObject.Call("startActivity", intentObject);
        #endif
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
