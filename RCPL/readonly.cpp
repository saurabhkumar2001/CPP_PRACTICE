#include<iostream>
using namespace std;
int main(){
    int a =11,b=22,c;
    auto fptr = [=](){
        int c = a+b;
        cout<<"Lambda Expression -\n Add="<<c;
    };
    fptr();
    return 0;
}