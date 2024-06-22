// fun_even_sum //

#include <stdio.h>
int even_sum(int *);

int main()
{
    int s, k;
    int a[10] = {11, 12, 13, 14, 15, 20, 17, 18, 19, 20};

    s = even_sum(a);

    printf("\nSum of even nos.: %d ", s);
    return 0;
}

int even_sum(int *z)
{
    int i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        if (z[i] % 2 == 0)
        {
            sum += z[i];
        }
    }
    return sum;
}