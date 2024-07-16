#include<iostream>
using namespace std;

class account {
protected:
    string beneficary_name;
    int am, account_number;
public:
    account() {
        cout << "enter account holder name: " << endl;
        getline(cin, beneficary_name);
        cout << "enter account pin: " << endl;
        cin >> account_number;
        cout << "enter the amount: " << endl;
        cin >> am;
        cin.ignore();
    }
    virtual void withdraw()= 0;
    virtual void deposit()= 0;
};

class savingAccount : public account {
public:
    int amount;
    void withdraw() override {
        cout << "\nEnter the amount you want to withdraw: " << endl;
        cin >> amount;
        if (amount <= am) {
            am -= amount;
            cout << "\ndone successfully";
            cout<<"\nbalance: "<<am;
        }
        else {
            cout << "you dont have a sufficient balance" << endl;
        }
    }
    void deposit() override {
        cout << "\nenter the amount you want to add: " << endl;
        cin >> amount;
        am += amount;
        cout << "Added successfully";
            cout<<"\nbalance: "<<am;
    }
};

class currentAccount : public account {
public:
    int amount;
    void withdraw() override {
        cout << "Enter the amount you want to withdraw: " << endl;
        cin >> amount;
        if (amount >= am) {
            am -= amount;
            cout << "done successfully";
            cout<<"\nbalance: "<<am;
        }
        else {
            cout << "you dont have a sufficient balance" << endl;
        }
    }
    void deposit() override {
        cout << "enter the amount you want to add: " << endl;
        cin >> amount;
        am += amount;
        cout << "Added successfully";
            cout<<"\nbalance: "<<am;
    }
};

int main() {
    char ch;
    cout << "Choose account type (s for savings, c for current): ";
    cin >> ch;
    cin.ignore();
    account* ptr;
    if (ch == 'c') {
        currentAccount c;
        ptr = &c;
        ptr->withdraw();
        ptr->deposit();
    }
    else {
        savingAccount s;
        ptr = &s;
        ptr->withdraw();
        ptr->deposit();
    }
    return 0;
}
