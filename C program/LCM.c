#include <stdio.h>
int main()
{
    int num1, num2, a, b;
    printf("enter nos : ");
    scanf(" %d", &num1);
    printf("enter nos : ");
    scanf(" %d", &num2);
    a = num1;
    b = num2;
    while (a != b)
    {
        if (a < b)
        {
            a = a + num1;
        }
        else
        {
            b = b + num2;
        }
    }
    printf("LCM is : %d", a);
    return 0;
}