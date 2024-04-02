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
        cout << "\n Name         : " << name;
        cout << "\n Account no.  : " << Acc_no;
        cout << "\n Account type : " << type;
        cout << "\n Balance      : " << balance;
    }

    void viewbalance()
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
    int get_acc()
    {
        return Acc_no;
    }
    // ~BankAcc()
    // {
    //     cout << "\nDestructor is called..!!";
    // }
};

int main()
{
    int num, i, count = 0, acc, bal, key;
    string nam, ty;
    BankAcc cust[10];
    do
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n|   ~ welcome to Bank ~    |";
        cout << "\n|1 : Add customer          |";
        cout << "\n|2 : View balance          |";
        cout << "\n|3 : Deposit money         |";
        cout << "\n|4 : Withdrawal            |";
        cout << "\n|5 : Detail by account no. |";
        cout << "\n|6 : Exit                  |";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n\nwhat would you like to do : ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "\nEnter name : ";
            cin >> nam;
            while (true)
            {
                cout << "\nAcc type SA/CA : ";
                cin >> ty;
                if (ty == "SA" || ty == "sa" || ty == "CA" || ty == "ca")
                {
                    break;
                }
                cout << "\nEnter a valid input.";
            }
            cout << "\nEnter Acc no.   : ";
            cin >> acc;
            cout << "\nOpening balance : ";
            cin >> bal;
            cust[count].init(acc, bal, nam, ty);
            cout << "\nAccount created successfully..!!\n";
            count++;
            break;
        case 2:
            cout << "\n Enter acc no. : ";
            cin >> key;
            for (i = 0; i < 10; i++)
            {
                if ((cust[i].get_acc()) == key)
                {
                    cust[i].viewbalance();
                    break;
                }
                else
                {
                    cout << "\n No such account..!!";
                    break;
                }
            }
            break;
        case 3:
            cout << "\n Enter acc no. : ";
            cin >> key;
            for (i = 0; i < 10; i++)
            {
                if ((cust[i].get_acc()) == key)
                {
                    cout << "\nEnter amount to be deposit : ";
                    cin >> bal;
                    cust[i].deposit(bal);
                    break;
                }
                else
                {
                    cout << "\n No such account..!!";
                    break;
                }
            }
            break;
        case 4:
            cout << "\n Enter acc no. : ";
            cin >> key;
            for (i = 0; i < 10; i++)
            {
                if ((cust[i].get_acc()) == key)
                {
                    cout << "\nEnter amount to be withdraw : ";
                    cin >> bal;
                    cust[i].withdraw(bal);
                    break;
                }
                else
                {
                    cout << "\n No such account..!!";
                    break;
                }
            }
            break;

        case 5:
            cout << "\n Enter acc no. : ";
            cin >> key;
            for (i = 0; i < 10; i++)
            {
                if (key == (cust[i].get_acc()))
                {
                    cust[i].display();
                    break;
                }
                else
                {
                    cout << "\n No such account..!!";
                    break;
                }
            }
            break;
        case 6:
            // for (i = 0; i < 10; i++)
            // {
            //     cust[i].display();
            //     cout << "\n";
            // }
            cout << "\n Thank you for banking with us.\n";
            break;
        default:
            cout << "\n Please choose valid option.\n";
        }
    } while (num != 6);

    return 0;
}