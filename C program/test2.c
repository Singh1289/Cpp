/* menu driven with sub list of menu */

#include "iostream"
using namespace std;

int main()
{
    int num, quantity, total = 0;
    char ch;
    do
    {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n|   ~ W E L C O M E ~    |";
        cout << "\n|1 : Starters            |";
        cout << "\n|2 : Cold Drinks         |";
        cout << "\n|3 : Hot drinks          |";
        cout << "\n|4 : Main course         |";
        cout << "\n|5 : Deserts             |";
        cout << "\n|6 : Get Bill            |";
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout << "\n\nwhat would you like to have : ";
        cin >> num;
        if ((num >= 1) && (num <= 5))
        {
            cout << "\n Number of Orders : ";
            cin >> quantity;
        }
        switch (num)
        {
        case 1:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|   ~ W E L C O M E ~    |";
                cout << "\n|1 : Starters            |";
                cout << "\n|2 : Cold Drinks         |";
                cout << "\n|3 : Hot drinks          |";
                cout << "\n|4 : Main course         |";
                cout << "\n|5 : Deserts             |";
                cout << "\n|6 : Get Bill            |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nwhat would you like to have : ";
                cin >> num;
                if ((num >= 1) && (num <= 5))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (num)
                {
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:
                    total = total + (quantity * 17);
                    break;
                case 6:
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (num != 6);
            break;
        case 2:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|   ~ W E L C O M E ~    |";
                cout << "\n|1 : Starters            |";
                cout << "\n|2 : Cold Drinks         |";
                cout << "\n|3 : Hot drinks          |";
                cout << "\n|4 : Main course         |";
                cout << "\n|5 : Deserts             |";
                cout << "\n|6 : Get Bill            |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nwhat would you like to have : ";
                cin >> num;
                if ((num >= 1) && (num <= 5))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (num)
                {
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:
                    total = total + (quantity * 17);
                    break;
                case 6:
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (num != 6);
            break;
        case 3:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|   ~ W E L C O M E ~    |";
                cout << "\n|1 : Starters            |";
                cout << "\n|2 : Cold Drinks         |";
                cout << "\n|3 : Hot drinks          |";
                cout << "\n|4 : Main course         |";
                cout << "\n|5 : Deserts             |";
                cout << "\n|6 : Get Bill            |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nwhat would you like to have : ";
                cin >> num;
                if ((num >= 1) && (num <= 5))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (num)
                {
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:
                    total = total + (quantity * 17);
                    break;
                case 6:
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (num != 6);
            break;
        case 4:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|   ~ W E L C O M E ~    |";
                cout << "\n|1 : Starters            |";
                cout << "\n|2 : Cold Drinks         |";
                cout << "\n|3 : Hot drinks          |";
                cout << "\n|4 : Main course         |";
                cout << "\n|5 : Deserts             |";
                cout << "\n|6 : Get Bill            |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nwhat would you like to have : ";
                cin >> num;
                if ((num >= 1) && (num <= 5))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (num)
                {
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:
                    total = total + (quantity * 17);
                    break;
                case 6:
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (num != 6);
            break;
        case 5:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|   ~ W E L C O M E ~    |";
                cout << "\n|1 : Starters            |";
                cout << "\n|2 : Cold Drinks         |";
                cout << "\n|3 : Hot drinks          |";
                cout << "\n|4 : Main course         |";
                cout << "\n|5 : Deserts             |";
                cout << "\n|6 : Get Bill            |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nwhat would you like to have : ";
                cin >> num;
                if ((num >= 1) && (num <= 5))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (num)
                {
                case 1:

                    break;
                case 2:

                    break;
                case 3:

                    break;
                case 4:

                    break;
                case 5:
                    total = total + (quantity * 17);
                    break;
                case 6:
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (num != 6);
            break;
        case 6:
            break;
        default:
            cout << "\n~~~~  Any Thing Else  ~~~~";
            break;
        }
    } while (num != 6);
    cout << "\n   Total Bill   :  " << total;
    cout << "\n\n~~~THANK YOU Visit Again~~~";
    cout << "\n\n";
    return 0;
}
