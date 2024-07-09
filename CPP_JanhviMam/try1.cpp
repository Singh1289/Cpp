#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l;
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 5; j++)
        {
            cout << "*";
        }
        for (k = 0; k < (i * 2) + 1; k++)
        {
            cout << k;
        }
        for (l = i; l < 5; l++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}