/*print n prime numbers */
#include <stdio.h>
int main()
{
    int n, k;
    printf("enter n : ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        for (k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                break;
            }
        }
        if (k == i) 
        {
            printf("%d\t", k);
        }
    }
    return 0;
}