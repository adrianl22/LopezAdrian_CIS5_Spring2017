/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 15, 2017, 7:20 PM
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
    //Initialize variables
    float num1, num2; //numbers entered
    
    //Input data
    cout<<"This program determines which of two numbers"
            " entered is bigger than the other"<<endl;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second number "<<endl;
    cin>>num2;
    
    //determine which number is smaller/larger
    if (num1>num2)
    {   cout<<num1<<" is bigger."<<endl;
        cout<<num2<<" is smaller."<<endl;}
    if (num1<num2)
    {   cout<<num2<<" is bigger."<<endl;
        cout<<num1<<" is smaller."<<endl;}
    if (num1==num2)
    {   cout<<"Both numbers are identical."<<endl;}
    //Map inputs to outputs or process the data

    //Exit stage!
    return 0;
}
