#include"manager.h"
#include<iostream>
using namespace std;

manager::manager()
{
     allo = 0.0f;
}

manager::manager(int en, char *nm, float s, float a) : emp(en,nm,s)
{
    cout<<"\n parameterized constructor of manager";
    allo = a;
}

manager::~manager()
{
    cout<<"\n Manager destructor is called..";
}

float manager::cal_netSal()
{
    return bsal + allo;
}
