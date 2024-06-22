#include <iostream>

using namespace std;

int main()
{
    int i, j, k;
    while (true)
    {
        cout << "\nEnter odd number: ";
        cin >> k;
        if (k % 2 != 0)
            break;
        cout << "\nTry Again..!!";
    }

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
                if (j - i == 2 * k - (k / 2) || i + j == k + (k / 2) - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
    }

    return 0;
}
