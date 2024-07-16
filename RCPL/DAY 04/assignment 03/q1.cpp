#include<iostream>
using namespace std;
 
class A{
    int num1 = 12,num2 = 23,num3 = 89;
    public:
    void greatest();
};
inline void A::greatest(){
    if(num1>num2 && num1>num3){
        cout<<num1;
    }
    else if (num2>num1 && num2>num3)
    {
        cout<<num2;
    }else
    {
        cout<<num3;
    }    
}

int main(){
    A ob;
    ob.greatest();
    return 0;
}