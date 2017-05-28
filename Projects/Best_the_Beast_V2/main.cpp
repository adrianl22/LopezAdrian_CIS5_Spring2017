/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 11, 2017, 8:12 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input - output Library
#include <ctime>    //Set random number seed
#include <cstdlib>  //Random Number generator
#include <iomanip>  //Formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    //Declare all Variables Here
        //Option inputted by user
        //Score based on amount of health at the end of game
        //Random number for actions
        //Player health points
        //New Hp after taking damage or healing
        //Enemy Hp
        //New Enemy Hp after taking damage or healing
    //Input or initialize values Here
    //Start/Repeat choices until defeated or game is won
        //Output health and selections to receive input
        //Place outcomes of inputs
            //If Attacking
                //Set probability of attacking, missing or doing a critical hit
                //Enemy response to player action
                    //Set probability of attacking, missing or Ultimate attack
                    //70% chance of attacking
                        //Damage calculation
                    //10% chance of missing
                    //20% chance of ultimate attack
                        //Damage calculation
            //If using magic
                //Magic attack doing 10 damage
                //Damage calculation
                //Enemy response to player action
                    //Set probability of attacking, missing or Ultimate attack
                        //70% chance of attacking
                            //Damage calculation
                        //10% chance of missing
                        //20% chance of ultimate attack
                        //Damage calculation
                        //counter measure to magic spam
                            //Enemy healing calculation
            //If healing
                //Full healing calculation hp=20 again
                    //Set probability of attacking, missing or Ultimate attack      
                            //70% chance of attack
                                //Damage calculation
                            //10% chance of missing
                            //20% chance of ultimate attack
                                //Damage calculation
            //If defending
                //80% chance of defenses working
                //20% chance of defenses failing 
                    //Damage calculation
        //Random enemy healing
                //Enemy healing calculation
    //Set hp & enHp to 0 when defeated
    //Calculating score
    //Output for when game is won
        //Display health & score
    //Output for when defeated
       //Display health & score
    //Exit
   return 0;
}