#include <iostream>
using namespace std;

void convertToWords(int num)
{
    const char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 0 || num > 99999999)
    {
        cout << "Out of range";
        return;
    }

    if (num == 0)
    {
        cout << "Zero";
        return;
    }

    if (num >= 10000000)
    {
        cout << units[num / 10000000] << " Crore ";
        num %= 10000000;
    }

    if (num >= 100000)
    {
        cout << units[num / 100000] << " Lakh ";
        num %= 100000;
    }

    if (num >= 1000)
    {
        cout << convertToWords[num / 1000] << " Thousand ";
        num %= 1000;
    }

    if (num >= 100)
    {
        cout << units[num / 100] << " Hundred ";
        num %= 100;
    }

    if (num >= 20)
    {
        cout << tens[num / 10] << " ";
        num %= 10;
    }

    if (num >= 10)
    {
        cout << teens[num % 10] << " ";
        return;
    }

    cout << units[num];
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "In words: ";
    convertToWords(num);
    cout << endl;
    return 0;
}
