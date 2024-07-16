#include<iostream>
using namespace std;
int main()
{ 
int x = 5;
for(int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= x; j++)
    {
        cout<<"*";
    }
    x--;
    cout<<endl;
    
}
}
