#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
vector<int> obj = {12,78,90,11,45};
sort(obj.begin(),obj.end(),[](int a,int b){return a>b;});

for(auto i : obj){
    cout<<i<<" ";
}
return 0;
}