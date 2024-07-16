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

    for(int i = 0;i<r*c;i++){
        for(int j=0;j<(r*c)-1-i;j++){
            int curr_row = j/r;
            int curr_col = j%r;
            int next_row = (j+1)/r;
            int next_col = (j+1)%r;

        if(arr[curr_row][curr_col]>arr[next_row][next_col]){
            temp = arr[curr_row][curr_col];
            arr[curr_row][curr_col]=arr[next_row][next_col];
            arr[next_row][next_col]=temp;
        }
        }
    }
    cout<<"sorted array is "<<endl;
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }



}
