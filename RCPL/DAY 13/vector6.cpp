#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>obj = {23,1,333,5,667,90};
    for (auto i:obj)
    {
        cout<<i<<" ";
    }
    cout<<"\nresizing to 8"<<endl;
    obj.resize(8);
    for (auto i:obj)
    {
        cout<<i<<" ";
    }
    cout<<"\nresizing to 3"<<endl;
    obj.resize(3);
    for (auto i:obj)
    {
        cout<<i<<" ";
    }

    return 0;
}