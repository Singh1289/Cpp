// Exception handling  - normal case

#include <iostream>
using namespace std;
void function(int n)
{
    int x = 100, y;

    // exception
    y = n;
    try
    {
        cout << "\nentered in try block.";
        if (y == 0)
            throw 10;
        cout << "\nvalue = " << x * y;
    }
    catch (double e)
    {
        cout << "\nNow, in catch block, e =  " << e;
    }
}
int main()
{
    cout << "\n ~~~ start ~~~";
    function(0);
    function(1);
    function(2);
    cout << "\n~~~~ the end ~~~~";
    return 0;
}