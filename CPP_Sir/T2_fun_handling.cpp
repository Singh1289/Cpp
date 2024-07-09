#include <iostream>
using namespace std;

double function_convert(double a)
{
    double temp = 0;
    char ab;
    try
    {
        if (a == 0)
            throw 101;
        if (a < 50)
            throw 1.2;
        if (a > 100)
            throw ab;
        temp = (a * 8) / 15;
    }
    catch (int a)
    {
        cout << "\nError 101: Input is equal to zero";
    }
    catch (double a)
    {
        cout << "\nError 202: Input is less than 50";
    }
    catch (...)
    {
        cout << "\nError 303 : Input is more then 100";
    }

    return temp;
}
int main()
{
    double input;
    char a;
    while (true)
    {
        cout << "\nEnter speed in km/h : ";
        cin >> input;

        cout << "\n speed in m/sec is : " << function_convert(input);
        cout << "\nDo you want to continue (Y/N) : ";
        cin >> a;
        if (a == 'N' || a == 'n')
        {
            break;
        }
    }
}