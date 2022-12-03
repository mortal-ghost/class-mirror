using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveCursor : MonoBehaviour
{
    [SerializeField] private KeyCode left, right, up, down, click;
    [SerializeField] private RectTransform fakeCursor = null;
    private float moveSpeed = 2f;

    // Update is called once per frame
    void Update()
    {
        // instead of the specific input checks, you can use Input.GetAxis("Horizontal") and Input.GetAxis("Vertical")
        if (Input.GetKey(left))
        {
            fakeCursor.anchoredPosition += new Vector2(-1 * moveSpeed, 0f);
        }

        if (Input.GetKey(right))
        {
            fakeCursor.anchoredPosition += new Vector2(moveSpeed, 0f);
        }

        if (Input.GetKey(down))
        {
            fakeCursor.anchoredPosition += new Vector2(0f, -1 * moveSpeed);
        }

        if (Input.GetKey(up))
        {
            fakeCursor.anchoredPosition += new Vector2(0f, moveSpeed);
        }
    }
}
