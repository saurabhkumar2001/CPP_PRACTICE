#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr = {67,33,12,444,55};
    cout<<"Value before sort : "<<endl;
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    sort(arr.begin(),arr.end());
   cout<<"\n Value after sort: "<<endl;
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
  
    return 0;

}