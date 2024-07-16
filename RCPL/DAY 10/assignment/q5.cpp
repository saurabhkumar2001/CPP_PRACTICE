#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class stud
{
public:
    int rollnum;
    string name;
    double per;
    stud(int r, string n, double p)
    {
        rollnum = r;
        name = n;
        per = p;
    }
    void writeDetails()
    {
        ofstream ob("saurabh.txt", ios::app);
        if (ob.is_open())
        {
            ob << "student_details:" <<endl;
            ob << "\nNAME: " << stud::name;
            ob << "\nROLL_NUMBER: " << stud::rollnum;
            ob << "\nPERCENTAGE: " << stud::per;
            ob.close();
        }
        else
        {
            cout << "unable to open the file. " << endl;
        }
    }
    void readDetails()
    {
        ifstream ob("saurabh.txt");
        string str;
        if (ob.is_open())
        {
            while (getline(ob, str))
            {
                cout << str << endl;
            }
            ob.close();
        }
        else
        {
            cout << "unable to open the file.";
        }
    }
};
int main()
{
    stud s(101, "saurabh", 89.9);
    s.writeDetails();
    s.readDetails();
    return 0;
}