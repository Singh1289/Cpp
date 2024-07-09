#include <iostream>
using namespace std;

class date
{
   // private - default
   int dd, mm, yy;

public:
   date()
   {
      cout << "\n Default constructor is called..";
      dd = 1;
      mm = 1;
      yy = 1990;
   }

   date(int n)
   {
      cout << "\n Single parameter constructor is called..";
      dd = n;
      mm = n;
      yy = 1900;
   }

   date(int a, int b, int c)
   {
      cout << "\n 3 parameter constructor is called..";
      dd = a;
      mm = b;
      yy = c;
   }

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
   void set_date(int dd, int mm, int yy)
   {
      this->dd = dd;
      this->mm = mm;
      this->yy = yy;
   }
   void display()
   {
      cout << "\n"
           << dd << " / " << mm << " / " << yy;
   }
   ~date() { cout << "\n Destructor is called.."; }
};

int main()
{

   date obj1, obj2(11);
   date obj3(23, 3, 2024);

   obj1.display();
   obj2.display();
   obj3.display();

   /*obj1.set_date(28,3,2024);//===> set_date(&obj1,28,3,2024)
   obj1.display();

   obj2.set_date(30,10,2009);
   obj2.display();

   obj1.set_day(12);
   obj1.display();*/

   return 0;
}
