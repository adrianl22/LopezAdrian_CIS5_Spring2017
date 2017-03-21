/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 28, 2017, 6:30 PM
 * Purpose:  Total Purchase
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
    float Item1  = 15.95f,
          Item2  = 24.95f,
          Item3  = 6.95f,
          Item4  = 12.95f,
          Item5  = 3.95f,
          SlsTax = .07f,
          SubTtl, TtlPrch;
    
    //Initialize variables

    
    //Map inputs to outputs or process the data
    SubTtl=Item1+Item2+Item3+Item4+Item5;
    
    TtlPrch=SubTtl+(SubTtl*SlsTax);
    //Output the transformed data
    cout<<"Item 1         = $"<<Item1<<endl;
    cout<<"Item 2         = $"<<Item2<<endl;
    cout<<"Item 3         = $"<<Item3<<endl;
    cout<<"Item 4         = $"<<Item4<<endl;
    cout<<"Item 5         = $"<<Item5<<endl;
    cout<<"Sales Tax      = "<<SlsTax*100<<"%"<<endl;
    cout<<"Subtotal       = $"<<SubTtl<<endl;
    cout<<"Total Purchase = $"<<TtlPrch<<endl;
    
    //Exit stage right!
    return 0;
}