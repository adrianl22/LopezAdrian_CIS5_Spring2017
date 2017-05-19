/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 11, 2017, 8:12 PM
 * Purpose: Project 1
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
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    char choice,
         input;
    string score;
    int 
        num1,    //Random number for actions
        hp=20,   //Player health points
        nHp,     //New Hp after taking damage or healing
        enHp=30, //Enemy Hp
        nEnHp;   //New Enemy Hp after taking damage or healing
    //Input or initialize values Here
    cout<<"Let's see if you can best the beast from the east"<<endl<<endl;
    //Start/Repeat choices until defeated or game is won
    do{
        //Output health and selections to receive input
        cout<<"--------------------------------------"<<endl;
        cout<<"Hp = "<<hp<<setw(5)<<"|"<<setw(14)<<"Enemy HP = "<<enHp<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"[A]ttack   [D]efend   [M]agic   [H]eal"<<endl;
        cin>>input;
        cout<<endl;
        //Place outcomes of inputs
        switch (input){
            //If Attacking
            case 'a':{ cout<<"Attack!"<<endl;
                //Set probability of attacking, missing or doing a critical hit
                num1=rand()%10+1;       //[1-10] For creating chance of success
                if (num1>=1 && num1<=7)     //50% chance of attacking
                {   cout<<"Beast takes 5 damage."<<endl;
                    //Damage calculation
                    nEnHp=enHp-5;   
                    enHp=nEnHp;}    
                if(num1==8||num1==9)        //20% chance of a critical hit
                {   cout<<"Critical hit!"<<endl;
                    cout<<"Beast takes 10 Damage."<<endl;
                    //Damage calculation
                    nEnHp=enHp-10;  
                    enHp=nEnHp;}    
                else if (num1==10)    //30% chance of missing
                {   cout<<"You missed..."<<endl;}
                
                cout<<endl;
                //Enemy response to player action
                if(enHp>=1)
                {   cout<<"The Beast is Attacking"<<endl;
                    //Set probability of attacking, missing or Ultimate attack
                    num1=rand()%10+1;
                    if (num1>=1 && num1<=7) //70% chance of attacking
                    {   cout<<"The Beast slashed you. You take 5 Damage."<<endl;
                        //Damage calculation
                        nHp=hp-5;
                        hp=nHp;}
                    if (num1==8)          //10% chance of missing
                    {   cout<<"It missed."<<endl;}
                    else if (num1==9||num1==10)  //20% chance of ultimate attack
                    {   cout<<"Its using its ultimate attack!"<<endl;
                        cout<<"You take 10 Damage."<<endl;
                        //Damage calculation
                        nHp=hp-10;
                        hp=nHp;}}break;}
            //If using magic
            case 'm':{cout<<"Lightning Barrage!"<<endl;
                //Magic attack doing 10 damage
                cout<<"Beast takes 10 damage."<<endl<<endl;
                //Damage calculation
                nEnHp=enHp-10;  
                enHp=nEnHp;
                cout<<endl;
                //Enemy response to player action
                if(enHp>=11)    //Enemy attack
                {  cout<<"The Beast is Attacking!"<<endl;
                    num1=rand()%10+1;
                        if (num1>=1 && num1<=7) //70% chance of attacking
                        {   cout<<"The Beast slashed you. You take 5"
                                " Damage."<<endl;
                            //Damage calculation
                            nHp=hp-5;
                            hp=nHp;}
                        if(num1==8)  //10% chance of missing
                        {   cout<<"It missed!"<<endl;}
                        else if (num1==9||num1==10)  //20% chance of ultimate attack
                        {   cout<<"Its using its ultimate attack!"<<endl;
                            cout<<"You take 10 Damage."<<endl;
                            //Damage calculation
                            nHp=hp-10;
                            hp=nHp;}}
                if (enHp<=10 && enHp>=1)    //counter measure to magic spam
                {   cout<<"Oh no it's healing itself."<<endl;
                        //Enemy healing calculation
                        for (nEnHp;nEnHp<=30;nEnHp++)
                            if (nEnHp<=30)
                            enHp=nEnHp;}break;}
            //If healing
            case 'h':{cout<<"Now healing."<<endl;
                //Full healing calculation hp=20  again
                for (nHp;nHp<=20;nHp++)
                    if (nHp<=20)
                    {   hp=nHp;}
                cout<<endl;
                if(enHp>=1)
                    {  cout<<"The Beast is Attacking!"<<endl;
                        num1=rand()%10+1;
                            if (num1>=1 && num1<=7) //70% chance of attack
                            {   cout<<"The Beast slashed you."
                                    " You take 5 Damage."<<endl;
                                //Damage calculation
                                nHp=hp-5;
                                hp=nHp;}
                            if(num1==8) //10% chance of missing
                            {   cout<<"It missed!"<<endl;}
                            else if (num1==9||num1==10)//20% chance of ultimate attack
                            {   cout<<"Its using its ultimate attack!"<<endl;
                                cout<<"You take 10 Damage."<<endl;
                                //Damage calculation
                                nHp=hp-10;
                                hp=nHp;}
                        cout<<endl;}break;}
            //If defending
            case 'd':{cout<<"You ready your defenses."<<endl<<endl;
            num1=rand()%10+1;
                if (num1>=1 && num1<=8)//80% chance of defenses working
                    {cout<<"Your defenses were successful."<<endl;}
                else //20% chance of defenses failing 
                {   cout<<"Oh no, it broke your defenses."<<endl;
                    //Damage calculation
                    nHp=hp-5;
                    hp=nHp;
                cout<<endl;}break;}
            default: cout<<"Invalid input."<<endl;}
        //Random enemy healing
        if (enHp<=10&&enHp>=1){
            num1=rand()%10+1;
            if (num1>=1 && num1<=5){
                cout<<"The beast is healing itself."<<endl;
                    for (nEnHp;nEnHp<=30;nEnHp++)
                        if (nEnHp<=30)
                        enHp=nEnHp;}}
    }while(hp>=1 && enHp>=1);
    //Set hp & enHp to 0 when defeated
    if (enHp<1){
        enHp=0;}
    if (hp<1){
        hp=0;}
    score= (hp>=16&&hp<=20)?"Perfect!":
           (hp>=9&&hp<=15)?"Great!":
           (hp>=4&&hp<=8)?"Okay!":"Yikes!";
    //Output for when game is won
    if (enHp<1)
    {   //Display health & score
        cout<<"------------------------------------"<<endl;
        cout<<"Hp = "<<hp<<setw(5)<<"|"<<setw(14)<<"Enemy HP = "<<enHp<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<score<<endl;
        cout<<"Congratulations! You win!"<<endl;}
    //Output for when defeated
    if (hp<1)
    {   //Display health & score
        cout<<"------------------------------------"<<endl;
        cout<<"Hp = "<<hp<<setw(5)<<"|"<<setw(14)<<"Enemy HP = "<<enHp<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<score<<endl;
        cout<<"It would seem that you've lost."<<endl;}
    //Exit
   return 0;
}