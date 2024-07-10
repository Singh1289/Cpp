#include<iostream>
#include<string.h>
#include"Clerk.h"
using namespace std;

Clerk::Clerk()
{
    cout<<"\n Clerk constructor called.";
   dept= new char[10];
   strcpy(dept,"Null");
   overTime=0;
}
Clerk::Clerk(int no, char *nm, float s,int ot,char * de):Employee(no,nm,s)
{
   cout<<"\n Clerk paramerterize constructor called.";
   dept = new char[strlen(de)+1];
   strcpy(dept,de);
   overTime=ot;
}

Clerk::~Clerk()
{
    cout<<"\n Clerk destructor called.";
    delete dept;
}
float Clerk::CalSalary()
{
    return bsal+ (overTime*500);
}
