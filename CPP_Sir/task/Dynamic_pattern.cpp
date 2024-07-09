#include <iostream>
using namespace std;

class Print_pattern
{

        int row;
        int count;

public:
        Print_pattern()
        {
                row = 1;
                count = 1;
        }
        void set_row(int no)
        {
                row = no;
        }
        void pattern(int ch)
        {
                int i, j;
                ch = 1;
                switch (ch)
                {
                case 1:
                        for (i = 1; i <= row; i++)
                        {
                                cout << "\n";
                                for (j = 1; j <= i; j++)
                                        cout << "*";
                        }
                        // break;
                case 2:
                        for (i = 1; i <= row; i++)
                        {
                                cout << "\n";
                                count = i;
                                for (j = 1; j <= i; j++)
                                {
                                        cout << count;
                                        count++;
                                }
                        }
                        //  break;

                case 3:
                        for (i = 1; i <= row; i++)
                        {
                                cout << "\n";
                                for (j = i; j >= 1; j--)
                                        cout << j;
                        }
                        //  break;
                case 4:
                        for (i = 1; i <= row; i++)
                        {
                                cout << "\n";
                                for (j = row - 1; j >= i; j--)
                                        cout << " ";
                                for (j = i; j >= 1; j--)
                                        cout << j;
                        }
                        //  break;
                case 5:
                        for (i = 1; i <= row; i++)
                        {
                                cout << "\n";
                                for (j = 1; j <= i; j++)
                                        cout << j;
                        }
                        //   break;
                case 6:
                        for (i = 1; i <= row; i++)
                        {
                                cout << "\n";
                                count = i;

                                for (j = row - 1; j >= i; j--)
                                        cout << " ";
                                for (j = 1; j <= (2 * i - 1); j++)
                                {
                                        cout << count;
                                        (j < i) ? count++ : count--;
                                }
                        }
                        break;
                default:
                        break;
                }
        }
};

void pattern(int, int);

int main()
{
        int row, choice;
        Print_pattern abc;

        cout << "\n How many number of rows you want : ";
        cin >> row;
        abc.set_row(row);

        while (true)
        {
                cout << "\nWhich pattern you want choose (1-6) :";
                cin >> choice;
                if (choice >= 1 && choice <= 6)
                {
                        break;
                }
                else
                {
                        cout << "\n please choose between 1-6..!!";
                }
        }

        abc.pattern(choice);

        return 0;
}
