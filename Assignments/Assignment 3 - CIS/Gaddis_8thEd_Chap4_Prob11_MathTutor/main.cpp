/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 19, 2017, 5:15 PM
 * Purpose: Math tutor
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Time Library to seed the random number generator

using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants


//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    int num1, num2, sum, ans; //Random numbers
    //Input data
    cout<<"This program is for tutoring when it comes"<<endl;
    cout<<"to addition and subtraction."<<endl;
    cout<<"Addition [1] or Subtraction [2]?";
    cin>>ans;
    
   
    if  (ans==1)
    {   num1=rand()%1000+10;
        num2=rand()%500+10;
        
        ans=num1+num2;
        
        cout<<" "<<num1<<endl;
        cout<<"+"<<num2;
        cin.get();
        cin.ignore();
        cout<<ans<<endl;
        return 1;}
    if  (ans==2)
    {   num1=rand()%1000+10;
        num2=rand()%500+10;
        
        ans=num1-num2;
        
        cout<<" "<<num1<<endl;
        cout<<"-"<<num2;
        cin.get();
        cin.ignore();
        cout<<ans<<endl;}
    //Map inputs to outputs or process the data

    //Exit stage!
    return 0;
}
