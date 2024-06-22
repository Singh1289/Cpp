/* Write a function to print all prime numbers
   from n to m
   */

#include <stdio.h>
void printPrime(int, int);
int isPrime(int);
int main()
{
	int n, m;
	printf("\n Enter range to print prime numbers :");
	scanf(" %d", &n);
	scanf(" %d", &m);
	printPrime(n, m);

	return 0;
}

void printPrime(int n1, int n2)
{
	int num;
	for (num = n1; num <= n2; num++)
	{
		if (isPrime(num))
			printf(" %d", num);
	}
	return;
}

int isPrime(int num)
{
	int i;
	for (i = 2; i < num; i++)
	{
		if ((num % i) == 0)
			break;
	}
	if (i == num)
		return 1;
	else
		return 0;
}
