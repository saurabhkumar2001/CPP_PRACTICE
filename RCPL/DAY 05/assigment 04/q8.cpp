#include<iostream>
using namespace std;

class sport; // Forward declaration

class stud {
    int rollno, mark1, mark2, mark3;

public:
    stud() {
        cout << "Enter the rollnumber: ";
        cin >> rollno;
        cout << "Enter the mark1: ";
        cin >> mark1;
        cout << "Enter the mark2: ";
        cin >> mark2;
        cout << "Enter the mark3: ";
        cin >> mark3;
    }

    // Friend function declaration
    friend int calculate_result(stud s, sport sp);
};

class sport {
    int sport_mark;

public:
    sport() {
        cout << "Enter the sportmark: ";
        cin >> sport_mark;
    }

    // Friend function declaration
    friend int calculate_result(stud s, sport sp);
};

// Friend function definition
int calculate_result(stud s, sport sp) {
    int total_result = s.mark1 + s.mark2 + s.mark3 + sp.sport_mark;
    return total_result;
}

int main() {
    stud student;
    sport sports;

    int total_result = calculate_result(student, sports);
    cout << "Total Result: " << total_result << endl;

    return 0;
}
