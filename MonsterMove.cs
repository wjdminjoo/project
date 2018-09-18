using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterMove : MonoBehaviour {
    public Rigidbody2D rb;
    public float speed = 1.0f;

    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    public float accelerationTime = 2.0f;
    public float maxSpeed = 5.0f;
    private Vector2 MoveMent;
    private float timeLeft;


    private void Update()
    {
        //InvokeRepeating("SetRandomMove", 0, 1);
        timeLeft -= Time.deltaTime;
        if (timeLeft <= 0)
        {
            MoveMent = new Vector2(Random.Range(1.2f, 1.2f), Random.Range(1.2f, 1.2f));
            timeLeft += accelerationTime;
        }
        
    }

    private void FixedUpdate()
    {
        rb.AddForce(MoveMent * maxSpeed);
    }



}
