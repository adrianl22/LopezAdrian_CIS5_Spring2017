/* 
 * File:   main.cpp
 * Author: Adrian Lopez
 * Created on May 4, 2017, 12:10 PM
 * Purpose:  Menu to assignment 5
 */

//System Libraries Here
#include <iostream>
#include <iomanip> 
#include <cmath>
#include <cstdlib>  //Random num gen
#include <ctime>    //Set random num seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void Prob1(void);
void Prob2(void);
void Prob3(void);
void Prob4(void);
void Prob5(void);
void Prob6(void);
void Prob7(void);
void Prob8(void);
void Prob9(void);
void Prob10(void);
float calRet(float a, float b);
float getLength(void);
float getWidth(void);
float getArea(float, float);
float display(float, float, float);
void getSales(float x);
void findMax(float x,float y,float z,float w);
void getAcc(float x);
void findLow(float x,float y,float z,float w,float u);
float falDist(float n);
float kinE(float, float);
float celsius(float);
int coinToss(int);
float pV(float,float,float);
float fV(float,float,float);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize Variables Here
    int choice;

    //Show menu and loop
    do {
        
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for problem 1 of Gaddis"<<endl;
        cout<<"Type 2 for problem 2 of Gaddis"<<endl;
        cout<<"Type 3 for problem 3 of Gaddis"<<endl;
        cout<<"Type 4 for problem 4 of Gaddis"<<endl;
        cout<<"Type 5 for problem 5 of Gaddis"<<endl;
        cout<<"Type 6 for problem 6 of Gaddis"<<endl;
        cout<<"Type 7 for problem 7 of Gaddis"<<endl;
        cout<<"Type 8 for problem 8 of Gaddis"<<endl;
        cout<<"Type 9 for problem 9 of Gaddis"<<endl;
        cout<<"Type 10 for problem 10 of Gaddis"<<endl<<endl;
        
        //Input choice
        cin>>choice;
        cout<<endl;
        //Place solutions to problems in switch statement
        switch (choice){
            case 1:{
                Prob1();break;}
            case 2:{
                Prob2();break;}
            case 3:{
                Prob3();break;}
            case 4:{
                Prob4();break;}
            case 5:{
                Prob5();break;}
            case 6:{
                Prob6();;break;}
            case 7:{
                Prob7();break;}
            case 8:{
                Prob8();break;}
            case 9:{
                Prob9();break;}
            case 10:{
                Prob10();break;}
            default:{
                cout<<"Exit Program"<<endl;
            }
        }
    }while (choice>=1&& choice<=10);

    //Output Located Here

    //Exit
    return 0;
}
void Prob1(void){
//Program Execution Begins Here
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
}
void Prob2(void){
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
}
void Prob3(void){
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
}
void Prob4(void){
        //Declare all Variables Here
    float   n,//north region
            s,//South region
            e,//East region
            w,//West region
            c;//Central region
    //Input or initialize values Here
    cout<<"What are the number of accidents for the North region?"<<endl;
    cin>>n;
    getAcc(n);
    
    cout<<"What are the number of accidents for the South region?"<<endl;
    cin>>s;
    getAcc(s);
    
    cout<<"What are the number of accidents for the East region?"<<endl;
    cin>>e;
    getAcc(e);
    
    cout<<"What are the number of accidents for the West region?"<<endl;
    cin>>w;
    getAcc(w);
    
    cout<<"What are the number of accidents for the Central region?"<<endl;
    cin>>c;
    getAcc(c);
    cout<<endl;
    //Process/Calculations Here
    cout<<"Region with least accidents = ";
    findLow(n,s,e,w,c);
    //Output Located Here

    //Exit
}
void Prob5(void){
        //Declare all Variables Here
    float    t;//Time of fall
    //Input or initialize values Here
    cout<<"This program determines the falling distance"
            " of an object given is falling time"<<endl;
    cout<<"Enter the falling time to get the falling distance in seconds"<<endl;
    cin>>t;
    falDist(t);
    //Process/Calculations Here

    //Output Located Here

    //Exit
}
void Prob6(void){
        //Declare all Variables Here
    float   kE,//Kinetic Energy
            m,//mass in kilograms
            v;//velocity in meters per second
    //Input or initialize values Here
    cout<<"This program determines an objects Kinetic Energy."<<endl;
    cout<<"Enter the objects mass in kilograms      = ";
    cin>>m;
    cout<<"Enter the velocity in meters per seconds = ";
    cin>>v;
    
    kE=kinE(m,v);
    cout<<endl<<"Kinetic Energy = "<<kE<<" kg*m/s^2"<<endl;
    //Process/Calculations Here

    //Output Located Here

    //Exit
}
void Prob7(void){
        //Declare all Variables Here
    float   f,//Fahrenheit
            c;//Celsius
    //Input or initialize values Here
    cout<<"This Program COnverts Fahrenheit to Celsius"<<endl;
    cout<<"Enter degrees in Fahrenheit to convert"<<endl;
    cin>>f;
    //Process/Calculations Here
    c=celsius(f);
    //Output Located Here
    cout<<fixed<<setprecision(1);
    cout<<f<<"°F = "<<c<<"°C"<<endl;
    //Exit
}
void Prob8(void){
        //Declare all Variables Here
    int n;//number of times coin is flipped
    //Input or initialize values Here
    cout<<"This program simulates a coin toss"<<endl;
    cout<<"Enter the number of times should be tossed"<<endl;
    cin>>n;
    cout<<endl;
    //Process/Calculations Here

    //Output Located Here
    coinToss(n);
    //Exit
}
void Prob9(void){
        //Declare all Variables Here
    float   p,//Present Value
            f,//Future Value
            r,//Annual interest rate
            n;//Number of years
            
    //Input or initialize values Here
    cout<<"This program helps you determine the Present Value need to"
            " achieve a future value of your choosing."<<endl;
    cout<<"Enter the Future Value you wish to have"<<endl;
    cin>>f;
    cout<<"Enter the annual interest rate % (not in decimals)"<<endl;
    cin>>r;
    cout<<"Enter the number of years you are willing to wait"<<endl;
    cin>>n;
    cout<<endl;
    //Process/Calculations Here
    p= pV(f,r,n);
    //Output Located Here
    cout<<fixed<<setprecision(2);
    cout<<"Present Value = $"<<p<<endl;
    //Exit
}
void Prob10(void){
        //Declare all Variables Here
    float   p,//Present Value
            f,//Future Value
            r,//Monthly interest rate
            n;//Number of Months
            
    //Input or initialize values Here
    cout<<"This program helps you determine the Future Value based"
            " on your Present Value."<<endl;
    cout<<"Enter the Present Value you have"<<endl;
    cin>>p;
    cout<<"Enter the monthly interest rate % (not in decimals)"<<endl;
    cin>>r;
    cout<<"Enter the number of months you are willing to wait"<<endl;
    cin>>n;
    cout<<endl;
    //Process/Calculations Here
    r=r/100;
    f= fV(p,r,n);
    //Output Located Here
    cout<<fixed<<setprecision(2);
    cout<<"Future Value = $"<<f<<endl;
    //Exit
}
float calRet(float a, float b){
    float c;//Retail price
    //Calculate Retail price
    c=a+(a*b);
    cout<<fixed<<setprecision(2);
    cout<<"Retail price = "<<c<<endl;
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
void getAcc(float x){
    if (x<0){
        cout<<"C'mon we all know there can't be negative accidents"<<endl;
    exit (0);}
}
void findLow(float x,float y,float z,float w,float u){
    string low1= (x<y&&x<z&&x<w&&x<u)?"North":
                 (y<x&&y<z&&y<w&y<u)?"South":
                 (z<y&&z<x&&z<w&z<u)?"East":
                 (w<y&&w<x&&w<z&w<u)?"West":"Central";
    int low2=    (x<y&&x<z&&x<w&&x<u)?x:
                 (y<x&&y<z&&y<w&y<u)?y:
                 (z<y&&z<x&&z<w&z<u)?z:
                 (w<y&&w<x&&w<z&w<u)?w:u;
    cout<<low1<<" with "<<low2<<" Accidents"<<endl;
}
float falDist(float n){
    float   d,//Distance
            g=9.8f;//Gravity
    d=.5*g*pow(n,2);
    cout<<fixed<<setprecision(2);
    cout<<"Falling Distance = "<<d<<" meters"<<endl;
}
float kinE(float a, float b){
    float c;
    c=.5*a*pow(b,2);
    return c;
}
float celsius(float a){
    float b;
    b=.55555*(a-32);
    return b;
}
int coinToss(int a){
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    int num;
    for (int i=1;i<=a;i++){
        num=rand()%2+1;
        if (num==1)
            cout<<"Toss #"<<i<<" = "<<"Heads"<<endl;
        else 
            cout<<"Toss #"<<i<<" = "<<"Tails"<<endl;
    }
}
float pV(float a,float b,float c){
    float d;
    d=a/pow(1+(b/100),c);
    return d;
}
float fV(float a,float b,float c){
    float d;
    cout<<fixed<<setprecision(2);
    d=a*pow(1.0f+b,c);
    return (d);
}