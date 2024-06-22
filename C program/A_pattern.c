// A_pattern //
#include <stdio.h>
int main()
{
    int i, j;
    printf("     *\n");
    for (i = 1; i <= 5; i++)
    {

        for (j = 5; j > i; j--)
        {
            printf(" ");
        }
        if (i != 3)
        {
            for (j = 1; j <= (2 * i - 1); j++)
            {
                printf("*");
                for (j = 1; j <= (2 * i - 1); j++)
                {
                    printf(" ");
                }
                printf("*");
            }
        }
        else
        {
            for (j = 1; j <= 4; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}