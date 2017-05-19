/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on April 1, 2017, 8:12 PM
 * Purpose:
 */

//System Libraries Here
#include <iostream> //input - output Library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variable

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void getSales(float x);
void findMax(float x,float y,float z,float w);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float salesNE,salesSE,salesNW,salesSW,a;
    //Input or initialize values Here
    cout<<"What are the quarterly sales for the NE division?"<<endl;
    cin>>salesNE;
    getSales(salesNE);
    
    cout<<"What are the quarterly sales for the NW division?"<<endl;
    cin>>salesNW;
    getSales(salesNW);
    
    cout<<"What are the quarterly sales for the SW division?"<<endl;
    cin>>salesSW;
    getSales(salesSW);
    
    cout<<"What are the quarterly sales for the SE division?"<<endl;
    cin>>salesSE;
    getSales(salesSE);
    cout<<endl;
    //Process/Calculations Here
    cout<<"Highest Grossing Division = ";
    findMax(salesNE,salesNW,salesSW,salesSE);
    //Output Located Here

    //Exit
   return 0;
}
void getSales(float x){
    if (x<0)
        cout<<"Fire everyone in that division"<<endl;
}
void findMax(float x,float y,float z,float w){
    string max1= (x>y&&x>z&&x>w)?"Northeast":
                 (y>x&&y>z&&y>w)?"Northwest":
                 (z>y&&z>x&&z>w)?"Southwest":"Southeast";
    int max2= (x>y&&x>z&&x>w)?x:
              (y>x&&y>z&&y>w)?y:
              (z>y&&z>x&&z>w)?z:w;
    cout<<max1<<" with "<<max2<<endl;
}