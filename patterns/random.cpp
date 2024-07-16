#include<iostream>
using namespace std;
int main( )
{int x = 1,y=4;
    int num;
    cin>>num;
    cout<<endl;

  for (int i = num ; i>=1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
       cout<<"-";
    }
    
  cout<<endl;
  }
    return 0;
}
