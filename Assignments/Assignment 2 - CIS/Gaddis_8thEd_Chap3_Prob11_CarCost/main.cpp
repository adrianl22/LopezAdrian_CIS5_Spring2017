/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 6:55 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
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
    float LoanPay,   //Loan Payment
            gas,     //cost of Gas 
            insPay,  //Cost of insurance
            oil,     //Cost of oil
            tires,   //Cost of tires
            mntnce,  //Cost of Maintenance 
            ttlCost; //Total cost of car
    //Input data
    cout<<"Loan payment amount       = $";
    cin>>LoanPay;
    cout<<"Cost of gas for full tank = $";
    cin>>gas;
    cout<<"Cost of insurance         = $";
    cin>>insPay;
    cout<<"Cost of motor oil         = $";
    cin>>oil;
    cout<<"Cost of tires             =";
    cin>>tires;
    cout<<"Cost of maintenance       = $";
    cin>>mntnce;

    ttlCost=gas+insPay+LoanPay+tires+mntnce+oil;
    //Map inputs to outputs or process the data
    cout<<"Total cost for car      = $"<<ttlCost<<endl;
    //Output the transformed data



    //Exit stage!
    return 0;
}
