#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    char *name;
    float salary;

public:
    Employee()
    {
        cout << "\nDefault constructor called";
        name = new char;
        *name = '\0';
        salary = 0;
    }

    Employee(const char nam[], float sal)
    {
        cout << "\nParameterize constructor called";
        name = new char[strlen(nam) + 1];
        strcpy(name, nam);
        salary = sal;
    }
    // copy constructor
    Employee(Employee &ref)
    {
        cout << "\ncopy constructor invoked .......\n";
        name = new char[strlen(ref.name) + 1]; // alocate new memory for new object // +1 is for null charactor
        strcpy(name, ref.name);
        salary = ref.salary;
    }

    void set_salary(float sal)
    {
        this->salary = sal;
    }

    void set_name(const char *n)
    {
        strcpy(name, n);
    }

    float get_salary()
    {
        return salary;
    }

    const char *get_name()
    {
        return name;
    }
    void increaseSal(int rate)
    {
        salary = (salary * rate) / 100;
    }

    void display()
    {
        cout << "\n Name: " << this->name << " |=| Salary: " << this->salary;
    }

    ~Employee()
    {
        delete name;
        cout << "\n Destructor is called...!!";
    }
};

float check_increment(Employee e)
{
    cout << "\nCopy of e got created";
    if (e.get_salary() < 15000)
        return 10;
    else if (e.get_salary() < 20000)
        return 8;
    else if (e.get_salary() < 40000)
        return 5;
}
/*
int main()
{
         // default
          Employee e1;
          e1.display();

          // parameterize
          Employee e2("Abhi", 2000);
          e2.display();

       // array
      // Employee a1;
      // Employee a2("Deepak", 50000);
     //  Employee a3;
      // Employee a4("Rohit", 5000);

       Employee emp[4];
       for (int i = 0; i < 4; i++)
       {
           emp[i].display();
       }
   */

    /* Employee A1("sanju", 10000);
     A1.display();

     Employee B1(A1);
     B1.display();

    Employee abc("harsh", 25000);
    abc.display();

    abc.set_salary(35000.0f);
    cout << "\n new salary is : " << abc.get_salary();

    abc.set_name("Harsh Rohit");
    cout << "\n Full name is : " << abc.get_name();
    abc.display();

    float rate = check_increment(abc);
    abc.increaseSal(rate);
    cout << "\n Increased salary is : " << abc.get_salary();

    return 0;
}
*/



