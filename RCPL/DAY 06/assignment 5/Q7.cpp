#include <iostream>
#include <string>

using namespace std;

class Teacher {
protected:
    string name;
    string department;
    string college_name;
    string email_id;

public:
    Teacher(string name, string department, string college_name, string email_id)
        : name(name), department(department), college_name(college_name), email_id(email_id) {}

    void display_details() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "College name: " << college_name << endl;
        cout << "Email id: " << email_id << endl;
    }
};

class MathTeacher : public Teacher {
    string qualification;
    string expertise;
    int salary;

public:
    MathTeacher(string name, string department, string college_name, string email_id,
                string qualification, string expertise, int salary)
        : Teacher(name, department, college_name, email_id),
          qualification(qualification), expertise(expertise), salary(salary) {}

    void display_details() {
        Teacher::display_details();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class EnglishTeacher : public Teacher {
    string qualification;
    string expertise;
    int salary;

public:
    EnglishTeacher(string name, string department, string college_name, string email_id,
                   string qualification, string expertise, int salary)
        : Teacher(name, department, college_name, email_id),
          qualification(qualification), expertise(expertise), salary(salary) {}

    void display_details() {
        Teacher::display_details();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

class ScienceTeacher : public Teacher {
    string qualification;
    string expertise;
    int salary;

public:
    ScienceTeacher(string name, string department, string college_name, string email_id,
                   string qualification, string expertise, int salary)
        : Teacher(name, department, college_name, email_id),
          qualification(qualification), expertise(expertise), salary(salary) {}

    void display_details() {
        Teacher::display_details();
        cout << "Qualification: " << qualification << endl;
        cout << "Expertise: " << expertise << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    MathTeacher math_teacher("John Doe", "Mathematics", "ABC College", "john.doe@example.com", "Masters", "Algebra", 50000);
    EnglishTeacher english_teacher("Jane Smith", "English", "XYZ College", "jane.smith@example.com", "PhD", "Literature", 60000);
    ScienceTeacher science_teacher("Alice Johnson", "Science", "DEF College", "alice.johnson@example.com", "Bachelor's", "Biology", 45000);

    cout << "Math Teacher Details:" << endl;
    math_teacher.display_details();
    cout << "\nEnglish Teacher Details:" << endl;
    english_teacher.display_details();
    cout << "\nScience Teacher Details:" << endl;
    science_teacher.display_details();

    return 0;
}
