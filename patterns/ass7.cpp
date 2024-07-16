#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 1, z = 1,m=7;
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = 1; j <= x; j++)
            {
                cout << " ";
            }
            x--;
            for (int k = 1; k <= y; k++)
            {
                cout << "*";
            }
            y += 2;
            cout << endl;
        }
        else
        {
            y = 1;
            for (int s = 1; s <= z+1; s++)
            {
                cout << " ";
            }
            z++;
            for (int t = 1; t <= m; t++)
            {
                cout << "*";
            }
            m -= 2;
            cout << endl;
        }
    }
}
