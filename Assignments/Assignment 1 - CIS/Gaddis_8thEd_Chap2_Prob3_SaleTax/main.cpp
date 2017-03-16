/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 26, 2017, 4:14 PM
 * Purpose:  Calculating the total sales tax
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
    float Pur, StTax, ContTax ,TtlTax;
    
    //Initialize variables
    Pur=95;                         //Amount of Purchase
    StTax=Pur*.04;                      //State Tax
    ContTax=Pur*.02;                    //County Tax
           
    //Map inputs to outputs or process the data
    TtlTax=StTax+ContTax; //Total sales tax
   
    
    //Output the transformed data
    cout<<"Total sales tax collected = $"<<TtlTax<<endl;
    
    //Exit stage right!
    return 0;
}