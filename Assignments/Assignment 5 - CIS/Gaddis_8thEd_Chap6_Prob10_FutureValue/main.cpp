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
float fV(float,float,float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   p,//Present Value
            f,//Future Value
            r,//Monthly interest rate
            n;//Number of Months
            
    //Input or initialize values Here
    cout<<"This program helps you determine the Future Value based"
            " on your Present Value."<<endl;
    cout<<"Enter the Present Value you have"<<endl;
    cin>>p;
    cout<<"Enter the monthly interest rate % (not in decimals)"<<endl;
    cin>>r;
    cout<<"Enter the number of months you are willing to wait"<<endl;
    cin>>n;
    cout<<endl;
    //Process/Calculations Here
    r=r/100;
    f= fV(p,r,n);
    //Output Located Here
    cout<<fixed<<setprecision(2);
    cout<<"Future Value = $"<<f<<endl;
    //Exit
   return 0;
}
float fV(float a,float b,float c){
    float d;
    cout<<fixed<<setprecision(2);
    d=a*pow(1.0f+b,c);
    return (d);
}
