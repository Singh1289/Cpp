#include<stdio.h>
int sum(int , int);    // function declaration
int main()
{
   int num1 = 10, num2 = 20;
   int res;
   res = sum(num1 + 25, num2 + 10);
   printf("\n Result = %d",res);	
   return 0;
}

int sum(int a, int b)    //int a = 35; int b = 30 
{
	int r;
	r = a + b;
	return r;
}


