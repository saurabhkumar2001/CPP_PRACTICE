#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,23,45,67,89};
    int i;
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*ptr);  
        ptr++;
    }
    

}