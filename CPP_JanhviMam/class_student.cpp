// class student with auto increment function with global variable.

#include <iostream>
using namespace std;

int GR = 1;

class student
{
    int rno, mk1, mk2, mk3, total;
    char grade;
    string name;
    void Grno()
    {
        rno = GR;
        GR = GR + 1;
    }

public:
    student()
    {
        rno = 0;
        mk1 = 0;
        mk2 = 0;
        mk3 = 0;
        name = "NULL";
    }
    student(int R, int a, int b, int c, string x)
    {
        Grno();
        mk1 = a;
        mk2 = b;
        mk3 = c;
        name = x;
    }
    student(string x, int a, int b, int c)
    {
        Grno();
        mk1 = a;
        mk2 = b;
        mk3 = c;
        name = x;
    }
    void setrno(int a)
    {
        rno = a;
    }

    void setmk1(int a) { mk1 = a; }
    void setmk2(int a) { mk2 = a; }
    void setmk3(int a) { mk3 = a; }

    void setname(string a) { name = a; }
    void Sgrade(char a) { grade = a; }
    int getrno() { return rno; }
    int getmk1() { return mk1; }
    int getmk2() { return mk2; }
    int getmk3() { return mk3; }

    int gettotal()
    {
        total = getmk1() + getmk2() + getmk3();
        return total;
    }
    string getname() { return name; }
    char getgrade()
    {
        float a;
        a = gettotal() / 3.0;
        if (a >= 90)
        {
            grade = 'A';
        }
        else
        {
            if (a >= 80)
            {
                grade = 'B';
            }
            else
            {
                if (a >= 70)
                {
                    grade = 'C';
                }
                else
                {
                    if (a >= 60)
                    {
                        grade = 'D';
                    }
                    else
                    {
                        grade = 'F';
                    }
                }
            }
        }
        return grade;
    }
    void display()
    {
        cout << "\nName             : " << getname();
        cout << "\nRoll No.         : " << getrno();
        cout << "\n1st subject marks: " << getmk1();
        cout << "\n2nd subject marks: " << getmk2();
        cout << "\n3rd subject marks: " << getmk3();
        cout << "\nTotal  marks     : " << gettotal();
        cout << "\nGrade            : " << getgrade();
    }
    ~student() { cout << "\n~ Thank you ~"; }
};

int main()
{
    student s1("XYZ", 45, 56, 67), s3("ABC", 78, 67, 89);
    student s2(1, 67, 87, 65, "John");
    s3.setrno(2);
    s3.setmk1(89);
    s3.setmk2(88);
    s3.setmk3(91);
    s3.setname("RAJ");
    s1.display();
    cout << "\n";
    s2.display();
    cout << "\n";
    s3.display();
    cout << "\n";
    return 0;
}
