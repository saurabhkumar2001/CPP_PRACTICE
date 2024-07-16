#include<iostream>
using namespace std;
class shape{
    public:
    double pi = 3.14;
    double perimeter(int r){
        return 2*pi*r;
    }
    int perimeter(int l,int b){
        return 2*(l+b);
    }
    double area(int r){
        return pi*r*r;
    }
    int area(int l,int b){
        return l*b;
    }
};
class circle : public shape{
    int r;
    public:
    circle(){
        cout<<"Enter the radius of the circle: "<<endl;
        cin>>r;
         cout<<"the perimeter of circle is: "<<perimeter(r)<<endl;
         cout<<"the area of circle is: "<<area(r)<<endl;
    }
};
class rectangle : public shape{
    int len,bre;
    public:
    rectangle(){
        cout<<"Enter the len of rectangle: "<<endl;
        cin>>len;
        cout<<"Enter the bre of rectangle: "<<endl;
        cin>>bre;
    cout<<"the area of rectangle is: "<<area(len,bre)<<endl;
    cout<<"the perimeter of rectangle is: "<<perimeter(len,bre)<<endl;
    }
};
int main(){
    rectangle r;
    circle c;
    return 0;

}