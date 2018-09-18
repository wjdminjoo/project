using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameObject : MonoBehaviour {

    public GameObject projecttile;
    public AudioClip shootSound;


    private float throwSpeed = 2000f;
    private AudioSource source;
    private float volLowRange = 0.5f; // Volume low
    private float volHighRange = 1.0f; // Volume High


    private void Awake()
    {

    }

}
