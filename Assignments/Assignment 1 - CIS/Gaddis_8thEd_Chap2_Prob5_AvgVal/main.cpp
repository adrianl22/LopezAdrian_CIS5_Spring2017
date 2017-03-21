/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 28, 2017, 5:55 PM
 * Purpose:  Finding the average
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
    float val1, val2, val3, val4, 
            val5, sum, avg;
    
    //Initialize variables
    val1=28;       //Identifying the values
    val2=32;
    val3=37;
    val4=24;
    val5=33;
    
    sum=val1+val2+val3+val4+val5;
    
    avg=sum/5;      //sum of values divided by the number of values

    
    //Map inputs to outputs or process the data

    
    
    //Output the transformed data
            cout<<"The average between the numbers "
            "28 32 37 24 33 = "<<avg<<endl;
    
    //Exit stage right!
    return 0;
}