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
    obj.pop_front();
    obj.pop_back();
   cout<<"\nvalue at list after removing front and back : "<<endl;
    for (auto i : obj)
    {
        cout<<i<<"-->";
    }

}