#include<iostream>
using namespace std;
class Emp{
    int empcode,basicsal;
    public:
    void emp(){
        cout<<"enter the empcode"<<endl;
        cin>>empcode;
        cout<<"enter the basicsal"<<endl;
        cin>>basicsal;
    }
    void netsal(){
        double da,hra,ta,incomeTax,netsalary;
        da = (17.4*basicsal)/100;
        hra = (10*basicsal)/100;
        ta = 500;
        if (basicsal>50000)
        {
            incomeTax = (5*basicsal)/100;
        }else
        {
            incomeTax = 0;
        }
        netsalary = (basicsal + da + hra + ta)-incomeTax;
        
        cout<<"your net sal is : "<<netsalary;
    }
};
int main(){
    Emp e;
    e.emp();
    e.netsal();
}