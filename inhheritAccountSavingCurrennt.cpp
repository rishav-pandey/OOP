#include <iostream>
using namespace std;
class Account
{
protected:
    int account_no;
    string customer_name;
    float balance;
};
class Savings : public Account
{
    float min_balance;

public:
    void deposit()
    {
        cout << "\nFor Saving Account :-" << endl;
        cout << "\nEnter customer name: ";
        cin >> customer_name;
        cout << "Enter customer acount number : ";
        cin >> account_no;
        cout << "Enter the total amount to be deposited : ";
        cin >> balance;
    }
    void withdraw()
    {
        float withdraw_amount = 0;
        cout << "\nEnter withdraw amount from Saving Account : ";
        cin >> withdraw_amount;
        min_balance = balance - withdraw_amount;
    }
    void display()
    {
        cout << endl
             << "\nName: " << customer_name << endl;
        cout << "Acccount No : " << account_no << endl;
        cout << "Balance Deposited : " << balance << endl;
        cout << "Minimum Balance is " << min_balance << endl;
    }
};
class Current : public Account
{
    float overdue_balance;

public:
    void deposit()
    {
        cout << endl
             << "\nFor Current Account :-" << endl;
        cout << "Enter customer name: ";
        cin >> customer_name;
        cout << "Enter customer acount number : ";
        cin >> account_no;
        cout << "Enter the total amount to be deposited : ";
        cin >> balance;
    }
    void withdraw()
    {
        float withdraw_amount;
        cout << "\nEnter withdraw amount from Current Account: ";
        cin >> withdraw_amount;
        overdue_balance = balance - withdraw_amount;
    }
    void display()
    {
        cout << endl
             << "\nName: " << customer_name << endl;
        cout << "Acccount No : " << account_no << endl;
        cout << "Balance Deposited : " << balance << endl;
        cout << "Overdue balance is " << overdue_balance << endl;
    }
};
int main()
{
    Current c;
    Savings s;
    int choice1, choice2;
label:
    cout << "\n\nWhich type of account do you want to access?\n1. Savings\n2. Current\nEnter your choice :";
    cin >> choice1;
    switch (choice1)
    {
    case 1:
        while (1)
        {
            cout << "\nFor Savings account :\nEnter the opertation to perform :\n\n1. Deposit\n2. Withdraw\n3. Display\n4. Go back to prev menu\n0. Exit\nEnter choice to continue :";
            cin >> choice2;
            switch (choice2)
            {
            case 1:
                s.deposit();
                break;
            case 2:
                s.withdraw();
                break;
            case 3:
                s.display();
                break;
            case 4:
                goto label;
            case 0:
                exit(0);
            }
        }
        break;
    case 2:
        while (2)
        {
            cout << "\nFor Current account :\nEnter the opertation to perform :\n\n1. Deposit\n2. Withdraw\n3. Display\n4. Go back to prev menu\n0. Exit\nEnter choice to continue :";
            cin >> choice2;
            switch (choice2)
            {
            case 1:
                c.deposit();
                break;
            case 2:
                c.withdraw();
                break;
            case 3:
                c.display();
                break;
            case 4:
                goto label;
            case 0:
                exit(0);
            }
        }
        break;
    }
}