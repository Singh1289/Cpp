/* accept n numbers in an array and display the largest and smallest number. Using
these values, calculate the range of elements in the array.*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter range of an array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter value : ");
        scanf("%d", &a[i]);
    }
    int large = a[0];
    int small = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    int range = large - small;
    printf("larger value is : %d\n", large);
    printf("smaller value is : %d\n", small);
    printf("Range is : %d\n", range);
    return 0;
}