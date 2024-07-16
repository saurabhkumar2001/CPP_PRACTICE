//agar value hume uthana pde keyboard se but vo class k kisi aur scope m use krna ho toh hume this keyword k use krna hoga jisse saare scope m vo value transfer ho jaye  

#include<iostream>
using namespace std;
class Area{
    int len,bre;
    public:
    void setdim(int len,int bre){
       this->len = len;         
       this->bre = bre;
    }
    void getarea(){
        cout<<len*bre<<endl;
    }
};
int main(){
    Area ob;
    ob.setdim(5,6);
    ob.getarea();
}