#include<iostream>
using namespace std;
class calculation{
    int num1,num2;
    public:
    calculation(int num1,int num2){
        this->num1 = num1;
        this->num2 = num2;
    }
    void add(){cout<<"\naddition of two number is"<<num1+num2;}
    void sub(){cout<<"\nsubtraction of two number is"<<num1-num2;}
    void mul(){cout<<"\nmultiplication of two number is"<<num1*num2;}
    void div(){cout<<"\ndivision of two number is"<<num1/num2;}
};
int main(){
    int num1,num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the first number: "<<endl;
    cin>>num2;
    calculation c(num1,num2);
    c.add();
    c.sub();
    c.mul();
    c.div();
}   