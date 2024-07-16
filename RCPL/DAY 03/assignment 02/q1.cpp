#include<iostream>
#include<string>
using namespace std;
class A{
    public:
    string name,cy;
    int age , pincode;
    void stud(){
    cout<<"Enter the city of the student"<<endl;
    getline(cin,cy);
    cout<<"Enter the name of the student"<<endl;
    getline(cin,name);
    cout<<"Enter the age of the student"<<endl;
    cin>>age;
    cout<<"Enter the pincode of the student"<<endl;
    cin>>pincode;
    cout<<endl;
    cout<<name<<endl<<age<<endl<<cy<<endl<<pincode;
    }
};
int main(){
    A ob;
    ob.stud();
}