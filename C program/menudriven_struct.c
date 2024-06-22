#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int marks;
    char grade;
    struct dob
    {
        int year;
        int month;
        int day;
    } date;
};

void addstudent(struct student[], int *);
void displayall(struct student[], int);
void avgmarks(struct student[], int);
void student_acc_to_marks(struct student[], int);
void student_acc_to_grade(struct student[], int);
void list_of_students_by_name(struct student[], int);
void student_acc_to_1st_letter(struct student[], int);
void student_acc_to_year(struct student[], int);

int main()
{
    struct student stu[50];
    int Snum = 0;
    int choice;

    do
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n|         ~ W E L C O M E ~         |");
        printf("\n|1 : Add a student in class         |");
        printf("\n|2 : Display all records            |");
        printf("\n|3 : Average marks of class         |");
        printf("\n|4 : Student details acc. to marks  |");
        printf("\n|5 : Student details acc. to grade  |");
        printf("\n|6 : list of students by name       |");
        printf("\n|7 : Search student by first letter |");
        printf("\n|8 : list of student by year        |");
        printf("\n|9 : Exit                           |");
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\n what would you like to have : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addstudent(stu, &Snum);
            break;
        case 2:
            displayall(stu, Snum);
            break;
        case 3:
            avgmarks(stu, Snum);
            break;
        case 4:
            student_acc_to_marks(stu, Snum);
            break;
        case 5:
            student_acc_to_grade(stu, Snum);
            break;
        case 6:
            list_of_students_by_name(stu, Snum);
            break;
        case 7:
            student_acc_to_1st_letter(stu, Snum);
            break;
        case 8:
            student_acc_to_year(stu, Snum);
            break;
        case 9:
            printf("\n~~~~ T H A N K  Y O U  ~~~~~\n");
            break;
        default:
            printf("\n~~~~  Please choose another option  ~~~~\n");
            break;
        }
    } while (choice != 9);
    return 0;
}

void addstudent(struct student stu[], int *count)
{
    if (*count >= 50)
    {
        printf("Sorry, maximum capacity reached.\n");
        return;
    }

    printf("\nEnter name of the student: ");
    scanf(" %s", stu[*count].name);

    printf("\nEnter marks of the student: ");
    scanf("%d", &stu[*count].marks);

    printf("\nEnter grade of the student: ");
    scanf(" %c", &stu[*count].grade);

    printf("\nEnter DOB yyyy-mm-dd : ");
    scanf(" %d %d %d", &stu[*count].date.year, &stu[*count].date.month, &stu[*count].date.day);

    (*count)++;
    printf("\nStudent added successfully!\n");
    return;
}

void displayall(struct student stu[], int count)
{
    if (count == 0)
    {
        printf("No students to display.\n");
        return;
    }

    printf("Students:\n");
    for (int i = 0; i < count; i++)
    {
        printf("\nName: %s", stu[i].name);
        printf("\nDOB: %d-%d-%d", stu[i].date.year, stu[i].date.month, stu[i].date.day);
        printf("\nMarks: %d", stu[i].marks);
        printf("\nGrade: %c\n", stu[i].grade);
    }
    return;
}

void display(struct student stu[], int a)
{

    printf("\nName: %s", stu[a].name);
    printf("\nDOB: %d-%d-%d", stu[a].date.year, stu[a].date.month, stu[a].date.day);
    printf("\nMarks: %d", stu[a].marks);
    printf("\nGrade: %c\n", stu[a].grade);

    return;
}

void avgmarks(struct student stu[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += stu[i].marks;
    }
    printf("\nAverage marks of all students : %.2f\n", (float)sum / count);
    return;
}

void student_acc_to_marks(struct student stu[], int count)
{
    int a;
    printf("\nMarks above and equal to: ");
    scanf("%d", &a);
    for (int i = 0; i < count; i++)
    {
        if (stu[i].marks >= a)
        {
            display(stu, i);
            /*
            printf("\nName: %s", stu[i].name);
            printf("\nDOB: %d-%d-%d", stu[i].date.year, stu[i].date.month, stu[i].date.day);
            printf("\nMarks: %d", stu[i].marks);
            printf("\nGrade: %c\n", stu[i].grade);
            */
        }
    }
    return;
}

void student_acc_to_grade(struct student stu[], int count)
{
    char a;
    printf("\nGrade : ");
    scanf(" %c", &a);
    for (int i = 0; i < count; i++)
    {
        if (stu[i].grade == a)
        {
            display(stu, i);
        }
    }
    return;
}

void list_of_students_by_name(struct student stu[], int count)
{
    printf("\nList of students by name:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", stu[i].name);
    }
    return;
}

void student_acc_to_1st_letter(struct student stu[], int count)
{
    char a;
    printf("\nEnter first letter: ");
    scanf(" %c", &a);
    for (int i = 0; i < count; i++)
    {
        if (stu[i].name[0] == a)
        {
            display(stu, i);
        }
    }
    return;
}

void student_acc_to_year(struct student stu[], int count)
{
    int a;
    printf("\nEnter year: ");
    scanf("%d", &a);
    for (int i = 0; i < count; i++)
    {
        if (stu[i].date.year == a)
        {
            display(stu, i);
        }
    }
    return;
}
