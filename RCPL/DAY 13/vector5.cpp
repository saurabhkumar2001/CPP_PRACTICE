#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>obj = {23,1,333,5,667,90};
    cout<<"before reversing the elment:"<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }
    sort(obj.begin(),obj.end());
    cout<<"\nafter reversing the elment:"<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }

    return 0;
}