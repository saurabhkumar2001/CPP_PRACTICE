#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>obj = {23,1,1,333,5,667,90};
    cout<<"value of the vector is :"<<endl;
     for(auto i : obj){
        cout<<i<<" ";
    }
    int value =1;
    int count1 = count(obj.begin(),obj.end(),value);
    cout<<"\n"<<count1;
    return 0;
}