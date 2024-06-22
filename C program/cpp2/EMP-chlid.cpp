
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
    // char name[20];
    char *nameptr;
    float salary;

public:
    Employee()
    {
        cout << "\nBase classDefault constructor invoked ........";
        nameptr = new char;
        *nameptr = '\0';
        this->salary = 0.0f;
    }

    Employee(/*Employee *this,*/ const char name[20], float salary)
    {
        cout << "\nParent Parameterized constructor invoked ........";
        nameptr = new char[strlen(name) + 1];
        strcpy(nameptr, name);
        this->salary = salary;
    }

    float get_salary()
    {
        return salary;
    }


    void set_name(const char *n)
    {
        strcpy(nameptr, n);
    }


    const char *get_name()
    {
        return nameptr;
    }

    // copy constructor
    Employee(Employee &eref)
    {
        cout << "\ncopy constructor invoked .....";
        nameptr = new char[strlen(eref.nameptr) + 1]; // allocate new memory for new object
        strcpy(nameptr, eref.nameptr);
        salary = eref.salary;
    }
    void set_salary(float salary)
    {
        this->salary = salary;
    }

    void increment(float pc)
    {
        salary += salary * (pc / 100);
    }
     virtual void display()
    {
        cout <<"\n"<< nameptr << " " << salary;
    }


    // destructor
    ~Employee()
    {
        cout << "\nDestructor invoked ......";
        delete nameptr;
    }
};

// derived class
class Manager : public Employee
{
    float allowance;

public:
    Manager()
    {
        allowance = 0;
        cout<<"\n manager default constructor is called";
    }
    Manager(const char name[20], float salary, float allowance)
        : Employee(name, salary)
    {
        this->allowance = allowance;
        cout << "\nDerived class constructor is called";
        // name= .... and salary= .. wrong
        //  first base class constructor called then child class
    }

    //overriding the display
    void display(){
       // cout<< "\n"<<name<<"  "<<salary<<"  "<<allowance;
        cout<< "\n"<<get_name()<<"  "<<get_salary()<<"  "<<allowance;
    }


    ~Manager()
    {
        cout<<"\n Manager destructor is called..!!";
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

int main()
{
 /*   Employee e1;            // 1
    Employee emparr[4];     // 2,3,4,5
    Employee ex("A", 1000); // 6, 7 => p.constructor
    Employee ey("B", 2000);
    Employee emparr1[] = {ex, ey}; //

    e1.display();
    Employee e2("Vijay", 12000);
    e2.display();
    int ipc = check_increment(e2);
    e2.increment(ipc);
    cout << "After salary increment:" << "\n";
    e2.display();

    Manager m1;       // default constructor
    m1.display();

    Manager m2("Rajesh", 35000, 14735);
    m2.display();

*/


    Employee *eptr; // for base class pointer

    eptr = new Employee("Vijay", 12000);
    eptr-> display();   // 1

    eptr= new Manager("Mahesh",20000,3000); // upcasting
    eptr-> display();  //2

    Employee *emp[4];
    emp[0]= new Employee("RAJ",15000);
    emp[1]= new Employee("Rohit",25000);
    emp[2]= new Employee("RAJU",20000);
    emp[3]= new Manager("ABHI",50000, 4000);

    for(int i=0;i<4;i++)
    {
        emp[i]->display();
    }



    return 0;
}
