#include<iostream>
using namespace std;
int main(){
    int a,b,c,total;
    float per;
    cout<<"Enter the marks obtained in the 1st subject"<<endl;
    cout<<"Enter the marks obtained in the 2nd subject"<<endl;
    cout<<"Enter the marks obtained in the 3rd subject"<<endl;
    cin>>a>>b>>c;
    total = a+b+c;
    per = total*100/300;
    cout<<"total marks obtained in the three subject is : "<<total<<endl;
    cout<<"Percentage: "<<per<<endl;

}
