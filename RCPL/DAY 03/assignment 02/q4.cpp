#include<iostream>
using namespace std;
class Area{
        int pi = 3.14;
        public:
        void areaC(){
            int r;
            cout<<"Enter the radius: "<<endl;
            cin>>r;
            cout<<pi*r*r<<endl;
        }

};
int main(){
    Area a;
    a.areaC();
    return 0;
}
