
/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 6:34 PM
 * Purpose:  
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float score1, score2, score3, score4, score5, avg;
    
    //Input data
    cout<<"Input test score 1 =";
    cin>>score1;
    cout<<"Input test score 2 =";
    cin>>score2;
    cout<<"Input test score 3 =";
    cin>>score3;
    cout<<"Input test score 4 =";
    cin>>score4;
    cout<<"Input test score 5 =";
    cin>>score5;
    
    avg=(score1+score2+score3+score4+score5)/5;
    //Output the transformed data
    cout<<fixed<<setprecision(1);
    cout<<"Average test score = "<<avg<<endl;
    //Exit stage right!
    return 0;
}