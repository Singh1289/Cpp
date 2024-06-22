// fun_Armstrong //

#include <stdio.h>
void print_armstrong(int, int);

int main()
{
    int a = 100, b = 900;
    print_armstrong(a, b);

    return 0;
}

void print_armstrong(int a, int b)
{
    int i, j, c, t, sum = 0, o;

    for (i = a; i <= b; i++)
    {
        o = i;
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            t = o % 10; // 1 5 3
            sum = sum + t * t * t;
            o = o / 10;
        }
        // printf("\n sum = %d   i = %d", sum, i);
        if (sum == i)
        {
            printf("  %d", sum);
        }
    }

    return;
}