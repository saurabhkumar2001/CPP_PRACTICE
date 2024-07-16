#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//yha hum array of array bna rhe h 
int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> arrays(n);
    for (int i=0;i<n;i++) {
    int k;
    cin>>k;
    arrays[i].resize(k);
    
    for (int j =0;j<k;j++) {
    cin>>arrays[i][j];
    }
}
//yha hum query do hi chla rhe h isliye 2 baar loop ghumega
for (int i=0;i<q;i++) {
    int arr_ind,ele_ind;
    cout<<arrays[arr_ind][ele_ind]<<endl;
}
return 0;
}