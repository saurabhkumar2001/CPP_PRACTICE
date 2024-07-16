#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>obj = {12,23,45,56,67};
    vector<int>obj1 = {23,44,34,56,7};
    reverse(obj.begin(),obj.end());
    cout<<"after reversing the elment:"<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }

    return 0;
}