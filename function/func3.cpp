// Default arguments concept and the flow is right to left
#include<iostream>
using namespace std;
int calc(int x,int y);
main()
{
    system("color 0B");
    system("cls");
    int num1,num2,result;
    
    cout<<"Enter the number"<<endl;
    cin>>num1>>num2;
    result = calc(9,8); //call by value
    result = calc(9); //call by value
    cout<<"your result of the operation is"<<result<<endl;

}

int calc(int num1,int num2 = 90){ //default argument is set! always rightmost is set first if only one default argument is given other wise compile time error
    char choice = 'y';

    cout<<"Enter the operator!! "<<endl;
    char ch;
    cin>>ch;
    switch(ch)
    {
    case '+':
        return num1+num2;
        break;
    
    case '*':
        return num1*num2;
        break;
    
    case '/':
        return num1/num2;
        break;
    
    case '-':
        return num1-num2;
        break;
    
    default:
    cout<<"Enter a valid operator"<<endl;
        break;
    }

}