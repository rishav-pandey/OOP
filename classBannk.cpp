#include <iostream>
using namespace std;
class Bank
{
    string bank_name, branch, ifsc;


    void get()
    {
        cout << "ENTER BANK NAME : " << endl;
        cin >> bank_name;
        cout << "ENTER BRANCH NAME : " << endl;
        cin >> branch;
        cout << "ENTER IFSC : " << endl;
        cin >> ifsc;
    }
    void display()
    {
        cout << "BANK NAME IS : " << bank_name << endl;
        cout << "BRANCH IS : " << branch << endl;
        cout << "IFSC IS : " << ifsc << endl;
    }
    friend class Customer;
};
class Customer
{
    string customer_name;
    int customer_id, bal;

public:
    void get()
    {
        cout << "ENTER CUSTOMER NAME : " << endl;
        cin >> customer_name;
        cout << "ENTER CUSTOMER ID : " << endl;
        cin >> customer_id;
        cout << "ENTER BALANCE : " << endl;
        cin >> bal;
    }
    void display()
    {
        cout << "CUSTOMER NAME IS : " << customer_name << endl;
        cout << "CUSTOMER ID IS : " << customer_id << endl;
        cout << "BALANCE IS : " << bal << endl;
    }
};
int main()
{
    Bank b;
    b.get();
    b.display();
    Customer c;
    c.get();
    c.display();
    return 0;
}