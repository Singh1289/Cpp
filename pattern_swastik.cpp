// Swastik

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        cout << "\n";
        for (j = 1; j <= 9; j++)
        {
            if (i == 1)
            {
                if ((j == 1) || (j > 4))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if (i == 5)
            {
                cout << "* ";
            }
            if (i == 9)
            {
                if ((j == 9) || (j <= 5))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }

            if ((i >= 2) && (i <= 4))
            {
                if ((j == 1) || (j == 5))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            if ((i >= 6) && (i < 9))
            {

                if ((j == 5) || (j == 9))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
    }

    return 0;
}