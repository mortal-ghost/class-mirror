using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetupPos : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject player, classroom;
    void Start()
    {
        player.transform.position = Posmanager.playerTransform.position;
        player.transform.rotation = Posmanager.playerTransform.rotation;

        classroom.transform.position = Posmanager.setTransform.position;
        classroom.transform.rotation = Posmanager.setTransform.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
