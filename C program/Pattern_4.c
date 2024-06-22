// Pattern_4 //
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

        printf("|");
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("|");
        printf("\n");
    }
    return 0;
}
/*
      i=1   ....|*|  
      i=2   ...|**|
      i=3   ..
*/