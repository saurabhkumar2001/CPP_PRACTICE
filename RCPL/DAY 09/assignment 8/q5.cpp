#include<iostream>
using namespace std;

class vehicle{
    protected:
    int vid;
    bool rented;
    vehicle(int v,bool r){
        vid = v;
        rented = r;
    }
    public:
    virtual void rent()=0;
    virtual void return_vehicle()=0;
};
class bike:public vehicle{
    public:
    bike(int v,bool r) : vehicle(v,r){}
    void rent()override{
        if (rented!=true)
        {
            rented = true;
            cout<<"vehicle with vid"<<vid<<" is for rent !"<<endl;
        }
        else
        {
            cout<<"vehicle with vid"<<vid<<" is already rented!"<<endl;
        }
        
    }
    void return_vehicle() override{
            rented = false;
    }
};
class car:public vehicle{
  public:
  car(int v,bool r):vehicle(v,r){}
    void rent()override{
        if (rented!=true)
        {
            rented = true;
            cout<<"vehicle with vid"<<vid<<" is for rent !"<<endl;
        }
        else
        {
            cout<<"vehicle with vid"<<vid<<" is already rented!"<<endl;
        }
        
    }
    void return_vehicle() override{
            rented = false;
    }
};
int main(){
    char ch;
    cout<<"want a bike or car: "<<endl;
    cin>>ch;
    vehicle* ptr[5];//array of pointer to vehicle objects
    ptr[0] = new bike(101,false);
    ptr[1] = new car(345,false);
    ptr[2] = new bike(131,false);
    ptr[3] = new car(105,true);
    ptr[4] = new bike(191,true);
    if (ch=='b')
    {
        ptr[0]->rent();
        ptr[2]->rent();
        ptr[4]->rent();
    }else if(ch=='c'){
        ptr[1]->rent();
        ptr[3]->rent();
    
        
    }
    else
    {
        cout<<"enter a valid choice. "<<endl;
    }    
    return 0;

}
    