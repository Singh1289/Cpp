// Marks //

#include<stdio.h>
int main()
{
	int m,e,hi,s,h;
	
	printf("\nEnter marks of Hindi out of 100 : ");
	scanf("%d",&hi);
	printf("\nEnter marks of English out of 100 : ");
	scanf("%d",&e);
	printf("\nEnter marks of Maths out of 100 : ");
	scanf("%d",&m);
	printf("\nEnter marks of History out of 100 : ");
	scanf("%d",&h);
	printf("\nEnter marks of Science out of 100 : ");
	scanf("%d",&s);
	
	
	printf("\nTotal marks out of 500 is : %d",hi+e+m+h+s);
	float p = (hi+e+m+h+s)/5;
	printf("\nPercentage is : %f",p);
	
	return 0;
}