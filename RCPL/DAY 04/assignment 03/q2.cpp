#include <iostream>
using namespace std;
void exchange(int (&arr)[], int &num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int num;
    cout << "Enter the number of element in the array: " << endl;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    exchange(arr, num);
}