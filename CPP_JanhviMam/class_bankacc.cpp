// class of bank account

#include <iostream>
using namespace std;

class BankAcc
{
    int balance;
    int Acc_no;
    string name;
    string type;

public:
    BankAcc()
    {
        name = "Unkown";
        type = "Null";
        Acc_no = 0;
        balance = 0;
    }
    BankAcc(int B, int A, string N, string T)
    {
        name = N;
        type = T;
        Acc_no = A;
        balance = B;
    }
    void display()
    {
        cout << "\n  Name   : " << name;
        cout << "\n Balance : " << balance;
    }
    void withdraw(int a)
    {
        if (balance == 0)
        {
            cout << "\n Account has zero balance.";
        }
        else
        {
            balance = balance - a;
        }
    }
    void deposit(int a)
    {
        balance = balance + a;
    }

    void init(int A, int B, string N, string T)
    {
        name = N;
        type = T;
        Acc_no = A;
        balance = B;
    }
    ~BankAcc()
    {
        cout << "\nDestructor is called..!!";
    }
};

int main()
{
    BankAcc c1, c2;
    c1.init(4096, 1000, "Ajay", "Saving");
    c1.display();
    c1.deposit(2500);
    c1.display();

    c1.withdraw(500);
    c1.display();

    c2.display();

    c2.withdraw(500);
    c2.display();

    return 0;
}