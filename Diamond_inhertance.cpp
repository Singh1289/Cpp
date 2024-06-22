//Multiple inhertance
#include<iostream>
using namespace std;

class A{
protected:
    int a;
public:
    A(){
        a=1;
    }
    A(int no){
        a=no;
    }
    void display(){
        cout<< "\n a = "<< a;
    }
};

class B : virtual public A{
protected:
    int b;
public:
    B(){
        b=1;
    }
    B(int no,int mn):A(mn){
        b=no;

    }
    void display(){
        cout<< "\n A = "<< a<<"  B = "<<b;
    }
};

class C : virtual public A{
protected:
    int c;

public:
    C(){
        c=1;
    }
    C(int no, int mn):A(mn){
        c=no;

    }
    void display(){
        cout<< "\n A = "<< a<< " C = "<<c;
    }
};

//class D : public C,public B{
class D : public C, public B{
    int d;
public:
    D(){
        d=1;
    }
    D(int no,int cd, int ab,int mn):C(no),A(mn),B(cd){
        d=ab;

    }
    void display(){
  // 1      cout<< "\nfrom path a-c-d, A = "<< C::a<<"  : C is = "<<C::c<<" : D is = "<<d;
  // 1      cout<< "\nfrom path a-b-d, A = "<< B::a<<"  : B is = "<<B::b<<" : D is = "<<d;
    // by making virtual to remove ambiguity
    cout<< "\nfrom path a-c-d, A = "<< a<<"  : C is = "<<c<<" : D is = "<<d;
    cout<< "\nfrom path a-b-d, A = "<< a<<"  : B is = "<<c<<" : D is = "<<d;

    }
};

int main()
{


    D dObj2(10,24,35,60);
    dObj2.display();


    return 0;
}

