﻿using UnityEngine;

public sealed class Obstacle : MonoBehaviour
{
    //This script handles the obstacles. These are the objects that the played crashes into, affecting his speed, jump power, and pushing him back
    //There are many different obstacle types you can create using this script, you can set a special animation to be played, or a sound, or make the obstacles
    //stick to the player fro a while. Play around with the different values to see what new obstacles you can come up with

    public GameObject Player; //Used to hold the player object, if it's in the scene

    public float SpeedChange = 0.8f; //How much rhe player's speed is affected. A value below 1 will slow the player down, while a value above 1 will speed him up
    private float SpeedChangeModifier = 0.5f;
    public float TurnSpeedChange = 0.1f; //How much the Turning speed is affected. A value lower than 1 will make rotation slower
    public Vector3 Bounce = new Vector3(0, 10, 0); //How much to bounce the player and in what direction

    public float JumpChange = 1; //How much the jump power is affected. Lower than 1 means his jump is weaker
    public float JumpChangeTime = 0; //How long to keep this change

    public string HitAnimation = "Lava"; //What player animation to run when hitting this obstacle
    public float HitAnimationTime = 0; //How long to keep this animation

    public bool AnimateObstacle = false; //Should we animate the obstacle itself when hitting the player. If the obstacle has an animation, it will be played if this value is set to true

    private bool HitPlayer = false; //Did we hit the player?
    public AudioClip HitSound; //The sound to be played when hitting the player

    public bool StickToPlayer = false; //Do we stick to the player? If set to true, the obstacle will stick to the player for some time and then disappear, creating a Disperse effect in its position
    private bool StuckToPlayer = false; //Are we stuck to the player now?
    public float StickTime = 0; //How long should the obstacle stick to the player
    public Transform DisperseEffect; //The effect to be created after the stick time has passed

    public bool LookAtPlayer = false; //Should the obstacle look at the player

    public Vector3 Rotation = new Vector3(270, 0, 0); //Set an initial rotation for the obstacle, in case it turns out to be wrongly rotated
    public Vector3 Offset = new Vector3(0, 0, 0); //Offset the object in any direction at when created

    public PlayerControls kPlayerControls;

    private void Start()
    {
        if (SpeedChange < 1) SpeedChange += (SpeedChangeModifier * (1 - SpeedChange));
        Player = GameObject.FindWithTag("Player"); //Find the player in the scene and put it in a variable, for later use

        transform.Translate(Offset, Space.Self); //Move the object based on the value of Offset
        transform.eulerAngles = Rotation; //Rotate the object based on Rotation

        //Give the obstacle a random Up axis rotation, so they don't all look the same in terms of orientation
        transform.eulerAngles = new Vector3(transform.eulerAngles.x, Random.value * 360, transform.eulerAngles.z);
        kPlayerControls = Player.GetComponent<PlayerControls>();
    }

    private void Update()
    {
        if (StickToPlayer == true) //If StickToPlayer is true...
        {
            if (StickTime > 0 && StuckToPlayer == true) //...and while the stick time is more than 0 and we are actually stuck to the player...
            {
                StickTime -= Time.deltaTime; //Decrease stick time

                if (Player) transform.position = Player.transform.position; //Move the obstacle to the position of the player
            }
            else if (StuckToPlayer == true) //If the time has passed and we are still stuck to the player...
            {
                StuckToPlayer = false; //Stop being stuck

                if (DisperseEffect) Instantiate(DisperseEffect, transform.position, Quaternion.identity); //Create a disperse effect at the position of this obstacle

                Destroy(gameObject); //remove this obstacle
            }
        }

        if (LookAtPlayer == true && Player) //If look at player is set to true, look at the player
        {
            transform.LookAt(Player.transform.position); //Look at the player

            //Keep the x rotation to 0, so the obstacle doesn't potentially look straight up or straight to the ground
            //Keep the y rotation to 0, so the obstacle doesn't potentially look straight up or straight to the ground
            transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
        }

        //FP: Test for null parent, destroy obstacles not attached to a platform

        if (transform.parent == null && !StuckToPlayer)
        {
            //Debug.Log("destroying obstacle with no parent");
            Destroy(gameObject);

        }
    }

    private void OnTriggerEnter(Collider collision)
    {
        //If we hit either the player do the following...
        if (collision.tag == "Player" && HitPlayer == false && Player)
        {
            HitPlayer = true; //Set hit player to true, so we hit him only once per obstacle

            if (StickToPlayer == false) GetComponent<AudioSource>().PlayOneShot(HitSound); //If we don;t stick to the player, play the hit sound defined in the inspector
            else GetComponent<AudioSource>().Play(); //Otherwise, if we do stick to the player, play the sound that is currently in the obstacle's audio source. I do this because I want a sound loop to play from the obstacle while stuck
                                                     //to the player. A good example would be the bats obstacle which plays a bat sound loop while stuck to the player

            kPlayerControls.Speed *= SpeedChange; //Affect the player's speed
            kPlayerControls.GetComponent<Rigidbody>().velocity = Bounce; //Bounce the player
            kPlayerControls.TurnDamping *= TurnSpeedChange; //Affect the player's turning speed
            kPlayerControls.HitAnimation = HitAnimation; //Set the player's hit animation
            kPlayerControls.HitAnimationTime = HitAnimationTime; //Set the player's hit animation time

            if (kPlayerControls.JumpChangeTime <= 0) //If the player's jump power hasn't been affected yet...
            {
                kPlayerControls.JumpChange = JumpChange; //Affect the player's jump power
                kPlayerControls.JumpChangeTime = JumpChangeTime; //Set the player's JumpChange time
            }

            if (StickToPlayer == true)
            {
                StuckToPlayer = true;
                transform.parent = Player.transform.parent; //Attach the obstacle to the player
                                                            //Debug.Log("obstacle attached");
            }

            if (AnimateObstacle == true)
            {
                transform.GetComponent<Animation>().Play(); //Play the obstacle animation
            }
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (Player)
        {
            if (HitSound.name != "Ice") // don't trip on ice
                kPlayerControls.JumpState = 4; //If we finished hitting an obstacle, assuming he was bounce some distance. Automatically set the jump state to "falling after a double jump"
        }
    }
}