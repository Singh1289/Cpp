// 2d array //

#include <stdio.h>
int main()
{
    int arr[3][4];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\n enter value : ");
            scanf(" %d", &arr[i][j]);
        }
    }
    printf("\n values are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\t%d", &arr[i][j]); // &arr[i][j] to print address
        }
        printf("\n");
    }
    printf("-------------------------------------------");
    printf("\n THE END ");
    return 0;
}