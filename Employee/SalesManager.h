#include"Manager.h"
#ifndef SALESMANAGER__H_
#define SALESMANAGER__H_
class SalesManager : public Manager
{
    int sales;
public:
    SalesManager();
    SalesManager(int,char*, float,int, int);
    ~SalesManager();
   // float CalSalary();
    float totalSalesCom();
};
#endif
