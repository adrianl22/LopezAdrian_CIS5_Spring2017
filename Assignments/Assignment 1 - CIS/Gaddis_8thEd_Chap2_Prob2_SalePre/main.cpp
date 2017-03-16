/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 26, 2017, 3:57 PM
 * Purpose:  Program for predicting sales
 *           of a company depending on their
 *           percentage of total sales and how
 *           much they will be earning.
 */

//System Libraries
#include <iostream>  //Input - Output Library


using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants
const float MILLION=1000000;  //

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float PerSale, Sales, TtlSale;
    
    //Initialize variables
    PerSale=.58;
    Sales=8.6;
    
    //Map inputs to outputs or process the data
    TtlSale=Sales*PerSale;
    
    //Output the transformed data
    cout<<"With a sales of 8.3 million a company with 58%"
            " of sales will have total sales of "<<TtlSale<<" Million."<<endl;
    
    //Exit stage right!
    return 0;
}