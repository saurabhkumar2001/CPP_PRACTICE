#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>obj = {12,23,45,56,67};
    cout<<"Value of vector is :"<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }
    obj.clear();
    cout<<"\nafter using clear function "<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }

    return 0;
}