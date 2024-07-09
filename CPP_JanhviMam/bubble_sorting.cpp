// BUBBLE SORTING
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int temp, n, i, j;
    bool flag;
    cout << "\nSize of array :";
    cin >> n;
    int a[n];
    cout << "enter value : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++)
    {
        flag =true;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {    swap(&a[j], &a[j + 1]);
                flag =false; }
        }
        if(flag==true) break;
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}