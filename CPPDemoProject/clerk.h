#include"emp.h"
#ifndef CLERK__H_
#define CLERK__H_
class clerk : public emp{
  protected :
    char *dept;
    int overtime;
  public:
    clerk();
    clerk(int,char *,float,int,char *);
    ~clerk();
    float cal_netSal();

};
#endif
