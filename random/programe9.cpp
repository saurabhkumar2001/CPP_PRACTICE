#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,total;
    float per;
    cout<<"Enter the marks obtained in the 1st subject"<<endl;
    cin>>a;
    cout<<"Enter the marks obtained in the 2nd subject"<<endl;
    cin>>b;
    cout<<"Enter the marks obtained in the 3rd subject"<<endl;
    cin>>c;
    cout<<"Enter the marks obtained in the 4th subject"<<endl;
    cin>>d;
    cout<<"Enter the marks obtained in the 5th subject"<<endl;
    cin>>e;
    total = a+b+c+d+e;
    per = total*100/500;
    cout<<"total number obtained by the student is "<<total<<endl;
    cout<<"percetnage is = "<<per<<endl;
    if (per >= 60){
        cout<<"first division!!"<<endl;
    } 
    else if (per >= 45 && per < 59){
        cout<<"secound division!!"<<endl;
    } 
    else if (per >= 33 && per < 45){
        cout<<"Third division!!"<<endl;
    } 
    else if (per < 33){
        cout<<"Fail!!"<<endl;
    } 
return 0;
}