#include<iostream>
using namespace std;
int main()
{int x=4,y=9;
for (int i = 1; i <= 5; i++)
{
    for(int j = 0; j <= i; j++)
    {
        cout<<" ";
    };
    for(int k = 1; k <= y; k++)
    {
        cout<<"*";
    }
    y-=2;
    cout<<endl;
    
}
}
