/*  malloc is used for memory allocation at run-time
    malloc allocates memory at run time and returns
	  plain address.
	you need to pass number of bytes(size) in malloc
	malloc returns void *
	
	(void *) void pointer can not be dereferenced
	
*/
#include<stdio.h>
int main()
{
	//int *ptr;
	void *ptr;
	printf("\n Hello..");
	ptr = malloc(5);
	printf("\n after malloc..");
	*ptr = 15;
	printf("\n after assignment...");
	
	printf("\n ptr = %d",ptr);
	printf("\n *ptr = %d",*ptr);
	free(ptr);
	return 0;
}
