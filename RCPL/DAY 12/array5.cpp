#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr = {132,330,34,576,278};
    int se = 34;
    auto ptr = find(arr.begin(),arr.end(),se);
    if (ptr!=arr.end())
    {
        cout<<"record found at index "<<ptr-arr.begin();
    }
    else
    {
        cout<<"Record not found "<<endl;
    }
    
    return 0;
}