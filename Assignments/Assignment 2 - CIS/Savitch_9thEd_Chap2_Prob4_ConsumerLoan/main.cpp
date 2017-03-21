/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 4:02 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip> 


using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants
const float YEARS=12.0f,//Years to months conversion
            PERCENT=100.0f;//conversion for percents

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float faceVal,//Face value of loan
            nMon,//duration of loan (months)
            intRate,//Interest of loan
            consAm,//Consumer amount desired
            monPay;//monthly payment
    
    //Initialize variables
    cout<<"This program calculates the amount a loan"
            " should be to receive the desired amount."<<endl;
    cout<<"Input the amount desired            = $";
    cin>>consAm;
    cout<<"Input the duration of loan (months) = ";
    cin>>nMon;
    cout<<"Input the interest rate %           = ";
    cin>>intRate;
    
    //Map inputs to outputs or process the data
    faceVal=consAm/(1-(intRate/PERCENT)*(nMon/YEARS));
    monPay=faceVal/nMon;
    
   
    //Output the transformed data
    cout<<fixed<<setprecision(2);
    cout<<"The face value of the loan          = $"<<faceVal<<endl;
    cout<<"Monthly pay                         = $"<<monPay<<endl;
    
    //Exit stage right!
    return 0;
}
