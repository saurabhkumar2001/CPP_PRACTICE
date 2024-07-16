#include<iostream>
using namespace std;
int main()
{
int x = 5,y=0;
for(int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= y; j++)
    {
        cout<<" ";
    }y++;
    for (int k = 1; k <= x; k++)
    {
        cout<<"*";
    }
    x--;
    cout<<endl;
    
}
}
