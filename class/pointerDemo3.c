#include<stdio.h>
int main()
{
	int i, num1 = 10, num2 = 20;
	int *ptr;
	ptr = &num2;
	printf("\n  ptr outside loop = %d",ptr);
	printf("\n value at ptr outside loop = %d",*ptr);
	for(i = 1 ; i <= 100; i++)
	{
		ptr = ptr + 1;
		*ptr = *ptr + 1;
		printf(" #### ptr = %d  *ptr = %d",ptr,*ptr);
		
	}
	return 0;
}
