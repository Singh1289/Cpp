// basic of struct  //
#include <stdio.h>
int main()
{
    struct stud
    {
        int rno;
        char name[10]; /* data */
        float marks;
        char grade;
    };
    struct stud s1, s2; // taken 2 variable of struct stud type struct is datatype

    printf("\n enter Rno, name,marks,grade : ");
    scanf(" %d", &s1.rno);
    scanf(" %s", &s1.name);
    scanf(" %f", &s1.marks);
    scanf(" %c", &s1.grade);

    printf("\nroll no : %d", s1.rno);
    printf("\nname : %s", s1.name);
    printf("\nmarks : %f", s1.marks);
    printf("\ngrade : %c", s1.grade);

    return 0;
}