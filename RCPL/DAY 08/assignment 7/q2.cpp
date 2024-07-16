#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(int i): x(i){}
    A operator--(){
        return A(--x);
    }
    void show(){
        cout<<"pre decrement : \n"<<x<<endl;
    }
};
int main(){
    A obj(20);
    obj.show();
    A negobj = --obj;
    negobj.show();
    return 0;
}