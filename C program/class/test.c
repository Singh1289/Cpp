// Min_function //

#include <stdio.h>
int max(int, int, int);

int main()
{
    int a, b, c, temp;
    printf("\n enter the numbers : ");
    scanf(" %d", &a);
    printf("\n enter the numbers : ");
    scanf(" %d", &b);
    printf("\n enter the numbers : ");
    scanf(" %d", &c);
    temp = max(a, b, c);
    printf("\n min is : %d ", temp);

    return 0;
}

int min(int x, int y, int z)
{
    if ((x < y) && (x < z))
        return x;
    if ((y < x) && (y < z))
        return y;
    else
        return z;
}