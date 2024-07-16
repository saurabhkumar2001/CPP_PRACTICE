#include<iostream>
using namespace std;
int main(){
    int len;
    cout<<"Enter the len in meters"<<endl;
    cin>>len;
    float foot = 0.305*len;
    float inches = 39.37*len;
    cout<<"foot: "<<foot<<endl;
    cout<<"inches: "<<inches;
}