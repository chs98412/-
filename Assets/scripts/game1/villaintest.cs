using System.Collections;
using UnityEngine;
using UnityEngine.Experimental.U2D.Animation;

public class villaintest : baseVillain
{

    [SerializeField]
    [Range(0.01f, 10f)]
    private float fadeTime; //fadespeed 값이 10이면 1초(값이 클수록 빠름)


    public GameObject Head;
    public GameObject l_leg;
    public GameObject R_leg;
    public GameObject l_am;
    public GameObject R_am;

    SpriteResolver spriteResolver;

    private void Start()
    {
        spriteResolver = Head.GetComponent<SpriteResolver>();


        //확인을 위해 일단 넣어줌
        
    }

    private void Awake()
    {
        StartCoroutine(Fadeinout());
        //StartCoroutine(Fade(0, 1));
    }
    //new 왜 쓰는지 모름.. 
    new void Update()
    {
        base.Update();
        base.villainMove();
        //base.targetShoot();                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        colorchange();
        //base.colorchange();
        base.NontargetShoot();
    }

    private void colorchange()      //피망 목숨이 반밖에 남지 않았을 때 빨간피망으로 바꿔
    {
        if (HP.fillAmount < 0.5)
        {
            spriteResolver = Head.GetComponent<SpriteResolver>();
            spriteResolver.SetCategoryAndLabel("Head", "pimangred");
            

        }
    }
    private IEnumerator Fade(float start, float end)
    {
        float currentTime = 0.0f;
        float percent = 0.0f;

        while (percent < 1)
        {
            currentTime += Time.deltaTime;
            percent = currentTime / fadeTime;


            Color color = Head.GetComponent<SpriteRenderer>().color;
            color.a = Mathf.Lerp(start, end, percent);
            Head.GetComponent<SpriteRenderer>().color = color;

            Color color1 = l_leg.GetComponent<SpriteRenderer>().color;
            color.a = Mathf.Lerp(start, end, percent);
            l_leg.GetComponent<SpriteRenderer>().color = color;

            Color color2 = l_am.GetComponent<SpriteRenderer>().color;
            color.a = Mathf.Lerp(start, end, percent);
           l_am.GetComponent<SpriteRenderer>().color = color;

            Color color3 =R_leg.GetComponent<SpriteRenderer>().color;
            color.a = Mathf.Lerp(start, end, percent);
            R_leg.GetComponent<SpriteRenderer>().color = color;

            Color color4 = R_am.GetComponent<SpriteRenderer>().color;
            color.a = Mathf.Lerp(start, end, percent);
            R_am.GetComponent<SpriteRenderer>().color = color;

            HP.color = color;              //체력바도 함께 사라지도록 /

            yield return null;

        }


    }

    private IEnumerator randomPosition()
    {
        this.gameObject.transform.position = new Vector3(Random.Range(10, 40), Random.Range(5, 25), 0.0f);

        yield return null;

    }
    private IEnumerator Fadeinout()
    {
        while (true)
        {
            yield return StartCoroutine(Fade(1, 0));   //Fadeout 점점 사라짐

            yield return randomPosition();

            yield return new WaitForSeconds(1);        //사라지고 나서 바로 나타나는 것이 아니라 잠시 기다렸다가 나타 

            yield return StartCoroutine(Fade(0, 1));    //Fadein 점점 나타남

            yield return new WaitForSeconds(1);
        }

    }

   

}
