#include <iostream>
#include <ctime>
using namespace std;

class Date
{
    // private - default
    int dd, mm, yy;

public:
    Date()
    {
        // cout << "\n Default constructor is called..";
        dd = 1;
        mm = 1;
        yy = 1990;
    }

    Date(int a, int b, int c)
    {

        dd = a;
        mm = b;
        yy = c;
    }

    void operator++(int x)
    {
        if (mm == 12)
        {

            mm = 1;
            yy++;
        }
        else
        {
            mm++;
        }
    }
    void operator--(int x)
    {
        if (mm == 1)
        {
            mm = 12;
            yy++;
        }
        else
        {
            mm--;
        }
    }
    bool operator>(Date b)
    {
        if (dd > b.dd)
        {
            if (mm > b.mm)
            {
                if (yy > b.yy)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (yy < b.yy)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        }
        else
        {
            if (mm > b.mm)
            {
                if (yy > b.yy)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (yy < b.yy)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        }
    }
    bool operator<(Date b)
    {
        if (dd > b.dd)
        {
            if (mm > b.mm)
            {
                if (yy > b.yy)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                if (yy < b.yy)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            if (mm > b.mm)
            {
                if (yy > b.yy)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
            else
            {
                if (yy < b.yy)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    bool operator==(Date b)
    {
        if (dd == b.dd)
        {
            if (mm == b.mm)
            {
                if (yy == b.yy)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    bool operator~()
    {
        time_t now = time(0);

        // Convert the time_t value to a tm struct.
        tm *ltm = localtime(&now);
        // Get the current date.
        int year = ltm->tm_year + 1900;
        int month = ltm->tm_mon + 1;
        int day = ltm->tm_mday;
        return (this->dd == day && this->mm == month && this->yy == year) ? true : false;
    }

    void set_Date(int dd, int mm, int yy)
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    void operator=(Date b)
    {
        this->dd = b.dd;
        this->mm = b.mm;
        this->yy = b.yy;
    }
    void display()
    {
        cout << "\n"
             << dd << " / " << mm << " / " << yy;
    }
    Date operator+=(int x)
    {
        Date b(this->dd, this->mm, this->yy);
        b = operator+(b, x);
        return b;
    }
    Date operator-=(int x)
    {
        Date b(this->dd, this->mm, this->yy);
        b = operator-(b, x);
        return b;
    }
    friend Date operator+(Date d, int x);
    friend Date operator-(Date d, int x);
    friend Date operator+(int x, Date d);
    friend Date operator-(int x, Date d);
};
int checkDays(int x, int y)
{
    int temp;
    switch (x)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        temp = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        temp = 30;
        break;
    case 2:
        temp = (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? 29 : 28;
        break;
    }
    return temp;
}
Date operator+(Date d, int x)
{
    int ma, diff;
    int day = d.dd;
    int month = d.mm;
    int year = d.yy;

    while (x != 0)
    {
        ma = checkDays(month, year);
        int diff = ma - day;    // 22-8-2024
        if (month == 12 && diff < x)
        {
            year++;
            month = 1;
            day = 1;

            x = x - diff - 1;
        }
        else if (diff < x)
        {
            day = 1;
            month++;
            x = x - diff - 1;
        }
        else
        {
            day = day + x;
            x = 0;
        }
    }
    Date temp(day, month, year);
    return temp;
}

Date operator+(int x, Date d)
{
    int day = d.dd;
    int month = d.mm;
    int year = d.yy;
   // int count = 0;
    while (x != 0)
    {
        if (day > x) // 22>85
        {
            day -= x + count;
            x = 0;
        }
        else
        {

            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
            {
                month--; // 7
            }
            int days_in_month = checkDays(month, year);
            day += days_in_month; // =22+31
           // x--;
        }
       // count++; // 1 2 3
    }
    Date temp(day, month, year);
    return temp;
}

Date operator-(int x, Date d)
{
    int day = d.dd;
    int month = d.mm;
    int year = d.yy;
    // int count = 0;
    while (x != 0)
    {
        if (day > x) // 22>85
        {
            day -= x; //+ count;
            x = 0;
        }
        else
        {

            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
            {
                month--; // 7
            }
            int days_in_month = checkDays(month, year);
            day += days_in_month; // =22+31
            // x--;
        }
        // count++; // 1 2 3
    }
    Date temp(day, month, year);
    return temp;
}

Date operator-(Date d, int x)
{
    int day = d.dd;
    int month = d.mm;
    int year = d.yy;
    // int count = 0;
    while (x != 0)
    {
        if (day > x) // 22>85
        {
            day -= x; //+ count;
            x = 0;
        }
        else
        {

            if (month == 1)
            {
                month = 12;
                year--;
            }
            else
            {
                month--; // 7
            }
            int days_in_month = checkDays(month, year);
            day += days_in_month; // =22+31
            // x--;
        }
        // count++; // 1 2 3
    }
    Date temp(day, month, year);
    return temp;
}

int main()
{
    Date d1(22, 8, 2024), d2;
    // d1.display();
    // d2.display();
    // if (d1 > d2)
    // {
    //     cout << "\n D1 is :";
    //     d1.display();
    // }
    // else
    // {
    //     cout << "\n D2 is :";
    //     d2.display();
    // }

    d1.display();
    d2 = (295 - d1);
    d2.display();

    if (~d1)
    {
        cout << "\nmatched current date";
    }
    else
    {
        cout << "\nnot matched to current date";
    }

    return 0;
}