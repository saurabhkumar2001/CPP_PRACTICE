#include<iostream>
using namespace std;
main(){int x= 5,y=2;
for(int i=1;i<=9;i++)
{
    if(i<=5){
        for(int j=1;j<=x;j++){
            cout<<"*";
        }
        x--;
        cout<<endl;
    }else
    {
        for (int k = 1 ; k <= y; k++)
        {
            cout<<"*";
        }y++;
        
cout<<endl;
    }
        
}
    return 0;
}