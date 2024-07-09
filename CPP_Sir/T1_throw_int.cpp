#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "\nEnter input value : ";
    cin >> input;
    try
    {
        if (input == 0)
            throw 1.2;

        if (input < 10)
            throw 101;

        if (input > 30)
            throw 202;

        cout << "\n you have entered : " << input;
    }
    catch (int a)
    {
        if (a < 10)
            cout << "\nError no: " << a << " (value is less than 10)" << "\n";
        else
            cout << "\nError no: " << a << " (value is more than 10)" << "\n";
    }
    catch (double a)
    {
        cout << "\nError no: 404 (value is equal to 0)" << "\n";
    }
    cout << "~~ End ~~";
    return 0;
}