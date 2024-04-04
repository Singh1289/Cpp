#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        cout << "\n";
        // if (i  1)
        // {
        for (j = 1; j <= ((2 * i) - 2); j++)
            cout << " ";
        // }
        for (j = 5; j >= (2 * i - 1); j--)
            cout << "* ";
    }
    //_______________________________________________________

    for (i = 3; i >= 1; i--)
    {
        cout << "\n";
        // if (i > 1)
        //  {
        for (j = ((2 * i) - 2); j >= 1; j--)
            cout << " ";
        // }
        for (j = 5; j >= (2 * i - 1); j--)
            cout << "* ";
    }
    return 0;
}