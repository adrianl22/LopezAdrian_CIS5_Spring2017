/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 16, 2017, 12:47 PM
 * Purpose:  Grade branching exercise
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
    unsigned short payRate, hrsWrk;//Pay rate and hours worked
    //Input or initialize values Here
    cout<<"This program calculates your paycheck"<<endl;
    cout<<"based on your pay rate and hours worked"<<endl;
    cout<<"Input Pay Rate    $";
    cin>>payRate;
    cout<<"Input hours worked ";
    cin>>hrsWrk;
    
    //Process/Calculations Here
    if (hrsWrk<=40)
    {   cout<<"Paycheck           = $"<<payRate*hrsWrk<<endl;}
    if (hrsWrk>40)
    {   cout<<"Paycheck        = $"<<payRate*hrsWrk+payRate*(hrsWrk-40)<<endl;}
   
    //Output Located Here


    //Exit
    return 0;
}

