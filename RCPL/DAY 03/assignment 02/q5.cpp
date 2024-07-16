#include <iostream>
#include <string>
using namespace std;
class stud
{
    int studid, sem;
    string branch, name;

public:
    void get()
    {

        cout << "Enter the name of the student: " << endl;
        getline(cin, name);
        cout << "Enter the branch of the student: " << endl;
        getline(cin, branch);
        cout<<"enter the stud id "<<endl;
        cin>>studid;
        cout<<"enter the sem "<<endl;
        cin>>sem;
    }

    void show(){
        this->name = name;
        this->branch = branch;
        this->sem = sem;
        this->studid = studid;
        cout<<"studid"<<" "<<"name"<<" "<<"branch"<<" "<<"sem"<<endl;
        cout<<studid<<" "<<name<<" "<<branch<<" "<<sem;
    }
};
int main(){
    stud s1;
    s1.get();
    s1.show();
}