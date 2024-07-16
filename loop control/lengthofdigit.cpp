#include<iostream>
using namespace std;
int main(){
    int num,l=0;
    cout<<"enter the number "<<endl;
    cin>>num;
    while(num!=0){
        num=num/10;
        l++;
    }
    cout<<"the length of the number is = " <<l<<endl;
}