#include<iostream>
using namespace std;
class A{

public:
//inside the class
    void show(){
        cout<<"hello"<<endl;
    }
    void put();
};
//outside the class
void A :: put(){
    cout<<"bie";
}
int main(){
    A ob;
    ob.show();
    ob.put();
}
