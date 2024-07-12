#include<iostream>
using namespace std;

class base{
  public:
      void fun() { cout<<"\n fun of base is called...";}
};

class derived:public base {
public:
    void fun2() { cout<<"\n fun2 of derived is called.."; }
};

int main()
{
    base *ptr = new derived();

    ptr->fun();
//    ptr->fun2();    error

//  derived *dptr = ptr;   //error invalid conversion from base * to derived *

   derived *dptr = static_cast<derived *>(ptr);
   dptr->fun2();
   dptr->fun();
    return 0;
}
/* Output:
 fun of base is called...
 fun2 of derived is called..
 fun of base is called...*/
