#include<iostream>
using namespace std;
#include "clerk.h"
#include<string.h>

clerk::clerk()
{
    overtime = 0;
    dept = new char[10];
    strcpy(dept,"PPP");

}

clerk::clerk(int en,char *nm,float s,int ot,char *dt) : emp(en,nm,s)
{
    cout<<"\n parameterized constructor of clerk";
    overtime = ot;
    dept = new char[strlen(dt) + 1];
    strcpy(dept,dt);
}

clerk::~clerk()
{
    cout<<"\n clerk destructor";
    delete dept;
}

float clerk::cal_netSal()
{
    return bsal + overtime * 750;
}
