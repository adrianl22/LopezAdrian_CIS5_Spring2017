/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 15, 2017, 7:34 PM
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
    int qrt=25, nck=5, dime=10, pen=1,
            numQrt, numNck, numDme, numPen;
    //Input data
    cout<<"Let's Play a game."<<endl;
    cout<<"Try and count how many Pennies, Nickels, Dimes,";
    cout<<" and Quarters can successfully make up one dollar."<<endl;
    cout<<"Enter the number of Pennies  = ";
    cin>>numPen;
    cout<<"Enter the number of Nickels  = ";
    cin>>numNck;
    cout<<"Enter the number of Dimes    = ";
    cin>>numDme;
    cout<<"Enter the number of Quarters = ";
    cin>>numQrt;
    
    //Map inputs to outputs or process the data
    if (numQrt*qrt+numNck*nck+numDme*dime+numPen*pen==100)
    {   cout<<"Congratulations! You win!"
                " You successfully made one dollar. :D"<<endl;}
    else
    {    cout<<"Sorry but the amount entered is more than"
            " or less than one dollar. Try again next time. :/"<<endl;}
    //Exit stage!
    return 0;
}
