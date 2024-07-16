#include<iostream>
#include<string>
using namespace std;
class EMPLOYEE{
    int EMPCODE;
    string EMPNAME;
    public:
    void getdata(){
        cout<<"Enter the code of the emp: "<<endl;
        cin>>EMPCODE;
        cout<<"Enter the name of the emp: "<<endl;
        cin>>EMPNAME;
    }
    void display(){
        cout<<" the code of the emp: "<<EMPCODE<<endl;
        cout<<" the name of the emp: "<<EMPNAME<<endl; 
        
    }
     
};
int main(){
    EMPLOYEE ob[6];
    for(int i = 0;i<6;i++){
        ob[i].getdata();
    }
    for(int i = 0;i<6;i++){
        ob[i].display();
    }
}