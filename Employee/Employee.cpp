#include<iostream>
#include<string.h>
#include"Employee.h"
using namespace std;

Employee::Employee()
{
    cout<<"\n Employee constructor called.";
   empNo=0;
   name= new char[10];
   strcpy(name,"Unknown");
   bsal= 0.00f;
}
Employee::Employee(int no, char *nm, float s)
{
    cout<<"\n Employee paramerterize constructor called.";
   empNo=no;
   name= new char[strlen(nm)+1];
   strcpy(name,nm);
   bsal= s;
}
Employee::~Employee()
{
    cout<<"\n Employee destructor called.";
    delete name;
}

