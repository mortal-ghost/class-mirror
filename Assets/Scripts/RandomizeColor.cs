using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class RandomizeColor : MonoBehaviour
{   
    private Button btn;
    void OnEnable()            
    {   
        btn = GetComponent<Button>();
        btn.onClick.AddListener(()=>{
            GetComponent<Image>().color = Random.ColorHSV(0f, 1f, 1f, 1f, 0.5f, 1f);
        });
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
