#include "emp.h"
#ifndef MANAGER__H_
#define MANAGER__H_
class manager : public emp{
protected:
    float allo;
public:
    manager();
    manager(int, char *, float, float);
    ~manager();
    float cal_netSal();
};
#endif // MANAGER__H_
