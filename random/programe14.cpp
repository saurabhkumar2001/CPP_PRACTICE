// length of the number
#include<iostream>
using namespace std;
int main(){
    long num,i=0;
    cout<<"enter the number"<<endl;
    cin>>num;
    while(num!=0){
        num /=10;
        i++;
    }
    cout<<"the length of the number "<<i<<endl;
    return 0;
}