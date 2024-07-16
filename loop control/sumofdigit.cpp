#include <iostream>
using namespace std;
int main()
{
    int num, l = 0,temp,digit;
    cout << "enter the number " << endl;
    cin >> num;
    temp=num;
    int sum = 0;
    while (temp!= 0)
    {
        digit = temp%10;
        temp = temp / 10;
        sum += digit;
    }
    cout<<"the sum of the digit "<<num<<" is = "<<sum<<endl; 
}