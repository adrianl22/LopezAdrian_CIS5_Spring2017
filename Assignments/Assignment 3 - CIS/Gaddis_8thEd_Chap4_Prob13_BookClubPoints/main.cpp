/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 17, 2017, 7:15 PM
 * Purpose:  Calculating points earned based on books purchased
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
    int nBks;       //number of books purchased
    string points;  //points earned
    //Input data
    cout<<"This program tells you the amount of points you've"
            " earned for every book you have read."<<endl;
    cout<<"Input the number of books you have purchased = ";
    cin>>nBks;
    
    if (nBks<0)     //In case someone tries to put a negative number
    {    cout<<"How could you buy a negative amount of books?"<<endl;
           return 1;}
    
    points=(nBks==0)?"0":   //Points earned per number of books purchased
           (nBks==1)?"5":
           (nBks==2)?"15":
           (nBks==3)?"30":"60";
    //Map inputs to outputs or process the data
    cout<<"For purchasing "<<nBks<<" books, you have earned "
            <<points<<" Points."<<endl;
    //Exit stage!
    return 0;
}
