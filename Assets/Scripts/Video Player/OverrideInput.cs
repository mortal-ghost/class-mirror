using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class OverrideInput : MonoBehaviour
{   
    private bool changed = false;
    public NewInput newInput;
    public void Update()
    {   
        if(!changed)
        {
            EventSystem.current.currentInputModule.inputOverride = newInput;
            changed = true;
        }
            
    }
}
