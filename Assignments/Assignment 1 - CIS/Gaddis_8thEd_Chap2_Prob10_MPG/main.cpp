/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on February 28, 2017, 6:50 PM
 * Purpose:  Solving for MPG
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
    float GasTank=15,       //AMount of Gasoline tank holds
          Dstance=375,      //Distance car can travel w/o refueling
          MPG;              //Miles Per Gallon
    
    //Initialize variables
    MPG=Dstance/GasTank;
    
    //Map inputs to outputs or process the data

    
    
    //Output the transformed data
    cout<<"Size of Tank "
            "                        = "<<GasTank<<" Gallons"<<endl;
    cout<<"Distance Of Travel "
          "without refueling = "<<Dstance<<" Miles"<<endl;
    cout<<"Miles Per Gallon "
            "                    = "<<MPG<<" Mpg"<<endl;
    
    //Exit stage right!
    return 0;
}