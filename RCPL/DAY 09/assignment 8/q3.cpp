#include<iostream>
using namespace std;

class animal{
    public:
    virtual void makesound()= 0;
    virtual void move()= 0;
};
class lion:public animal{
    void makesound() override{
        cout<<"sound: ROAR..."<<endl;
    }
    void move() override{
        cout<<"movement: running..."<<endl;
    }
};
class fish:public animal{
     void makesound() override{
        cout<<"sound: glug..glug.."<<endl;
    }
     void move() override{
        cout<<"movement: swiming..."<<endl;
    }
};
class bird:public animal{
     void makesound() override{
        cout<<"sound: chrip..chrip..."<<endl;
    }
     void move() override{
        cout<<"movement: flying..."<<endl;
    }
};

int main(){
    char ch;
    cout<<"\nEnter b for the bird , l for the lion , f for the fish "<<endl;
    cin>>ch;
    animal* anm;
    if(ch=='b'){
        bird ob;
        anm = &ob;
    }
    else if (ch == 'l')
    {
        lion ob1;
        anm = &ob1;
    }
    else if (ch == 'f')
    {
        fish f;
        anm = &f;
    }
    else
    {
        cout<<"Enter a valid choice ! "<<endl;
    }
    anm->makesound();
    anm->move();
}
