// HCF_LCM //

#include <stdio.h>
int main()
{
    int a, b, hcf, lcm = 1;
    printf(" enter 1st number : "); // 18
    scanf(" %d", &a);
    printf(" enter 2nd number : "); // 12
    scanf(" %d", &b);
    for (int i = 1; ((i <= a) && (i <= b)); i++) // i= 1 ,2,3,6
    {
        if ((a % i == 0) && (b % i == 0))
        {
            hcf = i; // c= 1,2,3,   6
        }
    }
    printf("\nHCF is : %d", hcf);

    lcm = (a * b) / hcf;

    printf("\n LCM is :  %d", lcm);

    return 0;
}