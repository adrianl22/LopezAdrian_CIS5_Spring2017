/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 1, 2017, 8:12 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input - output Library
#include <iomanip> 
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float calRet(float, float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   w,//whole sale
            m;//Markup percentage
    //Input or initialize values Here
    cout<<"This program helps determine an items retail price"<<endl;
    cout<<"Enter the items wholesale cost"<<endl;
    cin>>w;
    cout<<"Enter the items markup percentage (not in decimals)"<<endl;
    cin>>m;
    cout<<endl;
    //Process/Calculations Here
    m=m/100.0f;//set Percentage to decimals
    //Output Located Here
    calRet(w,m);
    //Exit
   return 0;
}
float calRet(float a, float b){
    float c;//Retail price
    //Calculate Retail price
    c=a+(a*b);
    cout<<fixed<<setprecision(2);
    cout<<"Retail price = "<<c<<endl;
}
