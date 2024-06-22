// Evenodd //

#include<stdio.h>
int main()
{
	int num;
	printf("\n enter no : ");
	scanf(" %d", &num);
	if(num == 0)
	{
	   printf("IS NOT A EVEN OR ODD");
	}
	else
	{
	   if((num % 2) == 0)
	      {
	          printf("EVEN");
	      }
	      else
	      {
		  printf("ODD");
	      }
	}
	return 0;
}