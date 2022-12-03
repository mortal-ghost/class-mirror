using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scrolldfsdf : MonoBehaviour
{
    // Start is called before the first frame update
    public Scrollbar sccc;
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        sccc.onValueChanged.AddListener((val)=>{ Debug.Log("hey");});
    }
}
