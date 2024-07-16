// pointer type variable len array variable means that runtime array

/*#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"\n"<<arr[i];
    }
    
}*/

// VLA by the help of vector

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int> arr(size);
    cout<<"Enter the element of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
     cin>>arr[i];   
    }
    cout<<" the element of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
    cout<<arr[i];
    }
    
}*/



