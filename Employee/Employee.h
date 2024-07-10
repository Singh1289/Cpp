#ifndef EMPLOYEE__H_
#define EMPLOYEE__H_

class Employee
{
protected:
    int empNo;
    char *name;
    float bsal;
public:
    Employee();
    Employee(int, char*, float);
    ~Employee();
    virtual float CalSalary()=0;
};
#endif // EMPLOYEE__H_
