#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 5) || (i == 9))
        {
            cout << " ";
            for (j = 1; j <= 3; j++)
                cout << " *";
        }
        else
        {
            cout << "*";
            for (j = 1; j <= 7; j++)
                cout << " ";

            cout << "*";
        }
    }
    return 0;
}