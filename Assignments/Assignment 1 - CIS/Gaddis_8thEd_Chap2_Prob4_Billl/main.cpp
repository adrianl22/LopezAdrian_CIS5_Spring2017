/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 26, 2017, 4:32 PM
 * Purpose:  Calculate the tax and tip of a meal.
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
    float Meal, Tax, Tip, TtlBill;
    
    
    //Initialize variables
    Meal=88.67;
    Tax=Meal*.0675;
    Tip=Meal*.2;
    
    //Map inputs to outputs or process the data
    TtlBill=Meal+Tax+Tip;
    
    
    //Output the transformed data
    cout<<"Meal = $"<<Meal<<endl;
    cout<<"Tax from meal = $"<<Tax<<endl;
    cout<<"Tip for meal = $"<<Tip<<endl;
    cout<<"The total bill = $"<<TtlBill<<endl;
    
    //Exit stage right!
    return 0;
}