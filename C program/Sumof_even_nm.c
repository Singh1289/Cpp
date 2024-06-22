// Sumof_even_nm //
/*
#include<stdio.h>
int main()
{
   int n, m, sum=0;
   printf("\n Enter no. : ");
   scanf(" %d",&n);
   printf("\n Enter no. : ");
   scanf(" %d",&m);
   if(m>n)
  {
   for(int i=n;i<m;i++)
   {  if((i%2)==0)
	sum = sum+i;
   }
  }else
  { 
    for(int i=m;i<n;i++)
     {  if((i%2)==0)
	sum = sum+i;
     }

  }

   printf("\n Sum of even no. is : %d",sum);
  	
   return 0;
}
*/

#include<stdio.h>
int main()
{
   int n, m, sum=0;
   printf("\n Enter no. : ");
   scanf(" %d",&n);
   printf("\n Enter no. : ");
   scanf(" %d",&m);
   if(m>n){
   if((n%2)!=0) n+=1;
  
   for(int i=n;i<m;i+=2,sum = sum+i);
   }
   else
    printf("\nenter value in incresing order.");

    printf("\nsum is : %i",sum);
  
   return 0;
}

