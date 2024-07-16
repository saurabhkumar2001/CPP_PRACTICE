#include<iostream>
using namespace std;
class shape{
    public:
    double a ,b;
    void getdata(){  //non virtual function
        cout<<"Enter the dim1:"<<endl;
        cin>>a;
        cout<<"Enter the dim2:"<<endl;
        cin>>b;
    }
    virtual void display_area() = 0; //pure virtual function because it is init with 0
};
class triangle : virtual public shape{
    public:
    void display_area(){
        double area = 0.5*a*b;
        cout<<"the area of the triangle is: "<<area<<endl;
    }
};
class rectangle :virtual public shape{
    public:
    void display_area(){
        double area = a*b;
        cout<<"the area of the rectangle is: "<<area<<endl;
    }

};
int main(){
    //access overidden function using pointer
  shape *ptr;
  char ch;
  cout<<"Enter the choice :"<<endl;
  cin>>ch;
  if(ch=='R' || ch=='r'){
    cout<<"enter the dimesion of the rectangle:"<<endl;
    rectangle r;
    ptr = &r;
  }else
  {
    cout<<"enter the dimension of the traingle: "<<endl;
    triangle t;
    ptr = &t;
  }
  ptr->getdata();
  ptr->display_area();
  return 0;
}
