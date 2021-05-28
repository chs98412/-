using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mainbullet : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(0.3f,0, 0);
        
    }

    void OnTriggerEnter2D(Collider2D a)
    {

        if (a.gameObject.name != "maincharac")
        {
            Destroy(gameObject);
           
        }

    }
}
