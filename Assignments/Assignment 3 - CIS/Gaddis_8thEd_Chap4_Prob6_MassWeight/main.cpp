/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 20, 2017, 8:20 PM
 * Purpose:  Mass to Weight conversion
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    float mass, weight; //Mass and weight
    //Input data
    cout<<"This program calculates the weight of"
            " an object given its mass"<<endl;
    cout<<"What is the mass of an object you want the weight to?"<<endl;
    cin>>mass;
   
    weight=mass*9.8;    //Mass to weight conversion
    
    cout<<"The weight of the object is "<<weight<<endl;
   
    //Map inputs to outputs or process the data

    //Exit stage!
    return 0;
}
