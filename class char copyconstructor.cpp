// write a class of char and copy constructor (deep c c).   default shallow c c

#include<iostream>
using namespace std;

class mychar{
    char *ch;
public:
    mychar()
    {
        ch= new char;
        *ch= 'Z';
        cout<<"\n ADD : "<<ch;
        cout<<"\nNew object born with default Z.";
    }
    mychar(char a)
    {
        ch= new char;
        *ch='a';
        cout<<"\n ADD : "<<ch;
        cout<<"\nNew object born with some value.";
    }
    ~mychar()
    {
        delete ch;
        cout<<"\n object is no more..!!";
    }
    void display()
    {
        cout<<"\n value is : "<<*ch;
    }
    void enterch(char a)
    {
        *ch= a;
    }

    char checkch()
    {
        return *ch;
    }
    mychar operator +(mychar &p)
    {
        mychar temp;
        temp.enterch(*ch + p.checkch());
        return temp;
    }
    mychar(const mychar &r)
    {
        ch = new char;
        *ch = *r.ch;
        cout << "\n Copy constructor is called..";
    }
    mychar operator =(mychar p)
    {

        delete ch;
        ch = new char;
        *ch = *p.ch;
    }

};

int main()
{
    mychar c1,c3;
    mychar c2('A');

    c1.display();
    c2.display();
    c3 = c1 +c2;
    return 0;
}


