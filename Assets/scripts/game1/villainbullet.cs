using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class villainbullet : MonoBehaviour
{

    public float speed;

    public float time;
    float timer;
    // Start is called before the first frame update
    void Start()
    {
        timer = 0;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speed, 0, 0);

        timer += Time.deltaTime;
        if (timer > time)
            Destroy(gameObject);
    }

    void OnTriggerEnter2D(Collider2D a)
    {

        if (a.gameObject.tag != "villain")
        {
            Destroy(gameObject);

        }

    }
}
