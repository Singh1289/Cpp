#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate(struct Date *ptrDate)
{
    ptrDate->day = 0;
    ptrDate->month = 0;
    ptrDate->year = 0;
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("\nDate: %02d/%02d/%04d\n", ptrDate->day, ptrDate->month, ptrDate->year);
}

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter day: ");
    scanf("%d", &ptrDate->day);
    printf("Enter month: ");
    scanf("%d", &ptrDate->month);
    printf("Enter year: ");
    scanf("%d", &ptrDate->year);
}

int main()
{
    struct Date d1;
    int choice;

    while (1)
    {
        printf("\n1. Initialize date\n2. Print date\n3. Accept date from console\n0. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            initDate(&d1);
            break;
        case 2:
            printDateOnConsole(&d1);
            break;
        case 3:
            acceptDateFromConsole(&d1);
            break;
        case 0:
            return 0;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}