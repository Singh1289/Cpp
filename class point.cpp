// make class of point //
#include<iostream>
using namespace std;

class point{
    int x,y;
public :
    point(){}
    point(int a){x=a; y=a+5;}
    point(int a,int b){x=a+b; y=abs(a-b);}
    void set_x(int a){x=a;}
    void set_y(int a){y=a;}
    void set_point(int a,int b){x=a;y=b;}
    void display(){cout<<"\n("<<x<<","<<y<<")";}
    ~point(){cout<<"\n see you soon my friend..!!";}
};

int main()
{
    point m(2,10), n(5);
    m.display();
    n.display();

   /* m.x=2;
    m.set_x(4);
    m.set_y(10);


    n.set_point(10,20);
    n.display();
*/
    return 0;
}
