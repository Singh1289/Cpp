/* find number is prime or not */
#include <stdio.h>

int main()
{
    int n;
    int check = 0;
    printf("enter no. : ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            check = 1;
            break;
        }
    }
    check == 0 ? printf("Prime") : printf("Not Prime"); // ye ternary operator (?) same if else ki trah h yes ya no ke liye
    return 0;
}