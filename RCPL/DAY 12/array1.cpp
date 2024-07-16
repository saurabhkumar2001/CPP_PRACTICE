#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr = {12,23,34,56,78};
    array<int,5> arr1 = {1,2,3,5,7};
    arr.swap(arr1);
    for (auto i : arr)
    {
        cout<<i<<" ";
    }
    
  
    return 0;

}