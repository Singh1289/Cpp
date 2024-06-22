// Temperature//

#include<stdio.h>
#define F 1.8
int main()
{
	int c;
	
	printf("\nEnter temp in celcius : ");
	scanf("%d",&c);
	
	
	printf("\nTemp. in Fagrenheit is : %f\n",(c*F)+32);
	
	return 0;
}