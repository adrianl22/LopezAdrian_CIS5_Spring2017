/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 1, 2017, 8:12 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input - output Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float kinE(float, float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   kE,//Kinetic Energy
            m,//mass in kilograms
            v;//velocity in meters per second
    //Input or initialize values Here
    cout<<"This program determines an objects Kinetic Energy."<<endl;
    cout<<"Enter the objects mass in kilograms      = ";
    cin>>m;
    cout<<"Enter the velocity in meters per seconds = ";
    cin>>v;
    
    kE=kinE(m,v);
    cout<<endl<<"Kinetic Energy = "<<kE<<" kg*m/s^2"<<endl;
    //Process/Calculations Here

    //Output Located Here

    //Exit
   return 0;
}
float kinE(float a, float b){
    float c;
    c=.5*a*pow(b,2);
    return c;
}