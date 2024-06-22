/* WAP to check a number 1<=n<=9 if yes then print number as one for 1, two for 2, and so on
greater than 9 then print greater than 9 */

#include "iostream"
using namespace std;

int main()
{
    int a;
    char numbers[10][6] = {".", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "\n Enter a number : ";
    cin >> a;
    if (a > 0)
    {
        if (a < 10)
        {
            cout << "\n: " << numbers[a][2] << " :\n";
        }
        else
            cout << "\nNumber is greater then 9.";
    }
    else
        cout << "\nNumber is negative or zero..!!";

    return 0;
}
