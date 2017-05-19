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
void getAcc(float x);
void findLow(float x,float y,float z,float w,float u);
//Program Execution Begins Here
int main(int argc, char** argv) {
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
   return 0;
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