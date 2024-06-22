// PositiveNeg //

#include<stdio.h>
int main()
{
	int num;
	printf("\n enter no : ");
	scanf(" %d", &num);
	if(num == 0)
	{
	   printf("IS NOT A +ve OR -ve");
	}
	else
	{
	   if(num > 0)
	      {
	          printf("+ve no.");
	      }
	      else
	      {
		  printf("-ve no.");
	      }
	}
	return 0;
}