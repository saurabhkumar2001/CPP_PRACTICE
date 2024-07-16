//function with argument and return type
//so in this we learn call by value or call by data
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
    result = calc(num1,num2);
    cout<<"your result of the operation is"<<result<<endl;

}

int calc(int num1,int num2){
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