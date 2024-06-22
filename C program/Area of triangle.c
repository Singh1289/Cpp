// Area of triangle//

#include<stdio.h>
int main()
{
	int b, h;
	float a;
	printf("\nEnter base of triangle : ");
	scanf("%d",&b);
	printf("\nEnter height of triangle : ");
	scanf("%d",&h);
	a=(b*h)/2;
	printf("Area is : %f", a);
	return 0;
}