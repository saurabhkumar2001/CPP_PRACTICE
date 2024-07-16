#include<iostream>
using namespace std;
class convertor{
    public:
    void cmtom(int cm){
       int m=0;
        m = cm/100; 
    cout<<"cm into m is equals to : "<<m<<endl;
    }
    void cmtom(double cm){
       double m=0;
        m = cm/100; 
    cout<<"cm into m is equals to : "<<m<<endl;
    }
    void mtocm(int m){
        int cm = 0;
        cm = m*100;
        cout<<"m into cm is equals to :"<<cm<<endl;
    }
    void mtocm(double m){
        double cm = 0;
        cm = m*100;
        cout<<"m into cm is equals to :"<<cm<<endl;
    }
};
int main(){
    convertor c;
    c.cmtom(100.566);
    c.mtocm(100.566);
}