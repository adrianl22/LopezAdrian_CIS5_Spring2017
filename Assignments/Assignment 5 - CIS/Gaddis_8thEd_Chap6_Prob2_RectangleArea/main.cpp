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
float getLength(void);
float getWidth(void);
float getArea(float, float);
float display(float, float, float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   l,//Length
            w,//Width
            a;//area
    //Input or initialize values Here
    l=getLength();
    w=getWidth();
    a=getArea(l,w);
    //Process/Calculations Here

    //Output Located Here
    display(l,w,a);
    //Exit
   return 0;
}
float getLength(){
    float a;
    cout<<"What is the Length?"<<endl;
    cin>>a;
    return a;
}
float getWidth(void){
    float b;
    cout<<"What is the Width?"<<endl;
    cin>>b;
    return b;
}
float getArea(float c, float d){
    float e;
    e=c*d;
    return e;
}
float display(float f, float g, float h){
    cout<<"Length = "<<f<<endl;
    cout<<"Width  = "<<g<<endl;
    cout<<"Area   = "<<h<<endl;
}