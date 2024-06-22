// Fibonacci_series //

#include <stdio.h>
int main()
{
  int a = 0, b = 1, n, temp;
  printf("\n enter n term : ");
  scanf(" %d", &n);
  printf("%d", a);
  printf(" ,%d", b);
  for (int i = 3; i <= n; i++)
  {
    temp = a + b;
    printf(" ,%d", temp);
    a = b;
    b = temp;
  }

  return 0;
}