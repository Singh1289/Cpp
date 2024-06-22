// struct program  use srt copy //
#include <stdio.H>
#include <string.h>
struct test
{
    int rno;
    char name[4000];
    int marks;
};

int main()
{
    struct test t1;
    t1.rno = 23;
    t1.marks = 89;
    printf("\n Enter any string : ");
    fgets(t1.name, 4000, stdin);
    printf("\nRoll no is : %d", t1.rno);
    // printf("\nName is :  %s", t1.name);
    printf("\nMarks is : %d", t1.marks);
    printf("\nName is : ");
    puts(t1.name);
    return 0;
}