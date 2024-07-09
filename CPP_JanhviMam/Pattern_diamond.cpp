#include <iostream>

using namespace std;

int main()
{
    int i, j, start = 3, last = 9;
    bool isrev = 0;

    for (i = 1; i <= 8; i++)
    {
        // cout<<isrev<<"   "<<start<< "  "<<last;
        for (j = 1; j <= 11; j++)
        {
            //  cout<<start<<"  "<<last;
            if (i == 1)
            {
                if ((j >= start) && (j <= last))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if ((j == start) || (j == last))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
        if (i == 3)
        {
            // cout<<i<<"chnages is rev";
            isrev = 1;
        }
        if (isrev == 1)
        {
            start = start + 1;
            last = last - 1;
        }
        else
        {
            last = last + 1;
            start = start - 1;
        }
    }
    return 0;
}
