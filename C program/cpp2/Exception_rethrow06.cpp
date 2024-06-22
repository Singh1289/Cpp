// user define exception handling

// whenever a derived class is involved in the exception handling mechanism
// then the catch block having derived type should appear before its base class catch block.

// rethrow

#include <iostream>
#include <cstring>
using namespace std;

class A
{
    char message[100];

public:
    A()
    {
        strcpy(message, "Error in A");
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
        strcpy(message, "Error in B");
    }
    char *get_message()
    {
        return message;
    }
};

int accept_positive_int()
{
    int v;

    try
    {
        // resp = 'N';
        cout << "\n Enter a positive value : ";
        cin >> v;

        if (v < 0)
            throw *(new A()); 

        if (v > 200)
            throw *(new B());
        cout << "\n the entered value is : " << v;
    }    
    catch (A a)
    {
        if( strcpy(a.get_message(),"A new error message")==0)
            throw;
        cout << a.get_message() << "\n";
    }
    catch (B b)
    {
        cout << b.get_message() << "\n";
    }
    return v;
}

int main()
{
    cout << "\n ~~~~ Start ~~~~";
    cout << "\n The positive value entered is : " << accept_positive_int();
    cout << "\n ~~~~ the end ~~~~";
    return 0;
}