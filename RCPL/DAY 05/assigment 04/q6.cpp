#include<iostream>
#include<string>
using namespace std;
class emp{
    static int count;
    double basicsal;int empcode;
    string empname;
    public:
     emp(){
        cout<<"enter the empcode of emp"<<endl;
        cin>>empcode;
        cout<<"enter the name of emp"<<endl;
        cin>>empname;
        cout<<"enter the basic sal of emp"<<endl;
        cin>>basicsal;
        count++;
    }
    void display(){
        cout<<"Empcode: "<<empcode<<endl;
        cout<<"empname: "<<empname<<endl;
        cout<<"basicsal: "<<basicsal<<endl;
    }
    static int getcount(){
        return count;
    }
};
int emp::count=0;
int main(){
    emp e1,e2,e3;
    cout<<"Emp details: \n";
    e1.display();
    e2.display();
    e3.display();  
    cout<<"total number of created object is : "<<emp::getcount();
    return 0; 
}