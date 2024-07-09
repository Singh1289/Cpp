#include<iostream>
using namespace std;
class base1 {
    protected:
    int i;
  public :
      base1() {
          cout<<"\n base1 constructor is called..";
      i = 10;
      }
      void fun()
      {
          cout<<"\n Base fun...";
      }
};

class derived1 :  virtual public base1 {
    protected:
  int j;
  public:
  derived1()
  {
       cout<<"\n derived1 constructor is called..";
      j = 20;
  }
};

class derived2 : virtual public base1 {
    protected:
   int k;
    public:

   derived2()
   {
        cout<<"\n derived2 constructor is called..";
       k = 30;
   }
};

class derived : public derived1, public derived2{
  int l;
  public:
  derived()
  {
       cout<<"\n derived constructor is called..";
      l = 40;
  }
  void display()
  {
      cout<<"\n i = "<<i;
      cout<<"\n j = "<<j;
      cout<<"\n k = "<<k;
      cout<<"\n l = "<<l;
  }
};


int main()
{
    derived obj;
    base1 *ptr = new derived();

    ptr->fun();
    obj.display();
    obj.fun();
    return 0;

}
