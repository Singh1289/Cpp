/*#include<stdio.h>
int main()                              //entry point function
{
   printf("\n Hello\t World...");
   return 0;
}
  

#include<stdio.h>
 
int main()                              //entry point function
{
   printf("\n Value = %d",500);
   return 0;
}



#include<stdio.h>
 
int main()                              //entry point function
{
    int num;
    printf("\n Enter a number..");
    scanf("%d", &num);

    printf("\n Value of num = %d",num);
    printf("\n Octal equ of num = %o", num);
    printf("\n HexaDecimal of num = %x",num);
  for(; ;) {printf("a"); }
    return 0;
}


#include<stdio.h>
 
int main()                              //entry point function
{
  char ch;
  printf("\n Enter a character ");
  scanf("%c", &ch);
  
  printf("\n Character = %c and ASCII is = %d",ch,ch);
  return 0;
}



#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
  printf("\n size of int = %u",sizeof(int));
  printf("\n size of char = %u",sizeof(char));
  printf("\n size of short = %u",sizeof(short));
  printf("\n size of long = %u",sizeof(long));
  printf("\n size of float = %u",sizeof(float));
  printf("\n size of double = %u",sizeof(double));
  printf("\n size of long double = %u",sizeof(long double));
 
  printf("\n Range of short = %d to %d",SHRT_MIN, SHRT_MAX);
  printf("\n Max value of unsigned short = %u",USHRT_MAX);

  printf("\n Range of char = %d to %d",SCHAR_MIN, SCHAR_MAX);
  printf("\n Max value of unsigned char = %u",UCHAR_MAX);

  printf("\n Range of long = %u to %u",LONG_MIN, LONG_MAX);
  printf("\n Max value of unsigned long = %u",ULONG_MAX);

  printf("\n Range of float = %e to %e",FLT_MIN, FLT_MAX);
  
  printf("\n Range of double = %e to %e",DBL_MIN, DBL_MAX);
  return 0;
}


#include<stdio.h>
#include<limits.h>
int main()
{
  short num = SHRT_MAX;

  printf("\n num = %d",num);

  num = num + 1;

  printf("\n num = %d",num);
  return 0;
}



Assignment:
  1. Take side of traingle and print its area
  2. Take 2 numbers from user and print product, addition and subtraction

  3. Take radius of a circle and print its area.
  4. Take temprature in Celsius and convert it into Fahrenheit and print it

  5. Take marks in 5 subjects (out of 100) and print total and percent. 



#include<stdio.h>
int main()
{
   int mk1;
   printf("\n Enter num : ");
   scanf("%d",mk1);
   printf("\n Value of mk1 = %d",mk1);
   return 0;
}



if condition - control structure 



   if(<condition-expression>)
      stat-1;
   else
      stat-2;




  num1 = 10   num2 = 5


num1 = 20   num2 = -30

  if(num1 == num2)      // any non-zero value is true   and zero is false
  {
    
     printf("\n num1 and num2 are same");
  }
  else
  {
     printf("\n num1 and num2 are different");
     
  }

  stat-3;
  stat-4;




printf("%d", num1>num2);


if(num % 2 == 0)




if((num%2) == 0)


num1, num2, num3

if(num1 > num2)
{
  if(num1 > num3)
  {
     printf("Max = %d", num1);
  }
  else
  {
     printf("Max = %d",num3);
  }
}
else
{
   if(num2 > num3)
   {
      printf("Max = %d", num2);
   }
   else
   {
      printf("Max = %d", num3);
}


if((num1>num2) && (num1>num3))  
   printf("\n Max = %d",num1);
else if((num2>num3) && (num2>num1))
   printf("\n Max = %d",num2);
else
   printf("\n Max = %d",num3);


Logical operator (&& and ||) - connectors

  cond1 && cond2     result
  
   0    &&   0       0
   0    &&   1       0
   1    &&   0       0
   1    &&   1       1


 cond1 || cond2     result
  
   0    ||   0       0
   0    ||   1       1
   1    ||   0       1
   1    ||   1       1


num1=10, num2=20

if((num1 = 20) || (num2 = 30))
{
   printf("Hello");
}

printf(num1, num2);



Loops -

for(init ; cond  ; incre / decr)
    exp1   exp2   exp3
for loop - iterative statement 

exp1 - executes only once when execution control enter in loop statement

exp2 - executes every time before controls enters into loop statements
       control enters into loop if exp2 is non-zero
       control will jump out side loop if exp2 is zero
exp3 - will not execute for the first time, but it will execute before    
       loop iterates and before checking the condition (exp2) 

 
int i;
for(i=10 ; i>=0 ; i-=2)     i = i - 2 
    printf("\n value of i = %d",i);

printf("\n Value of i = %d", i);



___________________________________________________


int num = 5;

for( ; num>=0 ; )
{
  printf("\n Hello");
  
}

____________________________________________________

Take a number and count its digits and print it

  Input -  23146 % 10  =  6
           23146 / 10  =  2314
    
           2314  % 10 = 4
           2314  / 10 = 231

          231 % 10 = 1
          231 / 10 = 23 

          23 % 10 = 3
          23 / 10 = 2

          2  %  10 = 2
          2 / 10 = 0

  Output  - 5 


#include<stdio.h>
int main()
{
   int num,sum = 0, rem;

   printf("\n Enter a number :");
   scanf(" %d",&num);                // num = 52

   for( ; num > 0 ; num = num / 10)  // num = 0
   {
     rem = num % 10;
     sum = sum + rem;
   }

   printf("\n Sum of digits = %d", sum);
   return 0;
}



Take a number and sum of its digits and print it



ternary operator

   condition ? stat : stat ;
   
   
 num1 = 10   num2 = 20
 
 max = num1 > num2 ? num1 : num2;
 
 
 num1 > num2 ? printf(" %d",num1) : printf(" %d",num2) ;  


take a number, reverse it and print it

  Input:  236754
  Output: 457632
  



#include<stdio.h>
int main()
{
   int num,rev_no = 0, rem, original_no ;

   printf("\n Enter a number :");
   scanf(" %d",&num);                // num =  236754
   original_no = num;
   for( ; num > 0 ; num = num / 10)  // num = 0
   { 	
     rem = num % 10;         // rem = 2     
     rev_no = rev_no * 10 + rem;  //rev_no = 457632  
   }
   printf("\n Reverse Number = %d",rev_no);
  
   
   if(original_no == rev_no)
      printf("\n Palindrome..");
   else
      printf("\n Not Palindrome..")
   return 0;
}

WAP in C to print sum of all even number from n to m.Take values n and m 
from user.



#include<stdio.h>
int main()
{
	int n, m, sum = 0;
	printf("\n Enter range..");
	scanf(" %d",&n);      // 73
	scanf(" %d",&m);     // 55
	
	if(m>n){
	
	   if((n%2) != 0) n=n+1;
	
	   for( sum+=n; n<=m ; n+=2, sum+=n);   //i = 40
	
	    printf("\n Sum = %d",sum);
    }
	else printf("\n Wrong range...");
	return 0
}

_______________________________________________________

Fibonacci series -   n terms

 0,   1,    1,     2,    3,   5,   8,   13

 t1   t2   t3
      t1   t2
 
 
 Find sum of series upto n terms
 
   1 + 2 + 4 + 7 + 11 + 16 ....... n terms
   
  n = 10, i, term = 1, sum = 0 
   
  for(i=1 ; i<=n ; i++)   // i = 3
  {
      sum = sum + term;    sum  = 3  
	  term = term + i;    term = 4
  }
  
   
 
 
 #include<stdio.h>
 int main()
 {
 	int i,j;
 	for(i=0, j=10 ; i<j ; i++, j--)
 	{
 	    printf("\n i = %d     j = %d",i,j);	
	}
	// i = 5  j  =  5
    return 0;
 }
 Program to print factors of num :
 
 
 #include<stdio.h>
 int main()
 {
 	int num,i;
 	printf("\n Enter a number :");
 	scanf(" %d",&num);
 	
 	for(i=1 ; i<=num ; i++)
    {
    	if((num % i) == 0)
    	   printf("  %d",i);
	}
 	return 0;
 }
 
 
 Find a number is perfect number or not?
 
    perfect number - sum of its factors is number itself.
    
    For ex - 6   -    1,2,3
 
 #include<stdio.h>
 int main()
 {
 	int num,i, sum = 0;
 	printf("\n Enter a number :");
 	scanf(" %d",&num);                    //num = 6
 	
 	for(i=1 ; i<num ; i++)   //i  =6
    {
    	if((num % i) == 0)
    	   sum = sum + i;         //sum = 6
	}
	if(num == sum)
	   printf("%d  is perfect number",num);
	else
	   printf("%d  is not a perfect number",num);    
	
 	return 0;
 }
 
 
 Take a number and print it is prime or not
 
 break - It is a keyword
 It transfers the control outside loop
 It is used in side loop conditionally
 
 continue - It is a keyword
 It transfers the control to starting of loop, to check the condition
 It skips the statements inside loop after this keyword
 It is used conditionally
 	
 	
  for( ; cond ; expr)
  { 
     ..
     if(cond)  continue;
     ..
     ...
    if(cond)   break;
    ..
    ..
    ..
    
  }
  stat;
  
 
 
 
 #include<stdio.h>
 int main()
 {
 	int num, i, flag = 0;
 	printf("\n Enter a number :");
 	scanf(" %d",&num);                   //num  =  17 
 	for(i = 2 ; i < num/2 ; i++)
 	{
 	    if((num % i) == 0)
 	    {
		  flag = 1;
		  break; 	
        }
	}
    if(flag == 0)
        printf("\n %d is prime", num);
    else
        printf("\n %d is not prime", num);
    return 0;
}
 
 
 #include<stdio.h>
 int main()
 {
 	int num, i;
 	printf("\n Enter a number :");
 	scanf(" %d",&num);                   //num  =  17 
 	for(i = 2 ; i < num ; i++)
 	{
 	    if((num % i) == 0) break; 	
	}
    if(i == num)
        printf("\n %d is prime", num);
    else
        printf("\n %d is not prime", num);
    return 0;
}
 
 
 while(<condition>)
 {
    stat-1;
    stat-2;
    stat-3;
}

char ch='y';

while(ch == 'y')
{
   stat-1
   printf("\n Want to conti...(y/n)");
   scanf(" %c",&ch);
}


 */
 
 



























