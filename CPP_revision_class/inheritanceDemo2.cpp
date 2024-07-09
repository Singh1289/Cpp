#include<iostream>
using namespace std;
class base {
 int i;

 public:
 base()
 {
     cout<<"\n Base class constructor is called..";
     i = 10;

 }
 base(int a){
     cout<<"\n parameterized Base class constructor is called..";
     i = a;
 }
 void display()
 {
     cout<<"\n i = "<<i;
 }
 virtual void fun() = 0;

 virtual void fun1()
 {
     cout<<"\n fun is called..";
 }
 virtual ~base()
 {
     cout<<"\n Base class destructor is called..";
 }
};

class derived : public base {
 int j;

  public:
    derived()
    {
        cout<<"\n derived class constructor is called..";
        j = 20;
    }

    derived(int a, int b) : base(a)
    {
        cout<<"\n parameterzied constructor of derived is called..";
        j = b;
    }
    void display_j()
    {
        cout<<"\n j = "<<j;
    }
    ~derived()
    {
        cout<<"\n derived class destructor is called..";
    }
    void fun()
    {
        cout<<"\n fun of derived is called..";
    }
};

int main()
{
    base *obj = new derived();

    obj->fun();

    delete obj;

    return 0;
}
