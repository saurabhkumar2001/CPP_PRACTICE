#include<iostream>
using namespace std;
int main(){
    int a =11,b=22,c;
    auto fptr = [=,&c](){
        c = a+b;
        cout<<"Lambda Expression- \n ADD= "<<c;
    };
    fptr();
    return 0;
}