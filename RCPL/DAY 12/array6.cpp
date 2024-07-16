//to count the multiple values in the array
#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main(){
    array<int,5> arr={12,2,34,5,12};
    int se = 12;
    int c = count(arr.begin(),arr.end(),se);
    cout<<"count of "<<se<<": "<<c;
    return 0;
}
