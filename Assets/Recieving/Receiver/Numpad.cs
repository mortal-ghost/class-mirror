using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Numpad : MonoBehaviour
{   
    private bool isBksp;
    private string numText;
    [SerializeField] private InputField inputField;
    // Start is called before the first frame update
    void Start()
    {   
        numText = GetComponentInChildren<TextMeshProUGUI>().text;
        if( numText.Equals("Bksp"))
        {   
            isBksp = true;
        }

        if(isBksp)
        {
            GetComponent<Button>().onClick.AddListener(RemoveText);
        }
        else
        {
            GetComponent<Button>().onClick.AddListener(EnterText);
        }
        
    }
    
    public void RemoveText()
    {
        inputField.text = inputField.text.Remove(inputField.text.Length -1 , 1);
    }

    public void EnterText()
    {
        inputField.text = inputField.text + numText;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
