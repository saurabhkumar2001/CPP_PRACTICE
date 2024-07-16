#include <iostream>
using namespace std;
//diamond problem
class person
{
    public:
    int age;
    string name;
    void getinfo()
    {
        cout << "Enter the name of the person and age of the person:" << endl;
        cin >> name >> age;
    }
};
 class student : virtual public person{

 };
 class emp :virtual public person
{
    public:
    int empid;
    void getemp()
    {
        cout << "Enter the empid:" << endl;
        cin >> empid;
    }
};
class manager : public emp ,virtual public person 
{
    public:
    void details()
    {
        cout << "the name of the person:" << name << endl;
        cout << "the age of the person:" << age << endl;
        cout << "the empid of the emp: " << empid << endl;
    }
}; int main()
{
    manager ob;
    ob.getinfo();
    ob.getemp();
    ob.details();
}