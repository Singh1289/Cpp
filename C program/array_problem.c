// input- 3456  get output- three four five six //

#include <stdio.h>
int reverse(int);
int main()
{
    char digit[10][6] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int x, y, rev;
    printf("enter number : ");
    scanf(" %d", &x);
    rev = reverse(x);
    while (rev > 0)
    {
        y = rev % 10;
        printf(" %s", digit[y]);
        rev = rev / 10;
    }
    return 0;
}
int reverse(int n)
{
    int rev = 0, a;
    while (n > 0)
    {
        a = n % 10;
        rev = rev * 10 + a;
        n = n / 10;
    }
    return rev;
}