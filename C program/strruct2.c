// struct program  inside the struct //
#include <stdio.H>
#include <string.h>
struct test
{
    int rno;
    char name[4000];
    int marks;
    struct dob
    {
        int year;
        int month;
        int day;
    };
};

int main()
{
    struct test t1;
    struct dob d1;
    t1.rno = 23;
    t1.marks = 89;
    d1.year = 2002;
    d1.month = 07;
    d1.day = 23;
    printf("\n Enter any string : ");
    fgets(t1.name, 4000, stdin);
    printf("\nRoll no is : %d", t1.rno); // t1.d1.year
    // printf("\nName is :  %s", t1.name);
    printf("\nMarks is : %d", t1.marks);
    printf("\nName is : ");
    puts(t1.name);
    printf("\n DOB is : %d-%d-%d", d1.year, d1.month, d1.day);
    return 0;
}