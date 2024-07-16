#include <iostream>
#include <map>
using namespace std;

class ATM
{
    int balance;
    int account_number;
    int pin;
    static map<int, int> accounts; // Map to store account number and PIN pairs

public:
    ATM(int account_number, int pin, int balance = 0)
    {
        this->account_number = account_number;
        this->pin = pin;
        this->balance = balance;
        accounts[account_number] = pin; // Store account number and PIN pair in the map
    }
    void withdrawl()
    {
        int w_amount;
        cout << "\nEnter the amount to be withdrawn $: ";
        cin >> w_amount;
        if (w_amount <= balance)
        {
            balance -= w_amount;
            cout << "Withdrawal successful!" << endl;
        }
        else
        {
            cout << "\nNot enough balance" << endl;
        }
    }

    void deposit()
    {
        int d_amount;
        cout << "\nEnter the amount to be deposited $: ";
        cin >> d_amount;
        balance += d_amount;
        cout << "Deposit successful!" << endl;
    }

    void bal()
    {
       cout << "\nNet balance is $: " << balance << endl;
    }

    static bool verifyPIN(int account_number, int pin)
    {
        // Check if account number exists and PIN matches
        if (accounts.find(account_number) != accounts.end() && accounts[account_number] == pin)
            return true;
        else
            return false;
    }
};

map<int, int> ATM::accounts; 

int main()
{
    int account_number, pin, choice;
    cout<<"\nPAYTM: "<<endl;
    cout << "\nCreating a new account..." << endl;
    cout<<"Enter the account number"<<endl;
    cin>>account_number;
    cout << "Your account number is: " << account_number << endl;
    cout << "Set a 4-digit PIN for your account: ";
    cin >> pin;
    ATM customer(account_number, pin);

    // Log in
    cout << "\nPlease log in to your account." << endl;
    cout << "Enter your account number: ";
    cin >> account_number;
    cout << "Enter your PIN: ";
    cin >> pin;

    // Verify account number and PIN
    if (ATM::verifyPIN(account_number, pin))
    {
        cout << "\nLogin successful!" << endl;
        // Main menu
        do
        {    
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdrawal" << endl;
        cout << "3. Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            customer.deposit();
            break;
        case 2:
            customer.withdrawl();
            break;
        case 3:
            customer.bal();
            break;
        case 4:
            cout << "Exiting...\nhave a nice day sir/madam ";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
        }
        } while (choice != 4);
    }else
    {
        cout<<"account number and pincode is not matching"<<endl;
    } 
    return 0;
}
