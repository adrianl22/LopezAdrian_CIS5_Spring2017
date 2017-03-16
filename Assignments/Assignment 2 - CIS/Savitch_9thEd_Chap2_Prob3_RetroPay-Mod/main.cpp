/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 11:56 AM
 * Purpose:  This program calculates 
 *           the amount of retro pay 
 *           during any number of months.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float prevSal, newAn, newMon, rtrPay,
            payInc=0.076f, nMon;
    //Input or initialize values Here
    cout<<"This program calculates the amount of a salary"
            " increase after a pay increase";
    cout<<"Input your previous salary = $ ";
    cin>>prevSal;
    cout<<"Input the number of months for retro pay = ";
    cin>>nMon;
    
    newAn=(1+payInc)*prevSal;
    newMon=newAn/12.0f;
    rtrPay=(payInc*prevSal)/(12.0f/nMon);
    //Process/Calculations Here
    cout<<"New annual pay   = $"<<newAn<<endl;
    cout<<"New Monthly pay  = $"<<newMon<<endl;
    cout<<"Retro-Active pay = $"<<rtrPay<<endl;
    //Output Located Here


    //Exit
    return 0;
}

