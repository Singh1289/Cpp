#include<iostream>
using namespace std;
class date {
  int dd,mm,yy;

  public:
      date() {
          cout<<"\n Default constructor of date is called..";
         dd = 1;
         mm = 1;
         yy = 1991;
      }
      date(int d, int m, int y)
      {
          cout<<"\n Parameterized constructor of date is called..";
          dd = d;
          mm = m;
          yy = y;
      }
      void display()
      {
          cout<<"\n"<<dd<<" / "<<mm<<" / "<<yy;
      }
      ~date()
      {
          cout<<"\n Date destructor is called...";
      }
  };

  class employee{
    int empno;
    string name;
    date doj;
    date dob;

    public:
      employee()
      {
          cout<<"\n Default constructor of employee is called..";
          empno = 0;
          name = "unknown";
      }
      employee(int en, string nm, int dj, int mj, int yj, int db, int mb, int yb )
      : doj(dj,mj,yj),dob(db,mb,yb)
      {
          cout<<"\n parameterized constructor of emp is called..";
          empno = en;
          name = nm;

      }
      void display_emp()
      {
          cout<<"\n Empno = "<<empno;
          cout<<"\n Name = "<<name;
          dob.display();
          doj.display();
      }
      ~employee()
      {
          cout<<"\n employee destructor is called...";
      }
  };

  int main()
  {
      employee e1(10,"Pooja",12,10,1978,1,3,2000);
      e1.display_emp();
      return 0;
  }
