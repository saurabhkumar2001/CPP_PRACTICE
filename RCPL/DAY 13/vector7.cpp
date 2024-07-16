#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>obj = {23,1,333,5,667,90};
    cout<<"value of the vector is :"<<endl;
     for(auto i : obj){
        cout<<i<<" ";
    }
    int nv =34;
    auto pos = next(obj.begin(),4);
    obj.insert(pos,nv);
    cout<<"\nafter adding new value at index 4"<<endl;
    for(auto i : obj){
        cout<<i<<" ";
    }

    return 0;
}