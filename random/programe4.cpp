//area.cpp
#include<iostream>
using namespace std;
int main(){
    int L,B,AREA,per;
    cout<<"Enter the length: "<<endl<<"Enter the breadth: "<<endl;
    cin>>L>>B;
    cout<<"Length is = "<<L<<endl<<"Breadth is = "<<B<<endl;
    AREA = L*B;
    per = 2*(L+B);
    cout<<"AREA is = "<<AREA<<endl;
    cout<<"PERIMETER  is = "<<per<<endl;
}