//swap and reverse function in linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {12,34,56,78,90};
    list<int> obj1 = {11,22,33,44,55};

    obj.swap(obj1);
    for (auto i: obj)
    {
        cout<<i<<"-->";
    }
    cout<<endl;
    reverse(obj.begin(),obj.end());
    for (auto i : obj)
    {
        cout<<i<<"-->";
    }
    
    
    return 0;
}