#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter the len of the array"<<endl;
    cin>>num;
    int arr[num];
    cout<<"enter the number in the array"<<endl;
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }

    cout<<"array is "<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<"\t";
    }
    

}