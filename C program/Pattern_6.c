// Pattern_6 //
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {

        for (j = 5; j > i; j--)
        {
            printf(".");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (i = 4; i >= 1; i--)
    {
        for (j = i; j < 5; j++)
        {
            printf(".");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}