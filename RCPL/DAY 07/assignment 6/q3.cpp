#include <iostream>
#include <string>
using namespace std;
class vehicle
{
public:
    string make, model;
    int year;

    virtual void displayinfo()
    {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
class bike : public vehicle
{
public:
    string fuel;

    void displayinfo()
    {
        vehicle::displayinfo();
        cout << "fuel:" << fuel;
    }
};
class car : public vehicle
{
public:
    string transmission;
   
    void displayinfo()
    {
        vehicle::displayinfo();
        cout << "transmission :" << transmission << endl;
    }
};
int main()
{
    bike b;
    cout<<"enter the details about bike: "<<endl;
    cout << "make:" << endl;
    getline(cin, b.make);
    cout << "model:" << endl;
    getline(cin, b.model);
    cout << "year" << endl;
    cin >> b.year;
    cin.ignore();
    cout << "fuel: " << endl;
    getline(cin, b.fuel);
    cout<<"\nbike information"<<endl;
    b.displayinfo();
    car c;
    cout<<"\nenter the details about the car: "<<endl;
    cout << "make:" << endl;
    getline(cin, c.make);
    cout << "model:" << endl;
    getline(cin, c.model);
    cout << "year" << endl;
    cin >> c.year;
    cin.ignore();
    cout << "transmission :" << endl;
    getline(cin,c.transmission);
    cout<<"\ncar information"<<endl;
    c.displayinfo();
    return 0;
}