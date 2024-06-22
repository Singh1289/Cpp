// fun_avg //

#include <stdio.h>
float avg(int *);

int main()
{
    float s;
    int a[10] = {11, 12, 99, 14, 15, 20, 17, 18, 19, 23};

    s = avg(a);

    printf("\nAverage of the array is : %f ", s);
    return 0;
}

float avg(int *z)
{
    int i;
    float avg, sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum += z[i];
    }
    avg = sum / 10;
    return avg;
}