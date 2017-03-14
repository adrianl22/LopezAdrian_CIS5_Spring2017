/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 14, 2017 11:39 PM
 * Purpose:  Time calculator/converter
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int MINUTE=60;     //How many second in a minute
const int HOUR=60*MINUTE;//How many seconds in an hour
const int DAY=24*HOUR;   //How many seconds in a day
const int WEEK=7*DAY;    //How many seconds in a week
const int YEAR=52*WEEK;  //How many seconds in a year


//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nSec;//Number of second to convert
    int nYrs, nMnths, nWks, nDays,nHrs, nMin;
    
    //Input or initialize values Here
    cout<<"This program comnverts seconds to "
            "Years/Months/Weeks/Days/Hours/Minutes"<<endl;
    cout<<"Input the number of seconds for the conversion/equivalence"<<endl;
    cin>>nSec;
    
    //Process/Calculations Here
    nYrs=nSec/YEAR;             //number of years
    cout<<nYrs<<" Years (";
    nSec-=nYrs*YEAR;            //Subtract the yearly seconds from remaining
   
    nWks=nSec/WEEK;             //number of weeks
    cout<<nWks<<" Weeks or ";        
    nMnths=nWks*0.23f;          //Convert number of weeks to months
    cout<<nMnths<<" Months) ";
    nSec-=nWks*WEEK;            //Subtract the weekly second from remainder
   
    nDays=nSec/DAY;             //number of days
    cout<<nDays<<" Days ";
    nSec-=nDays*DAY;            //subtract daily seconds from remaining
    
    nHrs=nSec/HOUR;             //number of hours
    cout<<nHrs<<" Hours ";
    nSec-=nHrs*HOUR;            //Subtract hourly seconds from remaining 
   
    nMin=nSec/MINUTE;           //number of minutes
    cout<<nMin<<" Minutes ";
   
    nSec-=nMin*MINUTE;          //remaining number of second
    cout<<nSec<<" Seconds";
    //Output Located Here

    //Exit
    return 0;
}

