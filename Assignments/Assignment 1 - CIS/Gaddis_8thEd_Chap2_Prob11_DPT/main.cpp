/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 28, 2017, 7:02 PM
 * Purpose:  Solving for distance traveled
 */

//System Libraries
#include <iostream>  //Input - Output Library


using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float GasTank=20,
          MPGTwn=23.5,
          MPGHigh=28.9,
          DistT, DistH;
    
    //Initialize variables
    DistT=GasTank*MPGTwn;
    
    DistH=GasTank*MPGHigh;
    //Map inputs to outputs or process the data

    
    
    //Output the transformed data
    cout<<"Number of gallons        = "<<GasTank<<" Gallons"<<endl;
    cout<<"Average Miles Per Gallon = "<<DistT<<" MPG"<<endl;
    cout<<"Distance possible        = "<<DistH<<" Miles"<<endl;    
    //Exit stage right!
    return 0;
}