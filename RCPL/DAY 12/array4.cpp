#include<algorithm>
#include<array>
#include<iostream>
using namespace std;
int main(){
    array<int,5> arr = {67,33,12,444,55};
    auto m = max_element(arr.begin(),arr.end());
    auto n = min_element(arr.begin(),arr.end());
   cout<<"the max element is : "<<*m<<endl;
   cout<<"the min element is : "<<*n<<endl;
  
    return 0;

}