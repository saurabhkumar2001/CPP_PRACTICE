#include<iostream>
using namespace std;
class stud
{
    int studid, sem;
    string branch, name;
    int subMarks[5],totalmark = 0;

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
        for(int i = 0;i<=4;i++){
            cout<<"Enter the mark of sub"<<i+1<<endl;
            cin>>subMarks[i];
            totalmark += subMarks[i];
        }
    }
    void per(){
        double per = totalmark/5;
        if(per>=90){
            cout<<"Dist";
        }
        else if(per >= 60 && per<=89){
            cout<<"First Division";
        }
        else if(per>=50 && per<=59){
            cout<<"Secound division";
        }
        else{
            cout<<"Third division";
        }
    }
};
int main(){
    stud s;
    s.get();
    s.per();
}