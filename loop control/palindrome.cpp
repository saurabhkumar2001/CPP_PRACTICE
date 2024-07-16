#include<iostream>
using namespace std;
main(){
    int num,temp,r;
    int sum = 0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        r = temp%10;
        sum = sum*10+r;
        temp=temp/10;
    }
    if(sum==num){
        cout<<"yes \n the number "<<num<<" is palindrome"<<endl;
    }
    else
        cout<<"No\nthe number "<<num<<" is not palindrome"<<endl;
    
    
}