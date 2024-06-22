#include <stdio.h>
int main()
{
    int a, b, c;
    printf(" enter numbers : ");
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            c = i;
        }
    }
    printf("HCF is : %d", c);
    return 0;
}