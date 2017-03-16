/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 26, 2017, 3:46 PM
 * Purpose:  writing a program that stores the sum
 *           of the 2 integer 50 and 100.
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
    int opt1, opt2, sum;
    
    
    //Initialize variables
    opt1=50;
    opt2=100;
    
    //Map inputs to outputs or process the data
    sum=opt1+opt2;
    
    
    //Output the transformed data
    cout<<"50 + 100 = "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}