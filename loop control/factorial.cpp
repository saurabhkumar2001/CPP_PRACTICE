#include<iostream>
using namespace std;
main(){
    int fact=1,num;
    cout<<"Enter the number for finding the factorial"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of the num "<<num<<" is "<<fact<<endl;
    
}