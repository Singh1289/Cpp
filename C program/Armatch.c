/*accept an array of n elements and a number say key. Check whether key is present
in the array or not.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Range of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter value : ");
        scanf("%d", &arr[i]);
    }
    int key, k = 0;
    printf("Key is : ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            k = 1;
            break;
        }
    }
    k == 1 ? printf("Is in the list") : printf("Is not in the list");
    return 0;
}