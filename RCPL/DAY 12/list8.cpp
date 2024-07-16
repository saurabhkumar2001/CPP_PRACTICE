//swap and reverse function in linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {1,34,6,78,05};
    list<int> obj1 = {12,67,44,34,56};
    obj.splice(obj.end(),obj1);
    cout<<"\nvalue in list after adding obj1 into obj"<<endl;
    for(auto i : obj){
        cout<<i<<"-->";
    }
    
    
    return 0;
}