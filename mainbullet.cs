using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class mainbullet : MonoBehaviour
{
    public int ismainBullet=1;
    public int ishit;

    // Start is called before the first frame update
    void Start()
    {
        ismainBullet = 1;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(0, 0.1f, 0);
        transform.Rotate(0, 0, 0);
        if (transform.position.x <= -8.5f || transform.position.x >= 8.5f || transform.position.y <= -5.5f || transform.position.y >= 5.5f) Destroy(gameObject);
        if (ishit == 1)
            Destroy(gameObject);
    }
}
