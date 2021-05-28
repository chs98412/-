using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class LEFT : MonoBehaviour ,IPointerDownHandler ,IPointerUpHandler
{
    GameObject pang;
    bool isPressed;

    Vector3 pos_first = new Vector3();
    Vector3 pos_second = new Vector3();
    Vector3 pos_final = new Vector3();
    float y;
    float x;
    // Start is called before the first frame update
    void Start()
    {
        pang = GameObject.Find("maincharac");
   
    }

   
    public void OnPointerDown(PointerEventData eventData)
    {
        isPressed = true;
        pos_first = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0);
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        isPressed = false;
    }
    private void Update()
    {
        if (isPressed)
        {
            pos_second = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 0);

            pos_final = pos_first - pos_second;

            if(Mathf.Abs(pos_final.x)< Mathf.Abs(pos_final.y))
            {
                if (pos_final.y < 0)
                {
                    if (pang.transform.position.y < 30) pang.transform.Translate(0, 0.2f, 0);
                }
                else if (pos_final.y > 0)
                {
                    if (pang.transform.position.y > 0) pang.transform.Translate(0, -0.2f, 0);
                }
            }
            else
            {
                if (pos_final.x < 0)
                {
                    if (pang.transform.position.x < 50) pang.transform.Translate(0.2f, 0, 0);
                }
                else if(pos_final.x > 0)
                {
                    if (pang.transform.position.x > 0) pang.transform.Translate(-0.2f, 0, 0);
                }
            }
        }
    }
}
