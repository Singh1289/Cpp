// menu driven program with sub menu //

#include <iostream>
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

        switch (num)
        {
        case 1:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|      ~ STARTERS ~      |";
                cout << "\n|a : Vada paav       12/-|";
                cout << "\n|b : Samosa          10/-|";
                cout << "\n|c : kachori         18/-|";
                cout << "\n|d : Paneer tikka    70/-|";
                cout << "\n|e : Paneer pakode   42/-|";
                cout << "\n|f : Back to main menu   |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nAnything else you want : ";
                cin >> ch;
                if ((ch >= 'a') && (ch <= 'e'))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (ch)
                {
                case 'a':
                    total = total + (quantity * 12);
                    break;
                case 'b':
                    total = total + (quantity * 10);
                    break;
                case 'c':
                    total = total + (quantity * 18);
                    break;
                case 'd':
                    total = total + (quantity * 70);
                    break;
                case 'e':
                    total = total + (quantity * 42);
                    break;
                case 'f':
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (ch != 'f');

            break;
        case 2:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|    ~ COLD DRINKS ~     |";
                cout << "\n|a : Coke            20/-|";
                cout << "\n|b : Sprite          19/-|";
                cout << "\n|c : Pepsi           17/-|";
                cout << "\n|d : Red bull        40/-|";
                cout << "\n|e : Lassi           25/-|";
                cout << "\n|f : Back to main menu   |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nAnything else you want : ";
                cin >> ch;
                if ((ch >= 'a') && (ch <= 'e'))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (ch)
                {
                case 'a':
                    total = total + (quantity * 20);
                    break;
                case 'b':
                    total = total + (quantity * 19);
                    break;
                case 'c':
                    total = total + (quantity * 17);
                    break;
                case 'd':
                    total = total + (quantity * 40);
                    break;
                case 'e':
                    total = total + (quantity * 25);
                    break;
                case 'f':
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (ch != 'f');

            break;
        case 3:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|     ~ HOT DRINKS ~     |";
                cout << "\n|a : Tea ------------11/-|";
                cout << "\n|b : Coffee ---------24/-|";
                cout << "\n|c : Hot chocolate --45/-|";
                cout << "\n|d : Back to main menu   |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nAnything else you want : ";
                cin >> ch;
                if ((ch >= 'a') && (ch <= 'c'))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (ch)
                {
                case 'a':
                    total = total + (quantity * 11);
                    break;
                case 'b':
                    total = total + (quantity * 24);
                    break;
                case 'c':
                    total = total + (quantity * 45);
                    break;
                case 'd':
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (ch != 'd');

            break;
        case 4:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|      ~ MAIN COURSE ~      |";
                cout << "\n|a : Punjabi Thali     150/-|";
                cout << "\n|b : Rajasthani Thali  140/-|";
                cout << "\n|c : Gujarati Thali    145/-|";
                cout << "\n|d : Chole Bhature      90/-|";
                cout << "\n|e : Todays Special     80/-|";
                cout << "\n|f : Back to main menu      |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nAnything else you want : ";
                cin >> ch;
                if ((ch >= 'a') && (ch <= 'e'))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (ch)
                {
                case 'a':
                    total = total + (quantity * 150);
                    break;
                case 'b':
                    total = total + (quantity * 140);
                    break;
                case 'c':
                    total = total + (quantity * 145);
                    break;
                case 'd':
                    total = total + (quantity * 90);
                    break;
                case 'e':
                    total = total + (quantity * 80);
                    break;
                case 'f':
                    break;
                default:
                    cout << "\n~~~~  Any Thing Else  ~~~~";
                    break;
                }
            } while (ch != 'f');

            break;
        case 5:
            do
            {
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n|        ~ DESERTS ~        |";
                cout << "\n|a : Ice cream          22/-|";
                cout << "\n|b : Gulab jamun        17/-|";
                cout << "\n|c : Ras Malai          35/-|";
                cout << "\n|d : Mung dal ka halwa  37/-|";
                cout << "\n|e : Ice cream + G J    41/-|";
                cout << "\n|f : Back to main menu      |";
                cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
                cout << "\n\nAnything else you want : ";
                cin >> ch;
                if ((ch >= 'a') && (ch <= 'e'))
                {
                    cout << "\n Number of Orders : ";
                    cin >> quantity;
                }
                switch (ch)
                {
                case 'a':
                    total = total + (quantity * 22);
                    break;
                case 'b':
                    total = total + (quantity * 17);
                    break;
                case 'c':
                    total = total + (quantity * 35);
                    break;
                case 'd':
                    total = total + (quantity * 37);
                    break;
                case 'e':
                    total = total + (quantity * 41);
                    break;
                case 'f':
                    break;
                default:
                    cout << "\n~~~~~  Any Thing Else  ~~~~~";
                    break;
                }
            } while (ch != 'f');

            break;
        case 6:
            break;
        default:
            cout << "\n~~~~~  Any Thing Else  ~~~~~";
            break;
        }
    } while (num != 6);
    cout << "\n   Total Bill   :  "<< total;
    cout << "\n\n~~~~ THANK YOU Visit Again ~~~~";
    cout << "\n\n";
    return 0;
}
