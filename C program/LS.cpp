#include <iostream>
using namespace std;

int LS(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter range : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter no. : ";
        cin >> arr[i];
    }
    int key;
    cout << "enter key : ";
    cin >> key;
    cout << LS(arr, n, key);

    return 0;
}