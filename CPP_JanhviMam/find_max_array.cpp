// find max and min in array
#include <iostream>
using namespace std;

int main()
{
    int i, n, m;
    cout << "\nEnter size of array : ";
    cin >> n;
    int a[n];
    // input
    cout << "\nValues : ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    m = a[0];
    for (i = 1; i < n; i++)
    {
        if (m > a[i])
            m = a[i];
    }
    cout << "\n Min is : " << m;
    for (i = 1; i < n; i++)
    {
        if (m < a[i])
            m = a[i];
    }
    cout << "\n Max is : " << m;

    return 0;
}