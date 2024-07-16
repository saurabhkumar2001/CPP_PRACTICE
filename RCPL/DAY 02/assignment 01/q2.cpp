#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;
    float res = (((x+40)/5)%2)*10;
    cout<<res;
}