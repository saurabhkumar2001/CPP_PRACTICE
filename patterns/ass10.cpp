
#include <iostream>
using namespace std;
int main()
{
    int x = 4;
    for (int j = 1; j <= 5; j++)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 5; k++)
        {
            cout << "*";
        }
        cout << endl;
        x--;
    }
}