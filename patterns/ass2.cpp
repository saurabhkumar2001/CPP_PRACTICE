#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for (int i = 1; i <= 5; i++)
    {
        for (int i = num; i = 1; i--)
        {
            cout << " ";
        }
       
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
