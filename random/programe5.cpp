//prt.cpp
#include<iostream>
using namespace std;
int main(){
    int p,t;
    float r,si;
    cout<<"Enter the principle amount "<<endl;
    cin>>p;
    cout<<"Enter the time "<<endl;
    cin>>t;
    cout<<"Enter the rate of interest "<<endl;
    cin>>r;
    si = p*r*t/100;
    cout<<"the  simple interest is "<<si<<endl;

    return 0;
}