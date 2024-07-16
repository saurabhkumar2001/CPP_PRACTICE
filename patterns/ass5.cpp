#include<iostream>
using namespace std;
int main()
{int x=4,y=1;
for (int i = 1; i <= 5; i++)
{
    for(int j = 1; j <= x; j++)
    {
        cout<<" ";
    }x--;
    for(int k = 1; k <= y; k++)
    {
        cout<<"*";
    }
    y+=2;
    cout<<endl;
    
}
}
