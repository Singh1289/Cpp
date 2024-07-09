#include <iostream>
using namespace std;

class Mystack
{
    int stack[10];
    int top;

public:
    Mystack()
    {
        top = -1;
    }

    class Overflow
    {
    };

    void push(int a)
    {
        if (top == 8) // Changed from 9 to 8
        {
            throw Overflow();
        }
        else
        {
            top++;
            stack[top] = a;
        }
    }

    class Underflow
    {
    };

    int pop()
    {
        if (top == -1)
        {
            throw Underflow();
        }
        else
        {
            int temp = stack[top];
            top--;
            return temp;
        }
    }
};

int main()
{
    Mystack test;
    int i = 0, n = 1, data;
    try
    {
        for (int i = 0; i < 11; i++)
            test.push(n += 1);
        test.push(n += 1);
    }
    catch (Mystack::Overflow &)
    {
        cout << "\nStack is full..!!";
    }
    try
    {
        for (int i = 0; i < 11; i++)
        {
            data = test.pop();
            cout << "\nItem is popped : " << data;
        }
    }
    catch (Mystack::Underflow &)
    {
        cout << "\nStack is empty..!!";
    }

    return 0;
}
