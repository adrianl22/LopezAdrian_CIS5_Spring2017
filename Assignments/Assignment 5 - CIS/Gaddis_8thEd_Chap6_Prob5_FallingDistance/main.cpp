/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 1, 2017, 8:12 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input - output Library
#include <cmath>    //Math Library
#include <iomanip>  //Formatting
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float falDist(float n);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float    t;//Time of fall
    //Input or initialize values Here
    cout<<"This program determines the falling distance"
            " of an object given is falling time"<<endl;
    cout<<"Enter the falling time to get the falling distance in seconds"<<endl;
    cin>>t;
    falDist(t);
    //Process/Calculations Here

    //Output Located Here

    //Exit
   return 0;
}
float falDist(float n){
    float   d,//Distance
            g=9.8f;//Gravity
    d=.5*g*pow(n,2);
    cout<<fixed<<setprecision(2);
    cout<<"Falling Distance = "<<d<<" meters"<<endl;
}