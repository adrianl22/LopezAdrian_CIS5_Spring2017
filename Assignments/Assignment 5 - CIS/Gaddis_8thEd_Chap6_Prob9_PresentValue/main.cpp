/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 1, 2017, 8:12 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input - output Library
#include <cmath>    //Math Library
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float pV(float,float,float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   p,//Present Value
            f,//Future Value
            r,//Annual interest rate
            n;//Number of years
            
    //Input or initialize values Here
    cout<<"This program helps you determine the Present Value need to"
            " achieve a future value of your choosing."<<endl;
    cout<<"Enter the Future Value you wish to have"<<endl;
    cin>>f;
    cout<<"Enter the annual interest rate % (not in decimals)"<<endl;
    cin>>r;
    cout<<"Enter the number of years you are willing to wait"<<endl;
    cin>>n;
    cout<<endl;
    //Process/Calculations Here
    p= pV(f,r,n);
    //Output Located Here
    cout<<fixed<<setprecision(2);
    cout<<"Present Value = $"<<p<<endl;
    //Exit
   return 0;
}
float pV(float a,float b,float c){
    float d;
    d=a/pow(1+(b/100),c);
    return d;
}
