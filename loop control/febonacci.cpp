#include <iostream>
using namespace std;
main()
{
    int num;
    cout << "enter the number" << endl;
    cin >> num;
    cout<<"the fibonacci series of "<<num<<endl;
    int a = 0, b = 1, c = 0;
    cout<<a<<","<<b<<",";
    for(int i = 1; i <= num-2; ++i) //yeh num-2 kyu hua h 
    {
        c = a + b;
        cout<< c <<",";
        a = b;
        b = c;
    }
}