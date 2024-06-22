// Size of //

#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	
	printf("\nSize of int = %u", sizeof (int));
	printf("\nSize of int = %u", sizeof (int));
	printf("\nSize of int = %u", sizeof (int));
	printf("\nSize of char = %u", sizeof (char));
	printf("\nSize of short = %u", sizeof (short));
	printf("\nSize of long = %u", sizeof (long));
	printf("\nSize of float = %u", sizeof (float));
	printf("\nSize of double = %u", sizeof (double));
	printf("\nSize of long double = %u", sizeof (long double));

	printf("\nRange of short = %d to %d",SHRT_MIN, SHRT_MAX);
	printf("\nMax value of unsigned short = %u",USHRT_MAX);

	printf("\nRange of char = %d to %d",SCHAR_MIN, SCHAR_MAX);
	printf("\nMax value of unsigned char = %u",UCHAR_MAX);

	printf("\nRange of long = %d to %d",LONG_MIN, LONG_MAX);
	printf("\nMax value of unsigned long = %e",ULONG_MAX);

	printf("\nRange of float = %e to %e",FLT_MIN, FLT_MAX);
	printf("\nMax value of double = %e tp %e",DBL_MIN,DBL_MAX);

	return 0;
}