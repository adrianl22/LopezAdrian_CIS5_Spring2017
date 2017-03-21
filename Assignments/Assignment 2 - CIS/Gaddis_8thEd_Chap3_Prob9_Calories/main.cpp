/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 7:26 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    float nCkie, 
            calPser=300,
            srvng=3,
            Ckie,
            calEat;
    //Initialize variables
    cout<<"How Many cookies have you eaten?"<<endl;
    cin>>nCkie;
    
    //Map inputs to outputs or process the data
    Ckie=calPser/srvng;
    calEat=nCkie*Ckie;
    //Output the transformed data
    cout<<"You know each cookie is "<<Ckie<<" calories right?"<<endl;
    cout<<"That means you've had "<<calEat<<" calories today."<<endl;
    //Exit stage right!
    return 0;
}
