using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class villainbullet : MonoBehaviour
{

    public int isvillainBullet = 1;
    public int ishit;
    public float speed;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speed, 0, 0);

        if (transform.position.x <= -8.5f || transform.position.x >= 8.5f || transform.position.y <= -5.5f || transform.position.y >= 5.5f) Destroy(gameObject);
        if (ishit == 1)
            Destroy(gameObject);
    }
}
