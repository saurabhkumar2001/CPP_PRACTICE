// 2Ds
#include <iostream>
using namespace std;
main()
{
    system("color 0B");
    system("cls");
    int r, c, temp;
    cout << "ENter row and column " << endl;
    cin >> r >> c;
    int arr[r][c];

            cout << "enter the values in the 2D array  " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << '\t ';
        }
        cout << endl;
    }
    for (int k = 0; k < c - 1; k++)
    {

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c - 1; j++)
            {
                if (arr[i][j] > arr[i][j + 1])
                {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j + 1];
                    arr[i][j + 1] = temp;
                }
            }
            cout << endl;
        }
    }
    cout<<"matrix after sorting the 2 D array"<<endl;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << '\t';
        }
   cout<<endl; 
    }


}