// fun_Area_circle //

#include <stdio.h>
float area(float);

int main()
{
    float k, s;
    printf("\n enter the radius : ");
    scanf(" %f", &k);
    s = area(k);

    printf("\nArea of circle is : %f ", s);
    return 0;
}

float area(float a)
{

    float area;

    area = 3.14 * a * a;
    return area;
}