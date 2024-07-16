#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the any character: ";
    cin>>ch;
    int ascii =(int)ch;
    if(ascii>47 && ascii<58)
    {
        cout<<"your character "<<ch<<" is a number"<<endl;
    }
    else if(ascii>96 && ascii<123)
    {
        cout<<"your character "<<ch<<" is a lowercase"<<endl;
    }
    else if(ascii>64 && ascii<91)
    {
        cout<<"your character "<<ch<<" is a uppercase"<<endl;
    }
    else
    {
        cout<<"your character "<<ch<<" is a symbol"<<endl;
    }
    return 0;
}
