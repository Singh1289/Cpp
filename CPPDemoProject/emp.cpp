#include<string.h>
#include<iostream>
using namespace std;
#include "emp.h"

emp::emp()
{
    cout<<"\n Emp constructor";
   empno = 0;
   name = new char[10];
   strcpy(name,"unknown");
   bsal = 0.0f;
}

emp::emp(int eno, char *nm, float s)
{
     cout<<"\n Emp parameterized constructor";
    empno = eno;
    name = new char[strlen(nm) + 1];
    strcpy(name,nm);
    bsal = s;
}

emp::~emp()
{
    cout<<"\n Emp destructor";
    delete name;
}
