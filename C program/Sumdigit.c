// Sumdigits //

#include<stdio.h>
int main()
{
	int num, count=0, sum=0;
	printf("\n enter value : ");
	scanf(" %d",&num);
	
	for( ;num>0; num=num/10)
	{
		count= count + 1;
		sum = sum + (num % 10);
	}
	printf("\n count is : %d",count);
	printf("\n sum is : %d",sum);
	return 0;
}