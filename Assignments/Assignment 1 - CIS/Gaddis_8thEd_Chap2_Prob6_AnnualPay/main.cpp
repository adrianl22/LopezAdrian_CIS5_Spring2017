/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 28, 2017, 6:02 PM
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
    float PayChk=2200,  //Paycheck - amount earned
          PayPer=26,    //Payment period 26 weeks
          AnPay;        //Annual pay
    
    //Initialize variables

    
    //Map inputs to outputs or process the data
  AnPay=PayChk*PayPer;
    
    
    //Output the transformed data
  cout<<"Paycheck earned  = $"<<PayChk<<endl;
  cout<<"Payment Period   = "<<PayPer<<" weeks"<<endl;
  cout<<"Anual Pay        = $"<<AnPay<<endl;
    
    //Exit stage right!
    return 0;
}