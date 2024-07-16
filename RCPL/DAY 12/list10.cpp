//swap and reverse function in linked list
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int> obj = {1,34,6,45,78,05};
    int x = 45;
    auto ptr = find(obj.begin(),obj.end(),x);
    if (ptr!=obj.end())
    {
        cout<<"record found at: "<<distance(obj.begin(),ptr)<<endl;
    }
    else
    {
        cout<<"record not found: "<<endl;
    }
  
    return 0;
}