// pattern_A_to_Z all in

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 24; i++)
    {
        cout << "\n";
        if (i <= 7)
        {
            // A
            for (j = 1; j <= 7; j++)
            {
                if (i == 1)
                {
                    if (j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 2)
                {
                    if (j == 3 || j == 5)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 3)
                {
                    if (j == 2 || j == 6)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 4)
                {
                    cout << "*";
                }
                if (i > 4)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << "  ";

            // B
            for (j = 1; j <= 5; j++)
            {
                if (i == 1 || i == 4 || i == 7)
                {
                    if (j == 5)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else
                {
                    if (j == 1 || j == 5)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // C
            for (j = 1; j <= 5; j++)
            {
                if (i == 1 || i == 7)
                {
                    if (j == 1 || j == 5)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i == 2 || i == 6)
                {
                    if (j == 1 || j == 5)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (2 < i && i < 6)
                {
                    if (j == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // D
            for (j = 1; j <= 6; j++)
            {
                if (i == 1 || i == 7)
                {
                    if (j == 6)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else
                {
                    if (j == 1 || j == 6)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // E
            for (j = 1; j <= 6; j++)
            {
                if (i == 1 || i == 7)
                {
                    cout << "*";
                }
                if (i == 4)
                {
                    if (j == 6)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i != 4 && i != 1 && i != 7)
                {
                    if (j == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // F
            for (j = 1; j <= 6; j++)
            {
                if (i == 1)
                {
                    cout << "*";
                }
                if (i == 4)
                {
                    if (j < 6)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i != 1 && i != 4)
                {
                    if (j == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // G
            for (j = 1; j <= 6; j++)
            {
                if (i == 1 || i == 7)
                {
                    if (j == 1 || j == 6)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i == 2 || i == 6)
                {
                    if (j == 1 || j == 6)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 5)
                {
                    if (j == 2 || j == 3)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i == 3 || i == 4)
                {
                    if (j == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // H
            for (j = 1; j <= 6; j++)
            {
                if (i == 4)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 1 || j == 6)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // I
            for (j = 1; j <= 7; j++)
            {
                if (i == 1 || i == 7)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
        if (i == 8)
        {
        }
        if (8 < i && i < 16)
        {
            // J
            for (j = 1; j <= 6; j++)
            {
                if (i == 9)
                {
                    if (j == 1)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i > 9 && i < 14)
                {
                    if (j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 14)
                {
                    if (j == 1 || j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 15)
                {
                    if (j == 2 || j == 3)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // K
            for (j = 1; j <= 5; j++)
            {
                if (j == 1)
                {
                    cout << "*";
                }
                else
                {
                    if (j + i == 14 || i - j == 10)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // L
            for (j = 1; j <= 6; j++)
            {
                if (i == 15)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // M
            for (j = 1; j <= 7; j++)
            {
                if (j == 1 || j == 7)
                {
                    cout << "*";
                }
                if (i < 12)
                {
                    if (i - j == 7 || i + j == 15)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << " ";
                }
            }

            cout << "  ";
            // N
            cout << "*";
            for (j = 1; j <= 5; j++)
            {
                if (i - j == 9)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << "*";

            cout << "  ";
            // O
            for (j = 1; j <= 6; j++)
            {
                if (i == 9 || i == 15)
                {
                    if (j == 1 || j == 6)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else
                {
                    if (j == 1 || j == 6)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // P
            cout << "*";
            for (j = 1; j <= 4; j++)
            {
                if (i == 9 || i == 12)
                {
                    if (j == 4)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else
                {

                    if (i < 12 && j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            cout << "  ";
            // Q
            for (j = 1; j <= 7; j++)
            {
                if (i == 9)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i == 15)
                {
                    if (j == 1)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i > 9 && i < 13)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 13 || i == 14)
                {
                    if (j == 1 || j == 7 || i - j == 8)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
        if (i == 16)
        {
            for (j = 1; j <= 66; j++)
            {
                if (j == 66)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        if (i == 17)
        {
        }

        if (18 <= i)
        {
            // R
            cout << "*";
            for (j = 1; j <= 4; j++)
            {
                if (i == 18 || i == 21)
                {
                    if (j == 4)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                else
                {

                    if ((i < 21 && j == 4) || (i - j == 20))
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            // S
            cout << "  ";
            for (j = 1; j <= 5; j++)
            {
                if (i == 18 || i == 21 || i == 24)
                {
                    if (j == 1 || j == 5)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i == 19 || i == 23)
                {
                    if (j == 1 || j == 5)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 20)
                {
                    if (j == 1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 22)
                {
                    if (j == 5)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            // T
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (i == 18)
                {
                    cout << "*";
                }
                else
                {
                    if (j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            // U
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (i == 24)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << " ";
                    }
                    else
                    {
                        cout << "*";
                    }
                }
                if (i < 24)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            // V
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (i <= 21)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 23 || i == 22)
                {
                    if (i - j == 20 || i + j == 28)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 24)
                {
                    if (j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            // W
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (j == 1 || j == 7)
                {
                    cout << "*";
                }
                if (i > 21)
                {
                    if (i - j == 18 || i + j == 25)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << " ";
                }
            }

            // X
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (i - j == 17 || i + j == 25)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }

            // Y
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (i <= 19)
                {
                    if (j == 1 || j == 7)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i == 21 || i == 20)
                {
                    if (i - j == 18 || i + j == 26)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                if (i > 21)
                {
                    if (j == 4)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }

            // Z
            cout << "  ";
            for (j = 1; j <= 7; j++)
            {
                if (i == 18 || i == 24)
                {
                    cout << "*";
                }
                else
                {
                    if (i + j == 25)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
    }

    return 0;
}
