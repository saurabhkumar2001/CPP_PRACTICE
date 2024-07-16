//switch:-
#include<iostream>
using namespace std;
int main(){
    int choice,number1,number2,opr;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    cout<<"enter 1 for addition"<<endl;
    cout<<"enter 2 for subtraction"<<endl;
    cout<<"enter 3 for multi"<<endl;
    cout<<"enter 4 for divide"<<endl;
    cout<<"enter 5 for even odd"<<endl;
    cout<<"enter 6 for square"<<endl;
    cout<<"enter 7 for cube"<<endl;
    cout<<"Enter 1st number"<<endl;
    cin>>number1;
    cout<<"Enter 2nd number"<<endl;
    cin>>number2;
    switch (choice)
    {
    case 1:
        opr = number1+number2;
        cout<<"the addition is "<<opr<<endl;
        break;
    case 2:
        opr = number1-number2;
        cout<<"the sub is "<<opr<<endl;
        break;
    case 3:
        opr = number1*number2;
        cout<<"the mul is "<<opr<<endl;
        break;
    case 4:
        opr = number1/number2;
        cout<<"the div is "<<opr<<endl;
        break;
    case 5:
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    if(number%2==0){
    cout<<"the number is even"<<endl;
        break;
    case 6:
        opr = number1*number1;
        cout<<"the square is "<<opr<<endl;
        break;
    case 7:
        opr = number1*number1*number1;
        cout<<"the cube is "<<opr<<endl;
        break;
    
    default:
        break;
    }
}
return 0;
}