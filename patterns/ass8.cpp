#include<iostream>
using namespace std;
int main(){int x =4;
    for(int i = 1;i<=9;i++){
        if(i<=5){
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }cout<<endl;
        }
        else
        {
         for (int j=1; j <= x; j++)
        {
            cout<<"*";
        }        cout<<endl;
        x--;
        }
    }
}