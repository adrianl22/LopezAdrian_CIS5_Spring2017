/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 11, 2017, 10:20 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void filAray (int [],int);
void prntAry (int [],int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void smllVal(int [],int,int);
void mrkSort(int a[], int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables Here
    const int SIZE=100;
    int array[SIZE]={};
            
    //Input data
    filAray(array,SIZE);
    prntAry(array,SIZE,10);
    mrkSort(array,SIZE);
    //Process/Calculations Here
    
    //Output Located Here
    prntAry(array,SIZE,10);
    //Exit
    return 0;
}
void filAray (int a[],int n){
    for (int indx=0;indx<n;indx++){
            a[indx]=rand()%90+10;}//Fill with a 2 digit number
}
void prntAry (int a[],int n,int perLine){
    cout<<endl;
     for (int indx=0;indx<n;indx++){
         cout<<a[indx]<<" ";
         if (indx%perLine==(perLine-1))cout<<endl;
     }
    cout<<endl;
}
void mrkSort(int a[], int n){
    for (int pos=0; pos<n-1;pos++){
        for (int indx2=pos+1;indx2<n;indx2++){
            if (a[pos]>a[indx2]){
                    int temp;
                    temp=a[pos];
                    a[pos]=a[indx2];
                    a[indx2]=temp;
            }
        }
    }
}