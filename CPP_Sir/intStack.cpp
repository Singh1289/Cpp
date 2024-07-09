// Stack of integer with memory management
#include <iostream>
using namespace std;

class IntStack
{
protected:
    int top;
    int *arr;

public:
    IntStack()
    {
        top = -1;
        arr = new int[5];
    }
    IntStack(int a)
    {
        top = -1;
        arr = new int[a];
    }
    ~IntStack()
    {
        delete[] arr;
        cout << "Destructor is called..!!";
    }

    bool isFull()
    {
    }

    bool isEmpty()
    {
    }

    void push(int a)
    {
    }

    int pop()
    {
    }

    int peek()
    {
    }
};
