#include<iostream>
using namespace std;

class A{
    int x,y,z;
    public:
    A(int i,int j,int k){
        x=i;
        y=j;
        z=k;
    }
    A operator-(){
        return A(-x,-y,-z);
    }
    void show(){
        cout<<"X: "<<x<<"y: "<<y<<"z: "<<z<<endl;
    }
};
int main(){
    A obj(10,-20,30);
    obj.show();
    A negobj = -obj;
    negobj.show();
    return 0; 
}