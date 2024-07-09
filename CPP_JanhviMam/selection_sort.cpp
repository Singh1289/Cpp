// SELECTION SORTING
#include <iostream>
#include <limits.h>
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
    int pos, min;
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
        min = INT_MAX;
        for (j = 1 + i; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                pos = j;
            }
        }
        // cout << a[i] << " " << a[pos] << " " << pos << "\n";
        if (a[i] > a[pos])
            swap(&a[i], &a[pos]);
    }

    // to print sorted array
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}