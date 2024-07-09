#include<stdio.h>
int main()
{
	int num1=500, num2 =20;
	int *ptr;
	
	ptr = &num1;
	num1 = 10;
	num2 = 20;
	printf("\n num1 = %d",num1);           // 10
	printf("\n address of num1 = %d and address of num2 = %d",&num1, &num2);  //500
	printf("\n ptr = %d", ptr);      //500 
	printf("\n Value at ptr = %d",*ptr);   // 10
	printf("\n address of num2 = %d",&num2);
	
	printf("\n address of ptr = %d", &ptr);
	return 0;
}
