#include<iostream>
using namespace std;
class calculator{
    public:
    int add(int a ,int b){
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int div(int a,int b){
        return a/b;
    }
    float add(float a ,float b){
        return a+b;
    }
    float sub(float a,float b){
        return a-b;
    }
    float mul(float a,float b){
        return a*b;
    }
    float div(float a,float b){
        return a/b;
    }
};
int main(){
    calculator c;
    c.add(3,4);
    c.add(3.676f,4.6f);
    cout<<"\nadd(3,4); "<<c.add(3,4);
    cout<<"\nadd(3.6,4.6); "<<c.add(3.6f,4.6f);
}