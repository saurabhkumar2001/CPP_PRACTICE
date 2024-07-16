#include<iostream>
using namespace std;

class complex{
    int real , img;
    public:
    void getcomplexnumber(){
        cout<<"Enter the real part of complex number: "<<endl;
        cin>>real;
        cout<<"Enter the img part of complex number: "<<endl;
        cin>>img;
    }

    void getData()
    {
        cout<<real<<"  "<<"i"<<img<<endl;
    }
    friend complex show(complex t1,complex t2);
};

  complex show(complex t1,complex t2)
  {
    complex c;
    c.real = t1.real + t2.real;
    c.img = t1.img + t2.img;
    return c;
  }  

int main(){
    complex ob1,ob2,ob3;
    ob1.getcomplexnumber();
    ob2.getcomplexnumber();
    ob3 = show(ob1,ob2);
    ob3.getData();
}