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

    obj.erase(obj.begin()+2);
    cout<<"\nafter adding erasing value at index 4"<<endl;
    for(auto i : obj){
        cout<<i<<" ";
    }

    return 0;
}