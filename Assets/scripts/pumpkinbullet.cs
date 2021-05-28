using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class pumpkinbullet : MonoBehaviour
{
    float bulletDis;
    Vector3 firstPos;
    public float speed;

    float boomTimer;
    public float boomTime=5;

    int boomReady;

    GameObject maincharHP;


    public Vector2 size;
    // Start is called before the first frame update
    void Start()
    {
        firstPos = new Vector3(transform.position.x, transform.position.y, 0);

        maincharHP = GameObject.Find("Image");

    }

    // Update is called once per frame
    void Update()
    {
        bulletDis = Vector3.Distance(firstPos, transform.position);

        if (bulletDis < 5)
            transform.Translate(speed, 0, 0);
        else
        {
            boomTimer += Time.deltaTime;

            if (boomTimer > boomTime)
            {
                boomTimer = 0;
                boomReady = 1;
                Collider2D[] hit = Physics2D.OverlapCircleAll(this.transform.position, this.GetComponent<CircleCollider2D>().radius);

                foreach (Collider2D i in hit){
                    if(i.name == "maincharac")
                    {
                        Debug.Log("감자돌이아야!");
                        maincharHP.GetComponent<Image>().fillAmount -= 0.1f;
                    }
                }
                Destroy(gameObject);
            }
        }
    }


    void OnTriggerStay2D(Collider2D a)
    {

        if (boomReady == 1) { 
        
        if (a.gameObject.name=="maincharac") //악당 총알인데 악당한테 박아서 사라지는걸 방지
        {
                maincharHP.GetComponent<Image>().fillAmount -= 0.1f;
               
            }


        }

    }
}
