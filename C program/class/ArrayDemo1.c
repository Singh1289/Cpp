/*Array : 
1. It is a constant pointer
2. It is collection of same type values
3. Memory allocation is contigous
4. array elements are accessed using index / subscript
5. array index starts from 0 to size-1
6. It is user defined data type
7. Array name itself is base address of array
8. It is fixed size
9. Random access for array elements
10. access arr[i] ===> compiler converts it into *(arr+i)

  i[arr]   ====   *(i+arr)

datatype arr[size];

int arr[10];

arr[i]   =   *(arr+i)
i[arr]   =   *(i + arr)
*/



#include<stdio.h>
int main()
{
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	int i;
	int *ptr;
	
	ptr = arr;
	printf("\n Values are : ");
/*	for(i=0 ; i<10 ; i++)
	{
	   printf("\n arr[%d] =  %d",i,arr[i]);  
	   printf("\n %d[arr] = %d",i,i[arr]);
	   printf("\n *(arr + %d) = %d",i,*(arr+i));
	   printf("\n *(%d + arr) = %d",i,*(i+arr));
	   printf("\n ptr[%d] =  %d",i,ptr[i]);  
	   printf("\n %d[ptr] = %d",i,i[ptr]);
	   printf("\n *(ptr + %d) = %d",i,*(ptr+i));
	   printf("\n *(%d + ptr) = %d",i,*(i+ptr));
    }
    printf("\n arr = %d",arr);	
    printf("\n ptr = %d",ptr);
*/	
    printf("\n\n\n");
    for(i=1 ; i<=10 ; i++)
    {
    	printf(" *arr = %d",*arr);
    	arr = arr + 1;
	}
	return 0;
}
