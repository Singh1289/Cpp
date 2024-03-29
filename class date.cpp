#include <iostream>
using namespace std;

class date
{
   // private - default
   int dd, mm, yy;

public:
   void set_day(int d)
   {
      dd = d;
   }
   void set_month(int m)
   {
      mm = m;
   }
   void set_year(int y)
   {
      yy = y;
   }
   void set_date(int d, int m, int y)
   {
      dd = d;
      mm = m;
      yy = y;
   }
   void display()
   {
      cout << "\n"
           << dd << " / " << mm << " / " << yy;
   }
};

int main()
{

   date obj1, obj2;

   obj1.set_date(28, 3, 2024);
   obj1.display();

   obj2.set_date(30, 10, 2009);
   obj2.display();

   obj1.set_day(12);
   obj1.display();

   return 0;
}
