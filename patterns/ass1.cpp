#include<iostream>
using namespace std;
main(){
    int num,fact=1;
    cout<<"Enter the number for which we have to find the factorial"<<endl;
    cin>>num;

    for (int i=1; i <= num; i++)
    {   
        fact=fact*i;
    }
        cout<<"the factorial of the " <<num<<" is " <<fact<<endl;
    
}