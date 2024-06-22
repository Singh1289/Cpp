// fun_count_odd //

#include <stdio.h>
int count_odd(int *);

int main()
{
    int s, k;
    int a[10] = {11, 12, 13, 14, 15, 20, 17, 18, 19, 23};

    s = count_odd(a);

    printf("\ncount of odd no. is : %d ", s);
    return 0;
}

int count_odd(int *z)
{
    int i, count = 0;
    for (i = 0; i < 10; i++)
    {
        if (z[i] % 2 != 0)
        {
            count += 1;
        }
    }
    return count;
}