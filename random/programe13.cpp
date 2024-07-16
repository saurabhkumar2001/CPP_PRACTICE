// menu using switch and do while
#include <iostream>
using namespace std;
int main()
{
    char select;
    do
    {
        system("color 0A");
        system("cls");
        int num1, num2, opr;
        char choice;
        cout<<"WELCOME TO THE SAURABH'S CALCULATOR "<<endl<<endl;
        cout << "press + for addition" << endl;
        cout << "press - for subtraction" << endl;
        cout << "press * for multiplication" << endl;
        cout << "press / for division" << endl;
        cout << "press % for remainder" << endl;
        cout << "Enter the two number " << endl;
        cin >> num1 >> num2;
        cout << "Enter the choice?  " << endl;
        cin >> choice;
        switch (choice)
        {
        case '+':
            opr = num1 + num2;
            cout << "result is = " << opr << endl;
            break;
        case '-':
            opr = num1 - num2;
            cout << "result is = " << opr << endl;
            break;
        case '*':
            opr = num1 * num2;
            cout << "result is = " << opr << endl;
            break;
        case '/':
            opr = num1 / num2;
            cout << "result is = " << opr << endl;
            break;
        case '%':
            opr = num1 % num2;
            cout << "result is = " << opr << endl;
            break;

        default:
            cout << "Enter a valid input" << endl;
            break;
        }

        cout << "do you want to continue ?? " << endl;
        cin >> select;
        if (select != 'y')
        {
            cout << "return to the calculator ? " << endl;
            cin >> select;
            if (select != 'y')
            {
                cout << "thanks have a great day!! " << endl;
            }
        }
    } while (select == 'y');

    return 0;
}