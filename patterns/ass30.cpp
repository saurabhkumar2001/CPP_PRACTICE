#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
