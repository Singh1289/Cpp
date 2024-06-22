// linear search in array
#include <stdio.h>

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

    printf("%d", LS(arr, n, k));
    return 0;
}