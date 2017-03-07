/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 7th, 2017, 12:05 PM
 * Purpose: Calculate # of Candy Bars
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char sex;                 //M or F
    unsigned short   ht,      //Height (in))
                     wt,      //Weight (lbs)
                    age;      //Age (yrs)
    unsigned char cdyCals=230;//Calories of the candy
    float   bmr;              //Basic Metabolic Rate (calories)
    int     nCdyBrs;          //Number of candy bars
    //Input or initialize values Here
    cout<<"This Program Calculates the number of ";
    cout<<"candy bars allowed per day based upon your BMR"<<endl;
    cout<<"Type in your sex (M/F), WT(lbs), Ht(in), Age(yrs)"<<endl;
    cout<<"Inputs are integer based"<<endl;
    cin>>sex>>wt>>ht>>age;
    //Process/Calculations Here
    bmr=(sex=='M')?
         66 + 6.3f*wt + 12.9f*ht - 6.8f*age:
        655 + 4.3f*wt +  4.7f*ht - 4.7f*age;
    nCdyBrs=static_cast<int>(bmr/cdyCals);
    //Output Located Here
    cout<<"The number of candy bars you can eat = "<<nCdyBrs<<endl;

    //Exit
    return 0;
}

