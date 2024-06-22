#include <stdio.h>

void b_to_d(int n)
{
    int p = 0, q = 1;
    while (n > 0)
    {
        int r = n % 10;
        p = p + q * r;
        q = q * 2;
        n = n / 10;
    
    }
    printf("value is : %d\n", p);
}

int main()
{
    int n, p;
    printf("enter no. :");
    scanf("%d\n", &n);
    b_to_d(n);
    
    return 0;
}