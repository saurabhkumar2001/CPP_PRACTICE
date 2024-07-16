//swap and reverse function in linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {1,34,6,78,05};
    cout<<"\nvalue in list"<<endl;
    for (auto i: obj)
    {
        cout<<i<<"-->";
    }
    int x = 2;
    auto pos = next(obj.begin(),2);
    obj.erase(pos);
    cout<<"\nValue of list: "<<endl;
    for(auto i : obj){
        cout<<i<<"-->";
    }
    
    
    return 0;
}