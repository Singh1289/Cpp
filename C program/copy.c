#include <stdio.h>
void copy(int *, int *);

int main()
{
    int i, arr2[10];
    int arr1[10] = {12, 13, 24, 35, 46, 56, 67, 8, 7, 99};

    copy(arr2, arr1);
    for (i = 0; i < 10; i++)
    {
        printf(" %d", arr2[i]);
    }
    return 0;
}

void copy(int *a1, int *a2)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        a1[i] = a2[i];
    }
}