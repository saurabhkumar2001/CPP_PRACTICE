#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>obj = {12,23,45,56,67};
    vector<int>obj1 = {23,44,34,56,7};
    obj.swap(obj1);
    cout<<"after using the swap function:"<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }

    return 0;
}