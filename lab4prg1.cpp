#include<bits/stdc++.h>
using namespace std;
class accounts
{
   int accountNo,balance;
   string Account_Holder,Account_type;
   public:
   void getAccountInformation()
  {
    cout<<"Enter account holder name:";
    cin>>Account_Holder;
    cout<<"Enter account type(saving/current)";
    cin>>Account_type;
    cout<<"Enter account no:";
    cin>>accountNo;
    cout<<"Enter balance:";
    cin>>balance;
  }
  void display()
 {
    cout<<"Name:"<<Account_Holder<<endl;
    cout<<"type:"<<Account_type<<endl;
    cout<<"Account no:"<<endl;
    cout<<"Balance:"<<balance;
 }
 void withdraw()
 {  int money;
    cout<<"How much you want to withdraw:";
    cin>>money;
    balance=balance-money;

 }

 void deposit()
 {
    int money1;
    cout<<"how much you want to deposit:";
    cin>>money1;

    balance=balance+money1;

 }

};

int main()
{
    accounts s;
    s.getAccountInformation();
    s.deposit();
    s.display();
    s.withdraw();
    s.display();

}