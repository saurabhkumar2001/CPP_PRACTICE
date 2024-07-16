#include<iostream>
using namespace std;
class A{
    public:
    int age ;
    void show(){
        cout<<"enter the age :"<<endl;
        cin>>age;
    }
};
class B: virtual public A
{
    public:
    char sex;
    string name;
    void get(){
        cout<<"enter the name :"<<endl;
        cin>>name;
        cout<<"enter the sex: "<<endl;
        cin>>sex;
    }   
};
class c : public B{
    public:
    string study;
    void info(){
        // cout<<"this is multi level inheritance"<<endl;
        cout<<"enter what are you doing: "<<endl;
        cin>>study;
    }
};
class D : public c, virtual public A{
    public:
    void display(){
        // cout<<"this is multiple inheritance"<<endl;
        cout<<"name of the student:"<<name<<endl;
        cout<<"age of the student:"<<age<<endl;
        cout<<"sex of the student:"<<sex<<endl;
        cout<<"study:"<<study<<endl;
    }
};
int main(){
    D d;
    d.get();
    d.show();
    d.info();
    d.display();
    return 0;
}
