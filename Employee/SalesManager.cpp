#include<iostream>
#include<string.h>
#include"SalesManager.h"
using namespace std;

SalesManager::SalesManager()
{
    cout<<"\n SalesManager constructor called.";
    sales=0;
}
SalesManager::SalesManager(int no,char *nm,float s,int al,int sale):Manager(no,nm, s,al)
{
    cout<<"\n SalesManager paramerterize constructor called.";
    sales=sale;
}

SalesManager::~SalesManager()
{
    cout<<"\n SalesManager destructor called.";
}

float SalesManager::totalSalesCom()
{
   //return (sales * 15)/100;
   return bsal+allow+ totalSalesCom();
}
/*
float SalesManager::CalSalary()
{
   return bsal+allow+ totalSalesCom();
}
*/
