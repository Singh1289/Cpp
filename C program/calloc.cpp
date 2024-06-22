/* calloc... malloc.... realloc  */
#include <iostream>
using namespace std;

int main()
{
    int *ptr, i;
    ptr = (int *)calloc(10, 4); // 10 * 4 =40 bytes  10 blocks of 4 bytes
    for (i = 1; i <= 10; i++)
        *(ptr + i) = i; // 1 2 3 4 5 6 7 8 9 10
                        //*(ptr+i*2)= i;         // 0 1 0 2 0 3 0 4 0 5   move forward and crash gives garbage
    for (i = 1; i <= 10; i++)
        cout << "\n"
             << ptr[i];

    free(ptr);
    return 0;

    //(int *)calloc(10,3)   gives 10*3 bytes
}
/*

int main()
{
    int *ptr, i;
    ptr = (int *)malloc(10,4);  // 10 * 4 =40 bytes  10 blocks of 4 bytes
    for(i=1;i<=10;i++)
        *(ptr+i)= i;            // 1 2 3 4 5 6 7 8 9 10
       //*(ptr+i*2)= i;         // 0 1 0 2 0 3 0 4 0 5   move forward and crash gives garbage
    for(i=1;i<=10;i++)
        cout<<"\n"<<ptr[i];

    free(ptr);
    return 0;
}
*/
