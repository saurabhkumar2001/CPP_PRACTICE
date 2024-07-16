//swap and reverse function in linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {1,34,6,78,05};
    cout<<"value at the list is : "<<endl;
    for(auto i: obj){
     cout<<i<<" ";
    }
    auto x = next(obj.begin(),2);
    obj.insert(x,99);
    cout<<"\n add a new value at 2 index"<<endl;
    
    for (auto i : obj)
    {
    cout<<i<<"-->";
    }
    cout<<"\n add a new value at 15 index but the index is 5"<<endl;
    auto x1 = next(obj.begin(),15);
    obj.insert(x,67);
    for (auto i : obj)
    {
    cout<<i<<"-->";
    }
    return 0;
}