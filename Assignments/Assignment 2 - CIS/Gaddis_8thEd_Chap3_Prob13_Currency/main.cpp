/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 9th, 2017, 9:19 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>


using namespace std; //Name-space under which system libraries exist

//User Libraries


//Global Constants
const float YNPDOLL=115.20f,//yen per US dollars
            EUPDOLL=0.94f;  //euro per US dollars

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Initialize variables
    float op1; //Amount money user has
    int Ans;   //Whether user wants Yen or Euro

    //Input data
    cout<<fixed<<setprecision(2);
    cout<<"This Program converts from U.S dollars to either"
            " Japanese Yen or Euros"<<endl;
    cout<<"how many dollars do you have?"<<endl;
    cout<<"$";
    cin>>op1;
    cout<<"Do you want Yen [1] or Euros [2]? ";
    cin>>Ans;
    if (Ans==1)
    {   cout<<"You have "<<op1*YNPDOLL<<" Yen";}
    else
    {   cout<<"You have "<<op1*EUPDOLL<<" Euros"<<endl;}

    //Map inputs to outputs or process the data

    //Output the transformed data


    //Exit stage!
    return 0;
}
