#include <iostream>
#include <string>
using namespace std;

    class Student
{
    int rollNo;
    string temp;
    float marks[3];
    string gender;

public:string name;
    void accept()
    {
        cout << "enter name : ";
        cin >> name;
        cout << "enter roll no : ";
        cin >> rollNo;
        cout << "enter mark 1st : ";
        cin >> marks[0];
        cout << "enter mark 2nd : ";
        cin >> marks[1];
        cout << "enter mark 3rd : ";
        cin >> marks[2];
        cout << "enter gender : ";
        cin >> gender;
    }

    void printStudentOnConsole()
    {
        cout << "\n";
        cout << "\nRoll No: " << rollNo << "\nName: " << name << "\ngender is : " << gender << endl;
        cout << "mark avg : " << (marks[0] + marks[1] + marks[2]) / 3 << "\n";
        ;
    }
    
};

int main()
{
    Student arr[2];
    int i;int count = 1;
    string temp;
        int j = 0;

    int choice;

    while (true)
    {
        cout << "1. Initialize student\n2. Print student\n3. serach\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (i = 0; i < 2;i++){
                arr[i].accept();}
            
            break;
        case 2:

            for (i = 0; i < 2;i++){
                arr[i].printStudentOnConsole();
            }
            break;
        case 3:
                cout << "enter name to search : ";
                cin >> temp;
                  for ( j; j < 2;j++)
           {
               
               
               if (arr[j].name == temp)
               {

                   arr[j].printStudentOnConsole();
               }
               else{
                   count++;
                   if(count ==3){
                   cout << "not found!!\n";
               }
               }
               
                  //
                }
                j = 0;
                count = 1;

                break;

            default:
                return 0;
    }

                
    }
    

}