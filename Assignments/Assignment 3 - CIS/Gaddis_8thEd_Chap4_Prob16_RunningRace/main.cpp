/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 20, 2017, 10:15 PM
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
    float run1, run2, run3; //Time each runner received
    char first, second, third; //Time each racer received 
    
    //Input data
    cout<<"This program helps determine the placing"<<endl;
    cout<<"[first, second or third] for each runner."<<endl;
    cout<<"Input the time for runner A"<<endl;
    cin>>run1;
    if (run1<0)
    {    cout<<"Invalid number"<<endl;
        return 1;}
    cout<<"Input the time for runner B"<<endl;
    cin>>run2;
    if (run2<0)
    {    cout<<"Invalid number"<<endl;
        return 1;}
    cout<<"Input the time for runner C"<<endl;
    cin>>run3;
    if  (run3<0)
    {    cout<<"Invalid number"<<endl;
        return 1;}
    cout<<endl;
    
    //Map inputs to outputs or process the data
    //Determine placing
    first=  (run1<run2 && run1<run3)?'A':
            (run2<run1 && run2<run3)?'B':'C';
    second= (run1<run2 && run1>run3)?'A':
            (run1>run2 && run1<run3)?'A':
            (run2<run1 && run2>run3)?'B':
            (run2>run1 && run2<run3)?'B':'C';
    third=  (run1>run2 && run1>run3)?'A':
            (run2>run1 && run2>run3)?'B':'C';

    cout<<"First place   = Runner "<<first<<endl;
    cout<<"Second place  = Runner "<<second<<endl;
    cout<<"Third place   = Runner "<<third<<endl;
    //Exit stage!
    return 0;
}
