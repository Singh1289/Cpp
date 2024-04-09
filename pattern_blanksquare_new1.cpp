#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        cout << "\n";
        for (j = i; j <= 5; j++)
            cout << "*.";

        for (j = 1; j <= (4 * (i - 1)); j++) // 2
            cout << "@";

        for (j = i; j <= 5; j++)
            cout << ".*";
    }

    //________________________________________________________

    for (i = 4; i >= 1; i--)
    {
        cout << "\n";
        for (j = i; j <= 5; j++)
            cout << "* ";

        for (j = 1; j <= (4 * (i - 1)); j++)
            cout << " ";

        for (j = i; j <= 5; j++)
            cout << " *";
    }

    return 0;
}