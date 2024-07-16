#include<iostream>
#include<string>
using namespace std;
class mobile{
    int price;
    string color,brand;
    public:
    mobile(){
        cout<<"Enter the brand of the mobile"<<endl;
        cin>>brand;
        cout<<"Enter the color of the mobile"<<endl;
        cin>>color;
        cout<<"Enter the price of the mobile"<<endl;
        cin>>price;
    }
    void show(){
        cout<<"the brand of the mobile: "<<brand<<endl;
        cout<<"the color of the mobile: "<<color<<endl;
        cout<<"the price of the mobile: "<<price<<"\n"<<endl;
         
    }
    int getprice(){
        return price;
    }
};
int main(){
    mobile m[5];
    int count=0;
    cout<<"\nmobile with price b/w 1,000 to 10,000 : "<<endl;
    for(int i = 0;i<5;i++){
       if (m[i].getprice()>1000 && m[i].getprice()<10000)
       {
        m[i].show();
       }
       if(m[i].getprice()>5000){
       count++;
       }

       }
       
    cout<<"total phone whose price is greater then 5000 is: "<<count;
    return 0;
    }
