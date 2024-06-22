#include <iostream>
using namespace std;

int main()
{
    int i, j, k;

    // for (i = 1; i < 6; i++)
    // {
    //     cout << "\n";
    //     for (j = 4; j >= i; j--)
    //         cout << " ";
    //     for (j = 1; j <= i; j++)
    //         cout << "@";
    // }
    // for (i = 1; i < 6; i++)
    // {
    //     cout << "\n";
    //     for (j = 4; j >= i; j--)
    //         cout << " ";
    //     for (j = 1; j <= i; j++)
    //         cout << "@";
    // }
    // //flip
    // for (i = 5; i >=1; i--)
    // {
    //     cout << "\n";
    //     for (j = 4; j >= i; j--)
    //         cout << " ";
    //     for (j = 1; j <= i; j++)
    //         cout << "@";
    // }

    // triangle

    // for (i = 1; i < 6; i++)
    // {
    //     cout << "\n";
    //     for (j = 4; j >= i; j--)
    //         cout << " ";
    //     for (j = 1; j <= (2 * i - 1); j++)
    //         cout << "@";
    // }

    // hollow diamond
    // for (i = 1; i < 9; i++) // row
    // {
    //     cout << "\n";
    //     for (j = 1; j <= 9; j++) // col
    //     {
    //         if (i <= 5)
    //         { // upper

    //             if ((j + i) == 6 || (j - i) == 4)
    //                 cout << "*";
    //             else
    //                 cout << ".";
    //         }
    //         else
    //         {
    //             // lower

    //             if ((j + i) == 14 || (i - j) == 4)
    //                 cout << "*";
    //             else
    //                 cout << ".";
    //         }
    //     }
    // }

    // triangle 01 01 01
    k = 11;
    for (i = 0; i < k; i++)
    {
        cout << "\n";
        for (j = 0; j < 3 * k; j++)
        {
            if (i < k / 2)
            {
                if (j - i == k / 2 || i + j == 2 * k + k / 2)
                    cout << "*";
                else
                    cout << " ";
            }
            if (i == k / 2)
            {
                if ((j >= k) && (j < 2 * k))
                    cout << " ";
                else
                    cout << "*";
            }
            if (i > k / 2)
            {
                if (j - i == k || i + j == k + (k / 2) - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
    }

    // int num;
    // cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     cout << "\n";
    //     if (i < (num / 2 + 1))
    //     {
    //         for (int j = 1; j <= (num / 2 + i - 1); j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //         for (int j = 1; j <= (2 * (num - i) + 1); j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     if (i == (num / 2 + 1))
    //     {
    //         for (int j = 1; j <= num; j++)
    //         {
    //             cout << "*";
    //         }
    //         for (int j = 1; j <= num; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= num; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     if (i > (num / 2 + 1))
    //     {
    //         for (int j = 1; j <= (num + num / 2 - i); j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //         for (int j = 1; j <= (2 * i - 1); j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    // }

    return 0;
}