// polindrom_no //

#include<stdio.h>
int main()
{
   int n, rev=0, k;
   printf("\n Enter no. : ");
   scanf(" %d",&n);
   int o_num = n;
   for(;n>0;n=n/10)
   {
     k = n%10;
     rev= rev*10 + k;
    
   }
   printf("\n reverse is : %d",rev);
   (o_num == rev) ? printf("\n  polindrom : %d", rev) : printf("\n  not polindrom");	
   return 0;
}
/*

#include<stdio.h>
int main()
{
   int n, rev=0, k;
   printf("\n Enter no. : ");
   scanf(" %d",&n); 
   int o_num = n;         
   while(n>0)           //1234
   {
     k = n%10;
     rev= rev*10 + k;
     n=n/10;
   }
   printf("\n reverse is : %d",rev);
   (o_num == rev) ? printf("\n  polindrom : %d", rev) : printf("\n  not polindrom");
   return 0;
}

*/