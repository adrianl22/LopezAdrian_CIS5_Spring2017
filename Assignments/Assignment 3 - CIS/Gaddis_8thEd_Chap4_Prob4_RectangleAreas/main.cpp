/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 18, 2017, 9:20 AM
 * Purpose:  Determines which rectangle has the larger area.
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
    float length1, width1,  //Length and width of 1st rectangle
          length2, width2,   //Length and with of 2nd rectangle
          area1, area2;     //Area of both rectangles
    //Input data
    cout<<"This programs compares the length and with of 2"<<endl;
    cout<<"rectangles to determine which has the larger area."<<endl;
    cout<<"Enter the Length and width of the first rectangle. "<<endl;
    cout<<"Length = ";
    cin>>length1;
    cout<<"Width  = ";
    cin>>width1;
    cout<<"Enter the length and width of the second rectangle. "<<endl;
    cout<<"Length = ";
    cin>>length2;
    cout<<"Width  = ";
    cin>>width2;
    
    //Solving for area (length * width)
    area1=length1*width1;
    area2=length2*width2;
    
    //Determine which rectangle has the larger area
    if (area1>area2)
    {    cout<<"The first rectangle has the larger area."<<endl;}
    if (area1<area2)
    {    cout<<"The second rectangle has the larger area."<<endl;}
    if (area1==area2)
    {    cout<<"Both rectangles have the same area."<<endl;}
    //Map inputs to outputs or process the data
 
    //Exit stage!
    return 0;
}
