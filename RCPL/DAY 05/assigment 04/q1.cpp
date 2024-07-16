#include <iostream>
using namespace std;

class area
{
    int len, bre;

public:
    area(int l, int b)
    {
        len = l;
        bre = b;
    }
    void areaofRect()
    {
        cout << "the area of the rectangle is :" << len * bre;
    }
};
int main()
{
    int len, bre;
    cout << "Enter the length of the rectangle" << endl;
    cin >> len;
    cout << "Enter the breadth of the rectangle" << endl;
    cin >> bre;
    area a(len, bre);
    a.areaofRect();
}