#include "emp.h"
#include "clerk.h"
#include "manager.h"
#include<iostream>
using namespace std;

int main()
{
 /*   manager m(10,"Pooja",50000.00f,4500);
    cout<<"\n Total Salary = "<<m.cal_netSal();
    clerk c(20,"Nayna",40000.00f,45,"Accounts");
    cout<<"\n Total Salary = "<<c.cal_netSal();
 */ emp *e = new manager(30,"pankaj",75000.00f,7500);
    cout<<"\n Salary = "<<e->cal_netSal();
    emp *e1 = new clerk(45,"Pooja",50000.00f,45,"accounts");
    cout<<"\n Salary = "<<e1->cal_netSal();

    delete e;
    delete e1;

    emp *earr[5];



    return 0;
}
