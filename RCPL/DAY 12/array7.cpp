//to count the multiple values in the array
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr={12,2,34,5,12};
    int se = 34;
    auto d = remove(arr.begin(),arr.end(),se);
    int n = distance(arr.begin(),d);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
}
