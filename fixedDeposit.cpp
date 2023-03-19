#include <iostream>
using namespace std;
class fixeddeposit
{
private:
    int principal, time, roi;
    float ammount;

public:
    void input()
    {
        cout << "ENTER PRINCIPAL : ";
        cin >> principal;
        cout << "ENTER TIME : ";
        cin >> time;
        cout << "ENTER RATE OF INTEREST : ";
        cin >> roi;
    }
    void display()
    {
        ammount = principal + (principal * roi * time * 0.01);
        cout << "AMMOUNT IS : " << ammount << endl;
    }
    fixeddeposit()
    {
        principal = 0;
        time = 0;
        roi = 0;
        ammount = 0.0;
    }
    fixeddeposit(int p, int t, int r, float a)
    {
        principal = p;
        time = t;
        roi = r;
        ammount = a;
    }
    fixeddeposit(const fixeddeposit &fd)
    {
        principal = fd.principal;
        time = fd.time;
        roi = fd.roi;
        ammount = fd.ammount;
    }
};
int main()
{
    fixeddeposit fd2;
    fd2.input();
    fd2.display();
    return 0;
}