#include <iostream>
using namespace std;

class vehicle
{
public:
    void displayinfo()
    {
        cout<<
    }
};
class car : public vehicle
{
    public:
    string brand, color, price;
    displayinfo()
    {
        cout << "enter the brand name" << endl;
        cin >> brand;
        cout << "enter the color name" << endl;
        cin >> color;
        cout << "enter the price name" << endl;
        cin >> price;
    }
};
class bike: public vehicle
{
    public:
    string brand, color, price;
    displayinfo()
    {
        cout << "enter the brand name" << endl;
        cin >> brand;
        cout << "enter the color name" << endl;
        cin >> color;
        cout << "enter the price name" << endl;
        cin >> price;
    }
};
int main(){
    bike b;
    b.displayinfo();
    car c;
    c.displayinfo();
}