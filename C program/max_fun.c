// Max function //

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
    printf("\n max is : %d ", temp);

    return 0;
}

int max(int x, int y, int z)
{
    if ((x > y) && (x > z))
        return x;
    if ((y > x) && (y > z))
        return y;
    else
        return z;

    // return ((x > y) && (x > z))? x: (y>z)? y:z;
}