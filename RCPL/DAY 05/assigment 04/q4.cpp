#include<iostream>
#include<string>
using namespace std;
class mobile{
    int height,price,width;
    string color,brand;
    public:
    mobile(){
        cout<<"Enter the brand of the mobile"<<endl;
        cin>>brand;
        cout<<"Enter the height of the mobile"<<endl;
        cin>>height;
        cout<<"Enter the width of the mobile"<<endl;
        cin>>width;
        cout<<"Enter the color of the mobile"<<endl;
        cin>>color;
        cout<<"Enter the price of the mobile"<<endl;
        cin>>price;
    }
    void show(){
        cout<<"the brand of the mobile: "<<brand<<endl;
        cout<<"the height of the mobile: "<<height<<endl;
        cout<<"the width of the mobile: "<<width<<endl;
        cout<<"the color of the mobile: "<<color<<endl;
        cout<<"the price of the mobile: "<<price<<endl;
    }
};
int main(){
    mobile m;
    m.show();
}