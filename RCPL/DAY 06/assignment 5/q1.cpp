#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    void getinfo(){
        cout<<"Enter the name and age of the person: "<<endl;
        cin>>name>>age;
    }

};
class student:public person{
     string studentid;
     public:
     getid(){
        cout<<"enter the studentid "<<endl;
        cin>>studentid;
     }
     display(){
        cout<<"the name of the student: "<<name<<endl;
        cout<<"the name of the student: "<<age<<endl;
        cout<<"the name of the student: "<<studentid<<endl;
     } 
};
int main(){
    student s;
    s.getinfo();
    s.getid();
    s.display();
}