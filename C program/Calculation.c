// CALCULATION//

#include<stdio.h>
int main()
{
	int b, a;
	
	printf("\nEnter first no : ");
	scanf("%d",&a);
	printf("\nEnter second no : ");
	scanf("%d",&b);
	
	printf("Product is a*b : %d\n",a*b);
	printf("Product is in octal a*b : %o\n",a*b);
	printf("Addition is a+b : %d\n",a+b);
	printf("Addition is in hexa a+b : %X\n",a+b);
	printf("Subtration is a-b: %d\n",a-b);
	printf("Subtration is in hexa a-b: %x\n",a-b);
	return 0;
}