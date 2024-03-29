// class of time and try add 1 sec in loop //
#include <iostream>
using namespace std;

class time
{
   int hh, mm, ss;

  public:
    time(){hh=12;mm=59;ss=50;}
    time(int a,int b){
        if((hh>=1) && (hh<=12)){hh=a;}
        if((mm>=1) && (mm<=59)){mm=b;}
    }
    time(int a, int b ,int c){
        if((a>=1) && (a<=12)){hh=a;}
        if((mm>=1) && (mm<=59)){mm=b;}
        if((ss>=1) && (ss<=59)){ss=c;}
       }
    void set_h(int a)
   {
      hh = a;
   }
   void set_m(int m)
   {
      mm = m;
   }
   void set_s(int b)
   {
      ss = b;
   }
   void set_time(int d, int m, int y)
   {
      hh = d;
      mm = m;
      ss = y;
   }
   void display()
   {
      cout << "\n| "<< hh << " : " << mm << " : " << ss<<"|";
   }
   void increment()
   {
       if(ss==59)
       {
           if(mm==59)
           {
               if(hh==12)
               {
                   hh=1;
                   mm=0;
                   ss=0;
               }else{hh=hh+1;mm=00;ss=00;}

           } else{mm=mm+1;ss=00;}
       } else{ss=ss+1;}

   }
   int gethour(){return hh;}
   int getmin(){return mm;}
   int getsec(){return ss;}
   ~time(){cout<<"\n Destructor is called..!!";}
};

int main()
{

   time tt, aa(2,30),bb(12,36,22);
   //tt.set_time(12,59,55);
   tt.display();
   aa.display();
   bb.display();
   cout<<"\n : "<<tt.gethour();
   cout<<"\n : "<<tt.getmin();
   cout<<"\n : "<<tt.getsec();

   /*
   for(int i=1;i<30;i++)
   {
       tt.increment();
       tt.display();
       for(int j=1;j<=999990900;j++){}
       cout<<"\n";
   }
   */

   return 0;
}
