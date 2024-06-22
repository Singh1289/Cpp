/* accept n numbers from the user and store them in an array. Then sort the array in
descending order and display it.*/

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
    
return 0;
}