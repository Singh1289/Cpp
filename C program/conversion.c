/* binary to decimal
   octal to decimal
   hexa to decimal and vice versa*/

#include <stdio.h>

int b_to_d(int n)
{
    int p = 0, q = 1; // q represent 2 power 0
    while (n > 0)
    {
        int r = n % 10;
        p = p + q * r;
        q = q * 2;
        n = n / 10;
    }
    return p;
}
int o_to_d(int n)
{
    int p = 0, q = 1;
    while (n > 0)
    {
        int r = n % 10;
        p = p + q * r;
        q = q * 8;
        n = n / 10;
    }
    return p;
}

int main()
{
    char option;
    int n;

    printf("~~ MENU ~~\n ");
    printf(" a) Binary to decimal \n ");
    printf(" b) Octal to decimal \n ");

    printf(" choose a option : ");
    scanf("%c", &option);

    switch (option)
    {
    case 'a':
        printf("enter no. in 0,1 form : ");
        scanf("%d", &n);
        printf(" Answer is : %d\n ", b_to_d(n));
        break;
    case 'b':
        printf("enter no. in 0,1 form : ");
        scanf("%d", &n);
        printf(" Answer is : %d\n ", o_to_d(n));
        break;
    default:
        printf("Please enter valid input. ~~ THANK YOU ~~");
        break;
    }
    return 0;
}