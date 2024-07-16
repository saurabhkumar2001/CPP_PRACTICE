#include <iostream>
using namespace std;
main()
{
    int skj = 0;
    int num;
    cout<<"Enter the number!! "<<endl;
    cin>>num;
    if (num == 0 || num == 1)
    {
        cout << "the number is not prime" << endl;
    }
    for (int i = 2; i < num; i++)
    {
        if (num%i== 0)
        {
            skj = 1;
            break;
        }
    }
        if (skj != 0)
        {
            cout << "the number is not prime!!" << endl;
        }
        else
        {
            cout << "the number is prime! " << endl;
        }
    
}