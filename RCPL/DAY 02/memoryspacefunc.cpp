#include<iostream>
using namespace std;
class A{
    public:
        int x,y;
    int func(){
        cout<<"Enter the two number : "<<endl;
        cin>>x>>y;
        cout<<x<<endl<<y<<endl;

    }
};

int main(){
    A obj,ob;
    obj.func();
    cout<<ob.x;
}