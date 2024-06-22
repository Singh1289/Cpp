/* to accept an integer array and an integer say num and counts the occurrences of the
num in the array.*/

#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("enter range of an array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter value : ");
        scanf("%d", &a[i]);
    }
    int key;
    printf("Key is : ");
    scanf("%d", &key);
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            count++;
        }
    }
    printf("count is : %d", count);
    return 0;
}