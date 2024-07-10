#include"Employee.h"
#ifndef MANAGER__H_
#define MANAGER__H_
class Manager : public Employee
{
protected:
    int allow;
public:
    Manager();
    Manager(int,char *,float,int);
    ~Manager();
 //   float CalSalary();
    virtual float totalSales()=0;

};
#endif // MANAGER__H_
