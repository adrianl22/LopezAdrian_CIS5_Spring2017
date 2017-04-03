/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 19, 2017, 5:20 PM
 * Purpose:  Menu where all questions
 *           for assignment 4 are located.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <cstdlib>  //Random Number generator
#include <ctime>    //Set random number seed
#include <iomanip>  //Formatting
#include <cmath>    //Math Library

using namespace std; //Name-space under which system libraries exist
//User Libraries

//Global Constants
const float CNVDOLL=100.0f; //amount of pennies in one dollar
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    char choice;    //user input when choosing a project
    
    //Show menu and loop
    cout<<"Welcome to the menu for assignment 4."<<endl;
        do {
        
        //Display Menu
        cout<<"Choose the project you would like to examine."<<endl;
        cout<<endl<<endl<<"Type 0 to exit the menu."<<endl;
        cout<<"Type 1 for Math Tutor - Gaddis"<<endl;
        cout<<"Type 2 for ASCII Code Table - Gaddis"<<endl;
        cout<<"Type 3 for Calories Burned - Gaddis"<<endl;
        cout<<"Type 4 for Pennies for Pay - Gaddis"<<endl;
        cout<<"Type 5 for Celsius to Fahrenheit - Gaddis"<<endl;
        cout<<"Type 6 for Random Number Game - Gaddis"<<endl;
        cout<<"Type 7 for Sum of numbers [1 to n] - Gaddis"<<endl;
        cout<<"Type 8 for Distanced Traveled - Gaddis"<<endl;
        cout<<"Type 9 for New membership charge - Gaddis"<<endl<<endl;

        //Input choice
        cin>>choice;
        cout<<endl;
        //Place solutions to problems in switch statement
        switch (choice){
            case '1':{    
                //Set random number seed
                srand(static_cast<unsigned int>(time(0)));
                //Declare all Variables Here
                int op1,op2,result,answer;
                char input;
                //Input or initialize values Here
                cout<<"Math Tutor"<<endl;
                do{
                    cout<<"Choose the operation [*] [/] [+] [-]"<<endl;
                    cout<<"or press any other key to return"
                            " to the Main Menu"<<endl;
                    cin>>input;
                    cout<<endl<<endl;
                    if (!(input=='+'||input=='-'||
                            input=='*'||input=='/'))
                    {   cout<<"Return to Main Menu"<<endl<<endl;
                        continue;}
                    //Process/Calculations Here
                        switch(input){
                        case '+':{
                            op1=rand()%900+100; //[100-999]
                            op2=rand()%900+100; //[100-999]
                            answer=op1+op2;     //[3 to 4 digit result]
                            break;
                        }
                        case '-':{
                            op1=rand()%900+100; //[100-999]
                            op2=rand()%90+10;   //[100-999]
                            answer=op1-op2;     //[3 to 4 digit result]
                            break;
                        }
                        case '*':{
                            op1=rand()%90+10;   //[10-99]
                            op2=rand()%90+10;   //[10-99]
                            answer=op1*op2;     //[2 to 4 digit result]
                            break;
                        }
                        case '/':{
                            answer=rand()%90+10;//[10-99]
                            op2=rand()%90+10;   //[10-99]
                            op1=answer*op2;     //[2 to 4 digit result]
                            break;
                        }
                        default:{ 
                            cout<<"Invalid operation"<<endl;
                            }}
                    //Output Located Here
                        cout<<setw(8)<<op1<<endl;
                        cout<<input<<setw(7)<<op2<<endl;
                        cout<<"----------"<<endl;
                        cin>>result;
                        //Compare answer
                        cout<<endl;
                        cout<<((result==answer)?"Correct":"Incorrect")<<endl
                                <<endl;
                        cout<<"Answer = "<<answer<<endl<<endl;
                }while (input=='+'||input=='-'||input=='*'||input=='/');
            break;}
            case '2':{
                cout<<"ASCII Code Table"<<endl<<endl;
                for (int i=0;i<=127;i++){
                    cout<<static_cast<char>(i);
                    if (i%16==15)cout<<endl;}
                cout<<endl;
            break;}
            case '3':{    
                //Declare all Variables Here
                float calBurn=3.6, calPmin; //Cal burned & Cal-per-min
                //Input or initialize values Here
                cout<<"Calories burned per every five minutes."
                        "(on a specific treadmill)"<<endl;
                for (int i=5;i<=30;i++){
                    calPmin=calBurn*i;
                    if (i==5||i==10||i==15||i==20||i==25||i==30)
                    cout<<calPmin<<" calories after "<<i<<" Minutes"<<endl;}
                cout<<endl;
            break;}
            case '4':{
                //Declare all Variables Here
                float total,    //total amount earned
                      numDays;  //# of days worked inputted
                //Input or initialize values Here
                cout<<"Pennies for Pay"<<endl;
                cout<<"This program calculates your paycheck"<<endl;
                cout<<"depending on the number of days worked."<<endl;
                cout<<"Pay consists of a penny a day."
                        "Doubling each day after."<<endl;
                cout<<"Enter the number of days worked "<<endl;
                cin>>numDays;
                cout<<endl;
                if (numDays<1)
                {   cout<<"Invalid number"<<endl;
                    exit(0);}
                for (int i=1; i>=1&&i<=numDays; i++)
                    {total =(pow(2,i-1))/CNVDOLL;
                    cout<<fixed<<setprecision(2);
                     if (i==1)
                    cout<<"After "<<i<<" day"<<" You earn $"<<total<<endl;
                     else
                    cout<<"After "<<i<<" days"<<" You earn $"<<total<<endl;}
                cout<<endl;
            break;}
            case '5':{    
                //Declare all Variables Here
                float fahrn;  //degrees in Fahrenheit
                //Input or initialize values Here
                cout<<"Celsius to Fahrenheit conversion"<<endl;
                cout<<"0 - 20 degrees Celsius"<<endl<<endl;
                for (int i=0;i<=20;i++){
                    //conversion of Celsius to Fahrenheit
                    fahrn=(i*1.8f)+32;
                    cout<<fixed<<setprecision(1);
                    cout<<i<<"°C = "<<fahrn<<"°F"<<endl;}
                cout<<endl;
            break;}
            case '6':{
                //Set random number seed
                srand(static_cast<unsigned int>(time(0)));
                //Declare all Variables Here
                int rN,   //Random number
                    guess;
                //Input or initialize values Here
                rN=rand()%50+1;
                cout<<"Im thinking of number between 1 and 50"<<endl;
                do{
                    cout<<"What could it be?"<<endl;
                    cin>>guess;
                    if (guess>50)
                        {cout<<"Invalid number, try again."<<endl;}
                    if (guess>rN && guess<=50)
                        {cout<<"Too high, try again."<<endl<<endl;}
                    if (guess<rN)
                        {cout<<"Too low, try again."<<endl<<endl;}    
                }while (!(guess==rN));  
                //Output Located Here
                cout<<"Congrats you got it right! It was "<<rN<<"."<<endl<<endl;
            break;}
            case '7':{
                //Declare and initialize Variables Here
                //Make sure 0<=n<=40000
                int n=40000, sum=0;       
                //Process/Calculations Here
                for (int i=1;i<=n;i++){
                    sum+=i;}
                //Output Located Here
                cout<<"The sum of 1 to "<<n<<" = "<<sum<<endl;
                cout<<"and "<<n<<"*("<<n<<"+1)/2 = "<<n*(n+1)/2<<endl<<endl;
            break;}
            case '8':{
                //Declare all Variables Here
                int dstnce, time, speed;
                //Input or initialize values Here
                cout<<"What is the speed of the vehicle in MPH?"<<endl;
                cin>>speed;
                cout<<"How many hours has it traveled?"<<endl;
                cin>>time;
                cout<<"Hour     Distanced Traveled"<<endl;
                cout<<"---------------------------"<<endl;
                for (int i=1;i<=time;i++) {
                    dstnce=i*speed;
                    cout<<i<<"                "<<dstnce<<endl;
                }
                cout<<endl;
            break;}
            case '9':{
                //Declare all Variables Here
                float crnt=2500.0f, //current charge
                      newChrg;      //new charge
                int yR=1;           //years after current charge
                //Input or initialize values Here
                cout<<"Current charge = $"<<crnt<<endl;
                do{
                    newChrg=crnt+(crnt*.04);    //solving for new charge
                    
                    cout<<"After "<<yR++<<" years, new membership charge = $"
                            <<newChrg<<endl;
                    crnt=newChrg;
                } while (yR<=6);
                cout<<endl;
            break;}
            default:{
                cout<<"Exit Program"<<endl;
            }
        }
    }while (choice>='1'&& choice<='9');

    //Output Located Here

    //Exit
    return 0;
}
