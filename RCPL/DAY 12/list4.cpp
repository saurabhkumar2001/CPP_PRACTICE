//swap and reverse function in linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {1,34,6,78,05};
    cout<<"before sort"<<endl;
    for (auto i: obj)
    {
        cout<<i<<"-->";
    }
    cout<<endl;
    cout<<"after sort"<<endl;
    obj.sort();
    for (auto i : obj)
    {
        cout<<i<<"-->";
    }
    
    
    return 0;
}