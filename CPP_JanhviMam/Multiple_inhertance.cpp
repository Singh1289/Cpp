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

class B{
protected:
    int b;
    int a;
public:
    B(){
        b=1;
    }
    B(int no,int mn){
        b=no;
        a=mn;
    }
    void display(){
        cout<< "\n B = "<< b;
    }
};

class C : public A,public B{
    int c;
public:
    C(){
        c=1;
    }
    C(int no,int cd, int ab,int mn):A(no),B(cd,mn){
        c=ab;

    }
    void display(){
        cout<< "\n A = "<< A::a<<"  : B 1st is ="<<B::b<<"  : B 2nd is = "<<B::a<<" : C is = "<<c;
    }
};

int main()
{
    C cObj;
    cObj.display();

    C cObj2(10,24,35,60);
    cObj2.display();


    return 0;
}
