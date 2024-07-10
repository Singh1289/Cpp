#include"Employee.h"
#ifndef CLERK__H_
#define CLERK__H_
class Clerk : public Employee
{
protected:
    int overTime;
    char *dept;
public:
    Clerk();
    Clerk(int,char *, float, int, char *);
    ~Clerk();
    float CalSalary();
};
#endif // CLERK__H_
