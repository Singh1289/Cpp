// find_in_array //

#include <stdio.h>
int find(int *, int);

int main()
{
    int s, k;
    int a[10] = {11, 12, 13, 14, 15, 0, 17, 18, 19, 20};
    printf("\n enter the numbers to find : ");
    scanf(" %d", &k);

    s = find(a, k);
    if (s == 0)
        printf("\nnot present in the set");
    else
        printf("\n%d :this value is present in the set ", k);
    return 0;
}

int find(int *z, int k)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (k == z[i])
            return 1;
    }
    return 0;
}