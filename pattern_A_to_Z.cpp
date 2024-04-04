// pattern_A_to_Z

#include <iostream>
using namespace std;

/*
int main() // A
{
    int i, j;
    cout << "     *\n";
    for (i = 1; i <= 5; i++)
    {

        for (j = 5; j > i; j--)
        {
            cout << " ";
        }

        if (i == 3)
        {
            for (j = 1; j <= 4; j++)
                cout << "* ";
        }
        else
        {
            cout << "*";
            for (j = 1; j <= (2 * i - 1); j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
}


int main() // B
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 5) || (i == 9))
        {
            cout << "*";
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


int main() // C
{
    int i, j;

    for (i = 1; i <= 9; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 9))
        {
            cout << " ";
            for (j = 1; j <= 3; j++)
                cout << " *";
        }
        else
        {
            if ((i == 2) || (i == 8))
            {
                cout << "*";
                for (j = 1; j <= 7; j++)
                    cout << " ";

                cout << "*";
            }
            else
            {
                cout << "*";
            }
        }
    }
    return 0;
}


int main() // D
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 9))
        {
            cout << "*";
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



int main() // E
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 5) || (i == 9))
        {
            cout << "*";
            for (j = 1; j <= 3; j++)
                cout << " *";
        }
        else
        {
            cout << "*";
            for (j = 1; j <= 7; j++)
                cout << " ";

            // cout << "*";
        }
    }
    return 0;
}



int main() // G
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 7))
        {
            cout << " ";
            for (j = 1; j <= 3; j++)
                cout << " *";
        }
        else
        {
            if ((i == 2) || (i == 6))
            {
                cout << "*";
                for (j = 1; j <= 7; j++)
                    cout << " ";

                cout << "*";
            }
            else
            {
                cout << "*";
                if (i == 5)
                {
                    cout << "  ";
                    for (j = 1; j <= 3; j++)
                        cout << " *";
                }
            }
        }
    }
    return 0;
}



int main() // H
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        cout << "\n";
        if (i == 4)
        {

            for (j = 1; j <= 5; j++)
                cout << "* ";
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


int main() // I
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        cout << "\n";
        if ((i == 1) || (i == 7))
        {
            for (j = 1; j <= 5; j++)
                cout << "* ";
        }
        else
        {
            for (j = 1; j <= 4; j++)
                cout << " ";

            cout << "*";
        }
    }
    return 0;
}
*/
int main() // J
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        cout << "\n";
        if (i == 1)
        {
            for (j = 1; j <= 7; j++)
                cout << "* ";
        }
        else
        {
            if (i == 7)
            {
                cout << " ";
                for (j = 1; j <= 3; j++)
                    cout << "* ";
            }
            else if (i == 6)
            {
                cout << "*";
                for (j = 1; j <= 5; j++)
                    cout << " ";

                cout << "*";
            }
            else
            {
                for (j = 1; j <= 6; j++)
                    cout << " ";

                cout << "*";
            }
        }
    }
    return 0;
}