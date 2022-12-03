using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FollowScroll : MonoBehaviour
{
    // Start is called before the first frame update
    public Scrollbar followedScroll;
    private Scrollbar followingScroll;
    void Start()
    {
        followingScroll = GetComponent<Scrollbar>();
    }

    // Update is called once per frame
    void Update()
    {
        followingScroll.value = followedScroll.value;
    }
}
