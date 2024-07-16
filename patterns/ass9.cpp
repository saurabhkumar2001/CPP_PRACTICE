#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 1, M = 4;
    for (int i = 1; i <= 9; i++)
    {
        if (i <= 5)
        {
            for (int j = x; j >= 1; j--)
            {
                cout << " ";
            }
            x--;
            for (int k = 1; k <= i;k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= y; j++)
            {
                cout << " ";
            }
            y++;
            for (int k = M; k>=1; k--)
            {
                cout << "*";
            }
            M--;
            cout<<endl;
        }
    }
}