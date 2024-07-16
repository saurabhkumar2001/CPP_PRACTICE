#include<iostream>
using namespace std;

class person {
public:
    string college_name, name;
    person() {
        cout << "enter name: ";
        cin >> name;
        cout << "enter college name: ";
        cin >> college_name;
    }
    void displayinfo() {
        cout << "name: " << name << "\n";
        cout << " college name: " << college_name << "\n";
    }    
};

class student : public person {
public:
    int stud_id, arr[5], totalmark=0;
    double percentage;
    student(int id) : stud_id(id) {
        cout << "Enter the marks of 5 subjects: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "subject " << i + 1 << " marks: ";
            cin >> arr[i];
            totalmark += arr[i];          
        }
        percentage = totalmark / 5.0;
    }

    void displaystud() {
        cout << "stud_id: " << stud_id << "\n";
        cout << "stud_name: " << name << "\n";
        cout << "stud_college: " << college_name << "\n";
        for (int i = 0; i < 5; i++) {
            cout << "subject " << i + 1 << " marks: " << arr[i] << endl;
        }
        cout << "percentage: " << percentage << endl;
        cout << "class: ";
        if (percentage > 90 && percentage <= 100) {
            cout << "Dist \n";
        }
        else if (percentage > 80 && percentage <= 90) {
            cout << "first \n";
        }
        else if (percentage > 70 && percentage <= 80) {
            cout << "secound \n";
        }
        else if (percentage > 60 && percentage <= 70) {
            cout << "third \n";
        }
        else if (percentage > 30 && percentage <= 60) {
            cout << "pass \n";
        }
        else {
            cout << "fail\n";
        } 
    }
};

class emp : public person {
public:
    int emp_id, basic_sal, ta;
    double da, hra, incometax, netsalary;
    string qualification;
    emp(int eid, int sal) : emp_id(eid), basic_sal(sal) {}

    double netsal() {
        da = 1.89 * basic_sal;
        hra = 0.10 * basic_sal;
        ta = 500;
        if(basic_sal > 50000) {
            incometax = 0.05 * basic_sal;
        } else {
            incometax = 0;
        }
        netsalary = (basic_sal + hra + da + ta) - incometax;
        return netsalary;
    }

    void display() {
        cout << "emp_id: " << emp_id << endl;
        cout << "emp_name: " << name << endl;
        cout << "emp_college_name: " << college_name << endl;
        cout << "basicsal: " << basic_sal << endl;
        cout << "netsal: " << netsal() << endl;
    }  
};

int main() {
    char choice;
    cout << "Enter s for student and e for employee. " << endl;
    cin >> choice;

    if(choice == 's' || choice == 'S') {
        student s(101);
        s.displaystud();
    } else if(choice == 'e' || choice == 'E') {
        emp e(345, 75000);
        e.display();
    } else {
        cout << "invalid choice!";
    }

    return 0;
}
