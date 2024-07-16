#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5> arr = {12,23,34,56,78};
    cout<<"Value of that array: "<<endl;
    //foreach loop is the part of iterator , iterator is a class 
    for (auto i: arr)       //auto is a class hold the address of the first element
    {
        cout<<i<<" "<<endl;
    }
    cout<<"value can be accessed through noraml for loop"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Size of array: "<<arr.size()<<endl;
    cout<<"First value of the array: "<<arr.front()<<endl;
    cout<<"last value of the array: "<<arr.back()<<endl;
    cout<<arr.empty(); //it check whether is is empty or not
    cout<<arr.data();  // repersent base address
    cout<<arr.at(3);   //repersent what is on the index
    cout<<arr[2];
    arr.fill(45);      //fill the same data at all the index
    cout<<"\n after use fill function: "<<endl;
    for(auto i: arr){
        cout<<i<<" ";
    }
    return 0;

}