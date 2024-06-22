/* accepts numbers continuously as long as the number is positive and prints the
sum of the given numbers.*/
#include <stdio.h>
int main()
{
    int sum = 0, a;

    do
    {
        printf("enter numbers : ");
        scanf("%d", &a);
        if (a >= 0)
        {
            sum += a;
        }

    } while (a >= 0);

    printf(" sum is : %d", sum);
    return 0;
}