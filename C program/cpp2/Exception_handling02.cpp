// Exception handling  - normal case

#include <iostream>
using namespace std;
void function(int n)
{
    int x = 100, y;
    int arr[] = {100, 200, 300, 400};
    // exception
    y = n;
    try
    {
        cout << "\nentered in try block.";
        if (y == 0)
            throw 10;
        cout << "\nvalue = " << x * y;
        if (n < 4)
            throw 1.0 * n;
        cout << "\nArray at n = " << arr[n];
    }
    catch (int e)
    {
        cout << "\nNow, in catch block, e =  " << e;
    }
    // catch (double e)
    // {
    //    cout << "\n now, in second catch block ";
    //     cout << "\n Array Index out of bound : " << (int)e;
    // }
    catch (...) // generic catch handling all exception
    {
        cout << "\nNow, you are safe crash is avoided....\n";
    }
}
int main()
{
    cout << "\n ~~~ start ~~~";
    function(0); // error case
    function(1);
    function(2);
    function(4); // error case
    cout << "\n~~~~ the end ~~~~";
    return 0;
}