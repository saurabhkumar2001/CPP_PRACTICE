#include <iostream>
using namespace std;
class ATM
{
    int balance;
    int account_number;

public:
    void account()
    {
        cout << "Enter the account_number: " << endl;
        cin >> account_number;
        cout << "Enter the balance: " << endl;
        cin >> balance;
    }
    void withdrawl()
    {
        int amount;
        cout << "\nEnter the amount to be withdrawl: " << endl;
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "\nnot enough balance" << endl;
        }
    }
    void deposit()
    {
        int amount;
        cout << "\nEnter the amount to be deposited: " << endl;
        cin >> amount;
        balance += amount;
    }
    void show(){
        cout<<"\nyour balance is : "<<balance;
    }
};
int main()
{
    ATM a;
    a.account();
    a.show();
    a.deposit();
    a.show();
    a.withdrawl();
    a.show();
}
