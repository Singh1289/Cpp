// dangling pointer  majnoo/ romeo pointer //

#include<iostream>
using namespace std;
/*
int *fun();
int *fun1(int*p);

int main()
{
    int *ptr;    //ptr is dangling pointer. Its refer to a address that stack was relesed
    //ptr= fun();
    ptr = fun1(ptr);
    cout<<"\n *ptr : "<<*ptr;
    return 0;
}
*/
int *fun()      // crash function is not define
{
    int num=10;
    return &num;
}

int *fun1(int*p)
{
    int num =10;
    return &num;
}



 int main()
{
   int *ptr;
    int num = 10;
 /*
    ptr = &num;

    ptr = fun1(ptr);         // crash---romeo


    cout<<"\n *ptr = "<<*ptr;
*/
    ptr = new int;
    *ptr = 20;
    cout<<"\n ptr 1= "<<ptr; // address
    delete ptr;
    ptr = NULL;


    cout<<"\n ptr  2= "<<ptr; // 0
    *ptr = 40;

    cout<<"\n ptr 3 = "<<ptr; // crash

    return 0;
}
