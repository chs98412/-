using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PangAction : MonoBehaviour
{
    private Animator animator;
    float chardir;
    float moveX, moveY;
    Rigidbody2D rigid;

    void Awake()
    {
        animator = GetComponent<Animator>();
        rigid = GetComponent<Rigidbody2D>();
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update() // 프레임마다 호출
    {
        float moveX = Input.GetAxis("Horizontal");
        float moveY = Input.GetAxis("Vertical");

        Vector3 moveVector = new Vector3(moveX, 0f, 0f);
        animator.SetBool("isRunning", moveVector.magnitude > 0);
        Vector3 moveVector1 = new Vector3(0f, 0f, moveY);
        animator.SetBool("isWalking", moveVector1.magnitude > 0);
        transform.Translate(new Vector3(moveX, moveY, 0f).normalized * Time.deltaTime * 5f);//trnasfor.Translate : 이동 / speed*Time.deltaTime : 매프레임의 이동거리
    }

        
  
    void FixedUpdate() //프레임마다 호출이 아니라 설정한 일정 시간(Fixed time)마다 호출 - 물리효과에 용이
    { 

    /*
        if( moveX >0) //Axis에서 이동에 따른 변화 값은 RightArrow면 +, LeftArrow면 -인 개념은 아닌 거 같다. 0~1값을 반환, -1~0값을 반환한다는데 왜 안되는지 모르겠다.
        {
            chardir = -1;
        }
        else
        {
            chardir = 1;
        }
        transform.localScale = new Vector3(chardir * 1f , 1f, 1f); <-크기,방향
        */
    
        
        if(Input.GetAxis("Horizontal")>0) 
        {
            chardir = -1;
        } 
        else
        {
            chardir = 1;
        }
        transform.localScale = new Vector3(chardir * 1f, 1f, 1f);
    }
}
