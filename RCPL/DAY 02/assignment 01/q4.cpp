#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int numSubjects = 5;
    string subjects[numSubjects];
    int marks[numSubjects];

    cout << "Enter the names of subjects:" << endl;
    for (int i = 1;i<=numSubjects;i++) {
        cout << "Subject " << i << ": ";
        getline(cin, subjects[i]);
    }
    cout << "\nEnter marks for each subject:" << endl;
    int totalMarks = 0;
    for (int i = 1; i<=numSubjects;i++) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
        totalMarks += marks[i];
    }
    cout << "\nMarks obtained in each subject:" << endl;
    cout<<setw(12)<<"Subjects"<<setw(12)<<"marks"<<endl;
    for (int i = 1; i <=numSubjects;i++) {
        cout<<setw(12)<< subjects[i] <<setw(12)<< marks[i] << endl;
    }

    double percentage = (totalMarks) / numSubjects;
    cout << "\nTotal Percentage Marks: "<< percentage << "%" << endl;

    return 0;
}
