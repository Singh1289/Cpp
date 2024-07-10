#include<iostream>
#include<string.h>
#include"Manager.h"
using namespace std;

Manager::Manager()
{
    cout<<"\n Manager constructor called.";
    allow=0;
}
Manager::Manager(int no, char *nm, float s, int all):Employee(no,nm,s)
{
    cout<<"\n Manager paramerterize constructor called.";
    allow = all;
}

Manager::~Manager()
{
    cout<<"\n Manager destructor called.";
}
/*
float Manager::CalSalary()
{
    return bsal + allow;
}
*/
