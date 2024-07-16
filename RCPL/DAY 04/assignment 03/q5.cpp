#include<iostream>
using namespace std;

class A{
    int hr , min , sec;
    public:
     A(){
        hr = 0;
        min = 0;
        sec = 0;
    }
    A(int h,int m,int s){
        hr = h;
        min = m;
        sec = s;
    }
    void addTime(A t1, A t2){
        sec = t1.sec + t2.sec;
        min = sec/60;
        sec = sec%60;

        min = min+t1.min + t2.min;
        hr = min/60;
        min = min%60;

        hr = hr + t1.hr + t2.hr;
    }
    void getData(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

int main(){
    A t1(2,35,56);
    A t2(2,35,56);
    A t3;
    t3.addTime(t1,t2);
    t1.getData();
    t2.getData();
    t3.getData();
    return 0;
}