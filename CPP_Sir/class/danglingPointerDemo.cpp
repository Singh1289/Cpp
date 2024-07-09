#include<iostream>
using namespace std;

//int *fun(int *);

int main()
{
    int *ptr;
   /* int num = 10;

    ptr = &num;

    ptr = fun(ptr);


    cout<<"\n *ptr = "<<*ptr;*/

    ptr = new int;
    *ptr = 20;
    cout<<"\n ptr = "<<ptr;
    delete ptr;
    ptr = NULL;


    cout<<"\n ptr = "<<ptr;
    *ptr = 40;

    return 0;
}
/*
int *fun(int *ptr)
{
    *ptr = *ptr + 10;
    return ptr;
}*/
