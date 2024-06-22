// Reverse_no //
/*
#include<stdio.h>
int main()
{
   int n, rev=0, k;
   printf("\n Enter no. : ");
   scanf(" %d",&n);
   for(int i=1;i<=n;i++)
   {
     k = n%10;
     rev= rev*10 + k;
     n=n/10;
   }
   printf("\n reverse is : %d",rev);	
   return 0;
}
*/

#include<stdio.h>
int main()
{
   int n, rev=0, k;
   printf("\n Enter no. : ");
   scanf(" %d",&n);          
   while(n>0)           //1234
   {
     k = n%10;
     rev= rev*10 + k;
     n=n/10;
   }
   printf("\n reverse is : %d",rev);	
   return 0;
}