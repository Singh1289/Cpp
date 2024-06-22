// Max3 //

#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,n3;
	printf("\n enter no. : ");
	scanf(" %d",&n1);
	printf("\n enter no. : ");
	scanf(" %d",&n2);
	printf("\n enter no. : ");
	scanf(" %d",&n3);
	int ma = fmax(n1,fmax(n2,n3));
	int mi = fmin(n1,fmin(n2,n3));
	
	printf("\nMAX is : %d", ma);
	printf("\nMIN is : %d", mi);

	if((n1>n2) && (n1>n3))
	{
	   printf("\n  Max is : %d", n1);
	}
	else
	{
	   if((n2>n1) && (n2>n3))
	      {
	          printf("\n  Max is : %d", n2);
	      }
	      else
	      {
		  printf("\n  Max is : %d", n3);
	      }
	}
	return 0;
}