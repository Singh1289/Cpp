#include <iostream>
using namespace std;

void alphabet(int i, char c)
{
    int j;

    switch (c)
    {
    case 'A': // A
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
        break;
    case 'B':
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
        break;

    case 'C':
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
        break;

    case 'D':
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
        break;

    case 'E':
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
        break;

    case 'F':
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
        break;

    case 'G':
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
        break;

    case 'H':
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
        break;

    case 'I':
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
        cout << "  ";
        break;

    case 'J':
        for (j = 1; j <= 6; j++)
        {
            if (i == 1)
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
            if (i > 1 && i < 6)
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
            if (i == 6)
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
            if (i == 7)
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
        break;

    case 'K':
        for (j = 1; j <= 5; j++)
        {
            if (j == 1)
            {
                cout << "*";
            }
            else
            {
                if (j + i == 6 || i - j == 2)
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
        break;

    case 'L':
        for (j = 1; j <= 6; j++)
        {
            if (i == 7)
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
        break;

    case 'M':
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7)
            {
                cout << "*";
            }
            if (i < 4)
            {
                if (i - j == -1 || i + j == 7)
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
        break;

    case 'N':
        cout << "*";
        for (j = 1; j <= 5; j++)
        {
            if (i - j == 1)
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
        break;

    case 'O':
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
        break;

    case 'P':
        cout << "*";
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || i == 4)
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

                if (i < 4 && j == 4)
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
        break;

    case 'Q':
        for (j = 1; j <= 7; j++)
        {
            if (i == 1)
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
            if (i == 7)
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
            if (i > 1 && i < 5)
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
            if (i == 5 || i == 6)
            {
                if (j == 1 || j == 7 || i - j == 0)
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
        break;

    case 'R':
        cout << "*";
        for (j = 1; j <= 4; j++)
        {
            if (i == 1 || i == 4)
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

                if ((i < 4 && j == 4) || (i - j == 3))
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
        break;

    case 'S':
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 4 || i == 7)
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
            if (i == 3)
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
            if (i == 5)
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
        cout << "  ";
        break;

    case 'T':
        for (j = 1; j <= 7; j++)
        {
            if (i == 1)
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
        cout << "  ";
        break;

    case 'U':
        for (j = 1; j <= 7; j++)
        {
            if (i == 7)
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
            if (i < 7)
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
        break;

    case 'V':
        for (j = 1; j <= 7; j++)
        {
            if (i <= 4)
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
            if (i == 6 || i == 5)
            {
                if (i - j == 3 || i + j == 11)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (i == 7)
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
        cout << "  ";
        break;

    case 'W':
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7)
            {
                cout << "*";
            }
            if (i > 4)
            {
                if (i - j == 1 || i + j == 9)
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
        break;

    case 'X':
        for (j = 1; j <= 7; j++)
        {
            if (i - j == 0 || i + j == 8)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "  ";
        break;

    case 'Y':
        for (j = 1; j <= 7; j++)
        {
            if (i <= 2)
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
            if (i == 3 || i == 4)
            {
                if (i - j == 1 || i + j == 9)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            if (i > 4)
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
        cout << "  ";
        break;

    case 'Z':
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7)
            {
                cout << "*";
            }
            else
            {
                if (i + j == 8)
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
        break;

    default:
        break;
    }
};
