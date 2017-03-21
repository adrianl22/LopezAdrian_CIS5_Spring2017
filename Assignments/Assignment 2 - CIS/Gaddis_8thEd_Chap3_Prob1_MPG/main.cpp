
/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 6:21 PM
 * Purpose:  
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
    float gasTank, nMiles,mpg;
    
    
    //Input data
    cout<<"This program calculates the amount"
            " miles per gallon a car can drive"<<endl;
    cout<<"Number of gallons car can hold               = ";
    cin>>gasTank;
    cout<<"Number of miles car can drive on a full tank = ";
    cin>>nMiles;
    
    mpg=nMiles/gasTank;
    //Output the transformed data
    cout<<"Miles per gallon                             = "<<mpg<<endl;
    //Exit stage right!
    return 0;
}