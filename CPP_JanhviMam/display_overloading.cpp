#include <iostream>
using namespace std;

void display(char[]);
void display(char[], char[]);

int main()
{
    char s[10] = "Prudent";
    char s1[10] = "Academy";
    display(s);
    display(s, s1);
    return 0;
}

void display(char a[])
{
    for (int i = 0; i < 10; i++)
        cout << a[i];

    cout << "\n";
}

void display(char a[], char b[])
{
    for (int i = 0; i < 10; i++)
        cout << a[i];

    cout << " ";
    for (int i = 0; i < 10; i++)
        cout << b[i];

    cout << "\n";
}
