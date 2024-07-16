#include<iostream>
using namespace std;
class Calculation{
    int num1,num2;
    public:
    void value(){
        cout<<"Enter the num 1 & num 2: "<<endl;
        cin>>num1>>num2;
    }
    void addition(){
        this->num1 = num1;
        this->num2 = num2;
        cout<<num1+num2<<endl;
    }
    void multiplication(){
        this->num1 = num1;
        this->num2 = num2;
        cout<<num1*num2<<endl;
    }
    void subtract(){
        this->num1 = num1;
        this->num2 = num2;
        cout<<num1-num2<<endl;
    }
    void division(){
        this->num1 = num1;
        this->num2 = num2;
        cout<<num1/num2<<endl;
    }

};
int main(){
    Calculation ca;
    ca.value();
    ca.addition();
    ca.subtract();
    ca.multiplication();
    ca.division();
    return 0;
}