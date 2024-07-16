#include<iostream>
using namespace std;

class employee{
        protected:
        int emp_id;
        string emp_name;
        public:
        employee(){
            cout<<"Enter the name of the emp: "<<endl;
            cin>>emp_name;
            cout<<"enter the employee id: "<<endl;
            cin>>emp_id;
        }
        virtual void calculatesal()=0;
        virtual void displaydetails()=0;
};
class manager:public employee{
    double basic_sal,da,hra,incometax,netsalary;
    public:
    void calculatesal() override{
        cout<<"enter the basic sal "<<endl;
        cin>>basic_sal;
        da = 1.89 * basic_sal;
        hra = 0.10 * basic_sal;
        int ta = 500;
        if(basic_sal > 50000) {
            incometax = 0.05 * basic_sal;
        } else {
            incometax = 0;
        }
        netsalary = (basic_sal + hra + da + ta) - incometax;
    }
    void displaydetails() override{
        cout<<"payroll system for the manager"<<endl;
        cout << "emp_id: " << emp_id << endl;
        cout << "emp_name: " << emp_name << endl;
        cout << "basicsal: " << basic_sal << endl;
        cout << "netsal: " <<netsalary<< endl;
    }
};
class developer:public employee{
double basic_sal,da,hra,incometax,netsalary;
    public:
    void calculatesal() override{
        cout<<"enter the basic sal "<<endl;
        cin>>basic_sal;
        da = 1.89 * basic_sal;
        hra = 0.10 * basic_sal;
        int ta = 500;
        if(basic_sal > 50000) {
            incometax = 0.05 * basic_sal;
        } else {
            incometax = 0;
        }
        netsalary = (basic_sal + hra + da + ta) - incometax;
    }
    void displaydetails() override{
        cout<<"payroll system for the developer"<<endl;
        cout << "emp_id: " << emp_id << endl;
        cout << "emp_name: " << emp_name << endl;
        cout << "basicsal: " << basic_sal << endl;
        cout << "netsal: " <<netsalary<< endl;
    }
};
int main(){
    char ch;
    cout<<"Enter m for the manager and d for the developer: "<<endl;
    cin>>ch;
    employee* ptr = nullptr;
    if(ch=='m'){
        manager m;
        ptr = new manager;
    }
    else if(ch=='d'){
        developer d;
        ptr = new developer;
    }else
    {
        cout<<"Enter a valid choice"<<endl;
    }
    
    ptr->calculatesal();
    ptr->displaydetails();

delete ptr;
return 0;
}