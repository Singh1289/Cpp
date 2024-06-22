// Countdigits //

#include<stdio.h>
int main()
{
	int num, count=0;
	printf("\n enter value : ");
	scanf(" %d",&num);
	
	for( ;num>0; num=num/10, count= count + 1);
		
	printf("\n count is : %d",count);
	printf("\n number is : %d",num);
	return 0;
}