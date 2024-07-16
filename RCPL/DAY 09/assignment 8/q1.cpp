#include<iostream>
using namespace std;
class shape{
    public:
    virtual void calculateArea() = 0;
    virtual void displayshape() = 0;
};
class circle: public shape{
    public:
    int r;
    double pi = 3.14,area;
    void calculateArea(){
        cout<<"enter the radius:"<<endl;
        cin>>r;
        area = 3.14*r*r;
    }
    void displayshape(){
        cout<<"area of the circle is: "<<area;
    }
};
class square: public shape{
    public:
    int s,area;
    void calculateArea(){
        cout<<"enter the side of the square: "<<endl;
        cin>>s;
        area = s*s;

    }
    void displayshape(){
        cout<<"area of the circle is: "<<area;
    }

};
class triangle: public shape{
    public:
    int b,h;
    float area;
    void calculateArea(){
        cout<<"enter the base of the triangle: "<<endl;
        cin>>b;
        cout<<"enter the height of the triangle: "<<endl;
        cin>>h;
         area  = 0.5*b*h;
    }
    void displayshape(){
        cout<<"area of the circle is: "<<area;
    }
};
int main(){
    char ch;
    cout<<"enter the char "<<endl;
    cin>>ch;
    shape *ptr;
    if (ch == 'c' || ch=='C')
    {
    ptr = new circle();
         
    }
    else if(ch == 't' || ch =='T')
    {
    ptr = new triangle();
          
    }
    else
    {
    ptr = new square();
    }
    ptr->calculateArea(); 
    ptr->displayshape(); 


    delete ptr;

    return 0;
}