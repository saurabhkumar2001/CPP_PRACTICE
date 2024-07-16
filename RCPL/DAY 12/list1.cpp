//we cannot access randomly from the linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {12,34,56,78,90};
    cout<<"value at list : "<<endl;
    for (auto i : obj)
    {
        cout<<i<<"-->";
    }
    cout<<"\nSize of List: "<<obj.size()<<endl;
    cout<<"\n:check list is empty or not "<<obj.empty()<<endl;
    cout<<"\nFirst value of list: "<<obj.front()<<endl;
    cout<<"\nlast value of list: "<<obj.back()<<endl;
    return 0;

}