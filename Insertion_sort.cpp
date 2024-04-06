// Insertion sort

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
    int temp, n = 10, i, j;
    int pos, min;
    // cout << "\nSize of array :";
    // cin >> n;
    // int a[n];
    // cout << "enter value : ";
    // for (i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    int a[10] = {12, 45, 3, 48, 9, 85, 48, 33, 10, 50};
    for (i = 0; i < n - 1; i++)
    {

        for (j = i + 1; ((a[j] < a[j - 1]) && j > 0); j--)
        {
            swap(&a[j], &a[j - 1]);
        }
        // cout << a[i] << " " << a[pos] << " " << pos << "\n";
    }

    // to print sorted array
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\n";

    return 0;
}