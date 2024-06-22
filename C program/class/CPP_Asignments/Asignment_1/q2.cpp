#include <iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        this->day = 0;
        this->month = 0;
        this->year =0;
    }
    void printDateOnConsole()
    {
        printf("\nDate: %02d/%02d/%04d\n", this->day, this->month, this->year);
    }
    void acceptDateFromConsole()
    {
        cout << "enter day : ";
        cin >> this->day;
        cout << "enter month : ";
        cin >> this->month;
        cout << "enter year : ";
        cin >> this->year;
    }
    bool isLeapYear()
    {
        ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0)) ? printf("it is a leap year\n") : printf("it is not a leap year\n");
    }
};
// struct Date
// {
  //  private:
//     int day;
//     int month;
//     int year;

// public:
//     void initDate()
//     {
//         this->day = 0;
//         this->month = 0;
//         this->year =0;
//     }
//     void printDateOnConsole()
//     {
//         printf("\nDate: %02d/%02d/%04d\n", this->day, this->month, this->year);
//     }
//     void acceptDateFromConsole()
//     {
//         cout << "enter day : ";
//         cin >> this->day;
//         cout << "enter month : ";
//         cin >> this->month;
//         cout << "enter year : ";
//         cin >> this->year;
//     }
//     bool isLeapYear()
//     {
//         ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 400 == 0)) ? printf("it is a leap year\n") : printf("it is not a leap year\n");
//     }
// };
int main()
{
    Date d1;
    int choice;
    while (1)
    {
        cout << "0.initiate date\n1.accept date from console\n2.print data\n3.check wether it is a leap year or not\n4.Exit\n";
        cout << "enter your choice : \n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            d1.initDate();
            break;
        case 2:
            d1.printDateOnConsole();
            break;
        case 1:
            d1.acceptDateFromConsole();
            break;
        case 3:
            d1.isLeapYear();
            break;
        case 4:
            cout << "Thank You!!!";
            return 0;
        default:
            cout << "invalid choice!!\n";
        }
    }
}