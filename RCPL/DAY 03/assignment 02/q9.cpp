#include<iostream>
using namespace std;
class clock{
    int h,m,s;
    public:
    void time(){
        cout<<"Enter hours: "<<endl;
        cin>>h;
        cout<<"Enter min: "<<endl;
        cin>>m;
        cout<<"Enter sec: "<<endl;
        cin>>s;
        cout<<"total time in sec is "<<((60*60*h)+(60*m)+(s));
    }

};
int main(){
    clock c;
    c.time();
    return 0;
}