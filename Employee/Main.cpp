#include<iostream>
#include<string.h>
#include"Clerk.h"
#include"Manager.h"
#include"Employee.h"
#include "SalesManager.h"
using namespace std;

int main()
{
   // Employee e1; because emp class have one pure virtual function so it is Abstract class
   Clerk c1(12,"Abhi",70000.00f,2,"Manager");
   cout<<"\n Clerk sal : "<<c1.CalSalary();

   Employee *e= new Clerk(22,"Abhishek",85000.00f,2,"Manager");
   cout<<"\n Clerk sal-2 : "<<e->CalSalary();
   e->~Employee();

   cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
   Employee *e1 = new SalesManager(1,"harsh",2500.00f,150,50000);
// Manager *e1 = new SalesManager(1,"abhi",25000.00f,1500,60000);
   cout<<"\n salesManager Com : "<<e1->totalSalesCom();
   cout<<"\n salesManager Salary : "<<e1->CalSalary();








/*
    int x=10;
    int &a= x;
    int p= a;
    cout<<"\n p
    int *b= &a;
    cout<<"\n *b : "<<*b;
*/
    return 0;
}
