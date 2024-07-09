/* calloc... malloc.... realloc  */
#include<iostream>
using namespace std;
/*
int main()
{
    int *ptr, i;
    ptr = (int *)calloc(10,4);  // 10 * 4 =40 bytes  10 blocks of 4 bytes
    for(i=1;i<=10;i++)
        *(ptr+i)= i;            // 1 2 3 4 5 6 7 8 9 10
       //*(ptr+i*2)= i;         // 0 1 0 2 0 3 0 4 0 5   move forward and crash gives garbage
    for(i=1;i<=10;i++)
        cout<<"\n"<<ptr[i];

    free(ptr);
    return 0;

    //(int *)calloc(10,3)   gives 10*3 bytes same in malloc
}


int main()
{
    int *ptr, i;
    ptr = (int *)malloc(10*4);  // 10 * 4 =40 bytes  10 blocks of 4 bytes
    for(i=1;i<=10;i++)
        *(ptr+i)= i;            // 1 2 3 4 5 6 7 8 9 10
       //*(ptr+i*2)= i;         // address 1 0 2 0 3 0 4 0 5   move forward and crash gives garbage
    for(i=1;i<=10;i++)
        cout<<"\n"<<ptr[i];

    free(ptr);
    return 0;
}

*/


int main()
{
    int *ptr, i;
    ptr = (int *)calloc(10,4);  // 10 * 4 =40 bytes  10 blocks of 4 bytes
    for(i=1;i<=10;i++)
        *(ptr+i)= i;            // 1 2 3 4 5 6 7 8 9 10
       //*(ptr+i*2)= i;         // 0 1 0 2 0 3 0 4 0 5   move forward and crash gives garbage
    cout<<"\n ptr : "<<ptr;

    for(i=1;i<=10;i++)
        cout<<"\n"<< *(ptr+i);

    free(ptr);
    int *reptr;
    reptr = (int*)realloc (ptr,sizeof(int)*20);
    cout<<"\n Reptr is : "<<reptr;

    for(int j=1;j<15;j++)
     cout<<"  "<<reptr[j];

    //free(ptr);
    free(reptr);

    return 0;
}

