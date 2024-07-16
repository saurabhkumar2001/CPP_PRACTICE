#include<iostream>
using namespace std;

class A
{

public:
  int x =10;

};

int main(){
    A obj1,obj2,obj3;
    obj1.x = 100;
    cout<<obj1.x<<endl;
    
    obj2.x = 200;
    cout<<obj2.x<<endl;
    
    obj3.x = 300;
    cout<<obj3.x<<endl;

}

