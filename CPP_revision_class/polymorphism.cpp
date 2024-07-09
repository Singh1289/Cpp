#include<iostream>
using namespace std;
class employee1{
    protected:
    int empno;
    string name;
    float bsal;

    public:
      employee1()
      {
          cout<<"\n Default constructor of employee is called..";
          empno = 0;
          name = "unknown";
      }
      employee1(int en, string nm, int s )

      {
          cout<<"\n parameterized constructor of emp is called..";
          empno = en;
          name = nm;
          bsal = s;

      }
      void display_emp()
      {
          cout<<"\n Empno = "<<empno;
          cout<<"\n Name = "<<name;
      }

      ~employee1()
      {
          cout<<"\n employee destructor is called...";
      }

      virtual float cal_netSal() = 0; // pure virtual function

  };

  class manager : public employee1
  {
     int allo;
     public:
     manager()
     {
       allo = 0;
     }
     manager(int en, string nm, int s, int a) : employee1(en,nm,s)
     {
         allo = a;
     }
     ~manager()
     {
         cout<<"\n destructor of manager..";
     }
     float cal_netSal()
     {
         return bsal + allo;
     }
  };

  int main()
  {
      employee1 *e = new manager(10,"Pooja",4500,500);
      cout<<" \n Salary = "<<e->cal_netSal();

      return 0;
  }
