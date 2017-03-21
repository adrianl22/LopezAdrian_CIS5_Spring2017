/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 20, 2017, 9:53 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants
const float PERCENT=100;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    float ttlCost, discount; //total cost and discount earned
    int softWar=99, nUnits;  //cost of software and number of units
    //Input data
    cout<<"This program calculates the total cost for the purchase"
            " of software that costs $99"<<endl;
    cout<<"How many units are you buying?"<<endl;
    cin>>nUnits;
    
    //Determine if eligible for discount
    if (nUnits<0)
    {   cout<<"Invalid number."<<endl;
        return 1;}
    
    if (nUnits<10)
    {   discount= 100;}
    else if (nUnits<=19 && nUnits>9)
    {   discount= 20;}
    else if (nUnits<=49 && nUnits>19)
    {   discount= 30;}
    else if (nUnits<=99 && nUnits>49)
    {   discount= 40;}
    else if (nUnits>=100)
    {   discount= 50;}
    
    ttlCost=softWar*(nUnits*(discount/PERCENT));
    //Map inputs to outputs or process the data
    cout<<"Total cost (without tax) = $"<<ttlCost<<endl;
    //Exit stage!
    return 0;
}
