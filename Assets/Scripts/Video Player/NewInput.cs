using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class NewInput : BaseInput
{   
    public string clickkey;
    // public override bool GetMouseButtonDown(int button)
    // {   
    //     return Input.GetKeyDown(clickkey);
    // }

    // public override bool GetMouseButtonUp(int button)
    // {
    //     return Input.GetKeyUp(clickkey);
    // }

    // public override bool GetMouseButton(int button)
    // {
    //     return Input.GetKey(clickkey);
    // }

    public override Vector2 mouseScrollDelta
    {
        get { return new Vector2(0,Input.GetAxis("Vertical")); }
    }

    public override Vector2 mousePosition
    {
        get { Debug.Log($"{Screen.width/2.0f} and {Screen.height/2.0f}"); 
                return new Vector2(Screen.width/2.0f ,  Screen.height/2.0f);}
    }

}
