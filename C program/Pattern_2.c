// Pattern_2 //
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
            printf("*");
    }

    for (i = 4; i >= 1; i--)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
            printf("*");
    }
    return 0;
}