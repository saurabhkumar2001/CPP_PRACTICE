//greatest of three:-
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three number"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"A is greatest number and the number is = "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"B is greatest number and the number is = "<<b<<endl;
    }
    else{
        cout<<"C is greatest number and the number is = "<<c<<endl;

    }
    return 0;
}