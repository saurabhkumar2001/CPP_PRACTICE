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
    //pop()
    obj.pop_back();
    cout<<"\nValue of vector after removing last value :"<<endl;
    for (auto i:obj)
    {
        cout<<i<<" ";
    }
    //at()
    cout<<"\n value at the index 2 is:";
    cout<<"\n"<<obj.at(2);
    //size()
    cout<<"\n size of the vector is :";
    cout<<"\n"<<obj.size();
    //empty()
    cout<<"\n is vector is empty :";
    cout<<"\n"<<obj.empty();
    cout<<"\nfirst element of the vector is : ";
    cout<<"\n"<<obj.front();
    cout<<"\nlast element of the vector is : ";
    cout<<"\n"<<obj.back();
    return 0;
}