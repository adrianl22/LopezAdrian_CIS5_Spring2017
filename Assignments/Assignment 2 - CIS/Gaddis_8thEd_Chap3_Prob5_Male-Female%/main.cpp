/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 7:03 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library


using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants
const float PERCENT=100.0f;


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float nMale,
        nFemale,
        nStuds,
        mPer,
        fPer;
    
    //Initialize variables
    cout<<"How many students are in your class? "<<endl;
    cin>>nStuds;
    cout<<"How many male student are in your class? "<<endl;
    cin>>nMale;
    cout<<"How many female student are in your class? "<<endl;
    cin>>nFemale;
    //Map inputs to outputs or process the data
    mPer=(nMale/nStuds)*PERCENT;
    fPer=(nFemale/nStuds)*PERCENT;
    
   
    //Output the transformed data
    cout<<"Percentage of Male students in class   = "<<mPer<<"%"<<endl;
    cout<<"Percentage of Female students in class = "<<fPer<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}
