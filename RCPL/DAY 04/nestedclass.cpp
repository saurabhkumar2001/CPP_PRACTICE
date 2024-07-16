#include <iostream>
using namespace std;
class A
{
    int x = 10;

public:
    class B
    {
        int y = 20;

    public:
        void show()
        {
            A obj;
            cout << obj.x << " " << y;
        }
    };
};
int main()
{
    A::B ob;      //agar b k object bnana h toh refernce class ko use krenge isme reference class A h 
    ob.show();
    return 0;
}
