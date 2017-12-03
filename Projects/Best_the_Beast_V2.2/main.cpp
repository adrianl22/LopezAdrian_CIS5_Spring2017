/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on May 27, 2017, 5:30 PM
 * Purpose: Project 2
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
int enemy(int);//enemy encountered
int enAttck(int,int,int);//enemy turn
int attack(int,int);//attack
int heal(int);
int magic(int,int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    bool alive1=true,
         alive2=true;
    char choice1,
         choice2,
         input;
    string score;
    int dam=5,   //Damage dealt
        num1,    //Random number for actions
        hp=20,   //Player health points
        nHp,     //New Hp after taking damage or healing
        enHp=30, //Enemy Hp
        nEnHp;   //New Enemy Hp after taking damage or healing
    //Input or initialize values Here
    cout<<"The Tower of Igrid has been the death of many who challenge it."
            <<endl;
    cout<<"Defeating this challenge will surely lead to a brighter future"
            <<endl;
    cout<<" for any who can come out on top"<<endl;
    cout<<"Would you like to challenge it? [y]/[n]"<<endl;
    cin>>choice1;
    if (choice1=='y'||choice1=='Y'){
        cout<<"Then go on forward with your head held high."<<endl;
    }
    else if (choice1=='n'||choice1=='N'){
        cout<<"Nonsense get in there and do your best"<<endl;
    }
    //Start/Repeat choices until defeated or game is won
    do{
        enemy(hp);
    }while (hp>=1);
    //Exit
   return 0;
}
int attack(int b,int d){
    //Declare all Variables Here
    int  n;
    char c;
    bool crit=false;
    cout<<"What will you do?"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"[S]word Slash    |   [B]urning Barrage"<<endl;
    cin>>c;
    n=rand()%10+1;       //[1-10] For creating chance of success
    //20% Chance of missing
    if (n==9||n==10){
        cout<<"Attack Missed"<<endl;
    }
    //80% chance of hitting
    if (n>=1&&n<=8){
        //10% percent chance of a Crit
        if (n==8)crit=true;
        switch(c){
            case 's':{cout<<"You used Sword Slash"<<endl;
                     if(crit==true){
                         cout<<"Critical Hit"<<endl;
                         cout<<"Enemy took "<<d*2<<" damage"<<endl<<endl;
                         b=b-d*2;break;
                     }
                     else cout<<"Enemy took "<<d<<" damage"<<endl<<endl;
                          b=b-d;break;}
            case 'b':{cout<<"You used Burning Barrage"<<endl;
                      if(crit==true){
                         cout<<"Critical Hit"<<endl;
                         cout<<"Enemy took "<<(d+2)*2<<" damage"<<endl<<endl;
                         b=b-d*2;break;
                      }
                      else cout<<"Enemy took "<<(d+2)<<" damage"<<endl<<endl;
                          b=b-(d+2);break;}
            default:break;}
    }
    return b;
}
int enAttck(int a,int d,int b){
    //Declare all Variables Here
    int  r,n,u;
    char c;
    bool crit=false;
    //Input or initialize values Here
    if (b<=0)cout<<"With its dying breath..."<<endl;
    cout<<"The Beast is attacking"<<endl;
    u=rand()%2+1;
    n=rand()%10+1;       //[1-10] For creating chance of success
    //Process/Calculations Here
    //20% Chance of missing
    if (n==9||n==10){
        cout<<"Attack Missed"<<endl;
    }
    //80% chance of hitting
    if (n>=1&&n<=8){
                //10% percent chance of a Crit
        if (n==8)crit=true;
        switch(u){
            case 1:{cout<<"The Beast used Slash."<<endl;
                     if(crit==true){
                         cout<<"Critical Hit"<<endl;
                         cout<<"You took "<<d*2<<" damage"<<endl<<endl;
                         a=a-d*2;break;
                     }
                     else cout<<"You took "<<d<<" damage"<<endl<<endl;
                         a=a-d;break;}
            case 2:{cout<<"The Beast used Fire Blast!"<<endl;
                      if(crit==true){
                         cout<<"Critical Hit"<<endl;
                         cout<<"You took "<<(d+5)*2<<" damage"<<endl<<endl;
                         a=a-(d+5)*2;break;
                      }
                      else cout<<"You took "<<(d+5)<<" damage"<<endl<<endl;
                         a=a-(d+5);break;}
            default:{cout<<"Invalid input"<<endl;
                     cout<<"But the Beast knows what its doing so now it's its "
                            "turn"<<endl;break;}}
    }
    return a;
}
int magic(int b,int d){
    //Declare all Variables Here
    int  n;
    char c;
    bool crit=false;
    cout<<"What will you do?"<<endl;
    cout<<"------------------------------"<<endl;
    cout<<"[B]last Burn   |   [S]earing Slash"<<endl;
    cin>>c;
    n=rand()%10+1;       //[1-10] For creating chance of success
        //20% Chance of missing
    if (n==9||n==10){
        cout<<"Attack Missed"<<endl;
    }
    //80% chance of hitting
    if (n>=1&&n<=8){
        //10% percent chance of a Crit
        if (n==8)crit=true;
        switch(c){
            case 's':{cout<<"You used Searing Slash"<<endl;
                     if(crit==true){
                         cout<<"Critical Hit"<<endl;
                         cout<<"Enemy took "<<(d+3)*2<<" damage"<<endl<<endl;
                         b=b-(d+3)*2;break;
                     }
                     else cout<<"Enemy took "<<(d+3)<<" damage"<<endl<<endl;
                          b=b-(d+3);break;}
            case 'b':{cout<<"You used Blast Burn"<<endl;
                      if(crit==true){
                         cout<<"Critical Hit"<<endl;
                         cout<<"Enemy took "<<(d+5)*2<<" damage"<<endl<<endl;
                         b=b-(d+5)*2;break;
                      }
                      else cout<<"Enemy took "<<(d+5)<<" damage"<<endl<<endl;
                          b=b-(d+5);break;}
            default:{cout<<"Invalid input"<<endl;
                     cout<<"But the Beast knows what its doing so now it's its "
                            "turn"<<endl;break;}}
    }
    return b;
}
int heal(int a){
    cout<<"Now healing."<<endl;
    //Full healing calculation hp=20 again
    for (int i;i<=20;i++){
        if (i==20)
            a=i;
    }
    return a;
}
int enemy(int a){
    bool    alive1=false,
            alive2=false;
    char    input,
            score;
    int     nHp,
            enHp=30,
            nEnHp,
            dam=5;
        do{
            //Output health and selections to receive input
            cout<<"--------------------------------------"<<endl;
            cout<<"Hp = "<<a<<setw(5)<<"|"<<setw(14)<<"Enemy HP = "<<enHp<<endl;
            cout<<"--------------------------------------"<<endl;
            cout<<"[A]ttack   [M]agic   [H]eal"<<endl;
            cin>>input;
            cout<<endl;
            //Place outcomes of inputs
            switch (input){
                //If Attacking
                case 'a':{nEnHp=attack(enHp,dam);
                          enHp=nEnHp;
                          nHp=enAttck(a,dam,enHp);
                          a=nHp;
                          break;}
                        //If using magic
                case 'm':{nEnHp=magic(enHp,dam);
                          enHp=nEnHp;
                          nHp=enAttck(a,dam,enHp);
                          a=nHp;
                          break;}
                //If healing
                case 'h':{a=heal(a);
                          nHp=enAttck(a,dam,enHp);
                          a=nHp;
                         break;}
                //If defending
                default: cout<<"Invalid input."<<endl;}
        if (enHp<=0)alive2=false;
        if (a<=0)alive1=false;
    }while(alive1==true && alive2==true);
    //Set hp & enHp to 0 when defeated
    if (enHp<1){
        enHp=0;}
    if (a<1){
        a=0;}

    //Output for when game is won
    if (enHp<1)
    {   //Display health & score
        cout<<"------------------------------------"<<endl;
        cout<<"Hp = "<<a<<setw(5)<<"|"<<setw(14)<<"Enemy HP = "<<enHp<<endl;
        cout<<"------------------------------------"<<endl;

        cout<<"Congratulations! You win!"<<endl;}
    //Output for when defeated
    if (a<1)
    {   //Display health & score
        cout<<"------------------------------------"<<endl;
        cout<<"Hp = "<<a<<setw(5)<<"|"<<setw(14)<<"Enemy HP = "<<enHp<<endl;
        cout<<"------------------------------------"<<endl;

        cout<<"It would seem that you've lost."<<endl;}
    return a;
}