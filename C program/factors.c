#include <stdio.h>

int main()
{
    int a;
    printf(" enter numbers : ");
    scanf("%d", &a);

    if (a <= 0)
    {
        printf(" enter positive number\n");
    }
    else
    {
        for (int i = 1; i < a; i++)
        {
            if (a % i == 0)
            {
                printf("%d \t", i);
            }
        }
    }
    printf("\n");
    return 0;
}