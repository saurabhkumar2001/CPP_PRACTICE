#include <iostream>
using namespace std;
int main()
{
    int x=20, y=30;
    int *ptr = &x;
    int *ptr1 = &y;
    cout<<ptr<<" ";
    cout<<ptr1<<" ";
    ptr++;
    ptr1--;
    cout<<ptr<<" ";
    cout<<ptr1<<" ";
    int ptr3 = ptr - ptr1;
    cout << ptr3;
    return 0;
}
