// user define exception handling

// restricting the exception case
/*
A function can be restricted to throw only few exception, and if that function rise to throw
other then restricted exception then that exception can not be handled by its called function
and program crash occurs.

case 1 : without writing local exception handler => crash
case 2 : with writing local exception handler => No crash
*/

#include <iostream>
#include <cstring>
using namespace std;

class A
{
    char message[100];

public:
    A()
    {
        strcpy(message, "A error message");
    }
    char *get_message()
    {
        return message;
    }
};

class B : public A
{
    char message[100];

public:
    B()
    {
        strcpy(message, "B error message");
    }
    char *get_message()
    {
        return message;
    }
};

// restricting exception to A and B only
// this function is restricted to throw only exception A and B
int accept_positive_int() throw(A, B)
{
    int v;

    cout << "\n entered a positive value : ";
    cin >> v;

    if (v < 0)
        throw *(new A());

    if (v > 200)
        throw *(new B());
    try
    {
        if (v == 0) // this exception can not be handled by the called of this
            throw v;
        cout << "\n the enterred value is : " << v;
    }
    catch (int x)
    { // ... but can be handled local exception handler (catch block) case 2
        cout << "\n ZERO entered : " << x;
    }

    return v;
}

int main()
{
    cout << "\n ~~~~ Start ~~~~";
    try
    {
        cout << "\n The positive value entered is : " << accept_positive_int();
        cout << "\n ~~~~ the end ~~~~";
    }
    catch (B b)
    {
        cout << b.get_message() << "\n";
    }
    catch (A a)
    {
        cout << a.get_message() << "\n";
    }
    catch (int x)
    {
        cout << "\nvalue = " << x;
    }
    catch (...) // generic handler
    {
        cout << "\n In catch main ";
    }

    return 0;
}

// new is returning pointer  and in catch
