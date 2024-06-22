// Pattern_1 //
#include <stdio.h>
int main()
{
    int i = 1, j;
    for (; i <= 5; i++)
    {

        for (j = 1; j <= 5; j++)
            printf("*");

        printf("\t");
        for (j = 1; j <= 5; j++)
            printf("*");

        printf("\n");
    }
    printf("\n %d", i);
    return 0;
}