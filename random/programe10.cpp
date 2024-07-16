#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    if(choice == 1){
    int L,B,AREA,per;
    cout<<"Enter the length: "<<endl<<"Enter the breadth: "<<endl;
    cin>>L>>B;
    cout<<"Length is = "<<L<<endl<<"Breadth is = "<<B<<endl;
    AREA = L*B;
    per = 2*(L+B);
    cout<<"AREA is = "<<AREA<<endl;
    cout<<"PERIMETER  is = "<<per<<endl;
    }else{
        int radius,area;
        cout<<"Enter the radius: "<<endl;
        cin>>radius;
        area = 3.14*radius*radius;
        cout<<"the area of the circle is "<<area<<endl;

    }

    return 0;
}