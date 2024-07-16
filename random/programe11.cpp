#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter the choice"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    int number;
    cout<<"Enter the number: "<<endl;
    cin>>number;
    if(number%2==0){
    cout<<"the number is even"<<endl;
    }
    else
    {
        cout<<"the number is odd"<<endl;
    }
    
    break;
    case 2:
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number; 
    if(number>0){
        cout<<"the number is positive"<<endl;
    }
    else
    {
        cout<<"the number is negative"<<endl;
    }
    
    
    default:
    break;
    }
}