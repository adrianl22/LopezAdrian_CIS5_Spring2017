/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on March 14, 2017, 6:20 PM
 * Purpose:  Mixing primary colors
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
    char color1, color2;//Primary colors chosen (Red, Blue, or yellow)

    //Input data
    cout<<"This program gives the color made by mixing"<<endl;
    cout<<"two of the three primary colors [B]lue, [R]ed and [Y]ellow."<<endl;
    cout<<"This program is case sensitive."<<endl;
    cout<<"Choose the first color  ";
    cin>>color1;
    cout<<"Choose the second color ";
    cin>>color2;

    //Map inputs to outputs or process the data
 
    //Output the transformed data
    //Determine which color is made
    if (color1=='B')        
    {{   if (color2=='R')  //If blue and red
             cout<<"Mixing Blue and Red makes Purple.";}
    {    if (color2=='Y')  //If blue and yellow
             cout<<"Mixing Blue and Yellow makes Green.";}
    {    if (color2=='B')  //If blue twice?
             cout<<"Gee I wonder what Blue and Blue make...Blue."<<endl;}}
    else if (color1=='R')   
    {{   if (color2=='Y')  //If red and yellow
             cout<<"Mixing Red and Yellow makes Orange.";}
    {    if (color2=='B')  //If red and blue
             cout<<"Mixing Red and Blue makes Purple.";}
    {    if (color2=='R')   //If red twice?
             cout<<"Gee I wonder what Red and Red make...Red."<<endl;}}
    else if (color1=='Y')
    {{   if (color2=='B')  //If yellow and blue
             cout<<"Mixing Yellow and Blue makes Green.";}
    {    if (color2=='R')  //If yellow and red
             cout<<"Mixing Yellow and Red makes Orange.";}
    {    if (color2=='Y')   //If yellow twice?
             cout<<"Gee I wonder what Yellow and Yellow make...Yellow."<<endl;}}
    else if (color1!='B','Y','R')//If color1 is anything but B,R,Y
    {        cout<<"Invalid color."<<endl;}
    else if (color2!='B','Y','R')//If color2 is anything but B,R,Y
    {        cout<<"invalid color."<<endl;}


    //Exit stage!
    return 0;
}
