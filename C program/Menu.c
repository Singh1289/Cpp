#include <stdio.h>
int main()
{
    char choice;
    float radius, length, width, base, height, area;

    do
    {
        printf("\nMenu:\n");
        printf("a) Compute area of circle\n");
        printf("b) Compute area of rectangle\n");
        printf("c) Compute area of triangle\n");
        printf("d) Exit\n");

        printf("Enter your choice (a, b, c, or d): ");
        scanf(" %c", &choice);

        switch (choice)
        {
        case 'a':
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            int area = 3.14 * radius * radius;
            printf("The area of the circle is: %f\n", area);
            break;

        case 'b':
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            int area = length * width;
            printf("The area of the rectangle is: %f\n", area);
            break;

        case 'c':
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            int area = 0.5 * base * height;
            printf("The area of the triangle is: %f\n", area);
            break;

        case 'd':
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a, b, c, or d.\n");
        }

    } while (choice != 'd');

    return 0;
}
