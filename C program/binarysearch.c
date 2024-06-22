// Binary search  but data should be sorted/ arranged manner.

#include <stdio.h>

int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}

int main()
{
    int n;
    printf("enter array range : ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter value : ");
        scanf("%d", &arr[i]);
    }

    int k;
    printf("enter key : ");
    scanf("%d", &k);

    printf("%d", binarysearch(arr, n, k));
    return 0;
}