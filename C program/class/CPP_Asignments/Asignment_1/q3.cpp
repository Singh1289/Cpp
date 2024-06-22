#include <iostream>
#include <string>
using namespace std;
class Student
{
    int rollNo;
    string name;
    float marks;

public:
    void initStudent()
    {
        rollNo = 0;
        name = "";
        marks = 0.0;
    }

    void printStudentOnConsole()
    {
        cout << "Roll No: " << rollNo << "\nName: " << name << "\nMarks: " << marks << std::endl;
    }

    void acceptStudentFromConsole()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

int main()
{
    Student student;
    
    int choice;

    while (1)
    {
        cout << "\n1. Initialize student\n2. Print student\n3. Accept student from console\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            student.initStudent();
            break;
        case 2:
            student.printStudentOnConsole();
            break;
        case 3:
            student.acceptStudentFromConsole();
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";
        }
    }

    return 0;
}