// Multiple inhertance
#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    A()
    {
        this->a = 0;
    }
    A(int a)
    {
        this->a = a;
    }
    void display()
    {
        cout << "\n a = " << a;
    }
};

class B : virtual public A
{
protected:
    int b;

public:
    B(int b)
    {
        this->b = b;
    }
    B(int a, int b) : A(a)
    {
        this->b = b;
    }
    void display()
    {
        cout << "\n A = " << a << "  B = " << b;
    }
};

class C : virtual public A
{
protected:
    int c;

public:
    C(int c)
    {
        this->c = c;
    }
    C(int a, int c) : A(a)
    {
        this->c = c;
    }
    void display()
    {
        cout << "\n A = " << a << " C = " << c;
    }
};

// class D : public C,public B{
class D : public C, public B
{
protected:
    int d;

public:
    D()
    {
        this->d = 1;
    }
    D(int a, int b, int c, int d) : B(b), A(a), C(c)
    {
        this->d = d;
    }
    void display()
    {
        // 1      cout<< "\nfrom path a-c-d, A = "<< C::a<<"  : C is = "<<C::c<<" : D is = "<<d;
        // 1      cout<< "\nfrom path a-b-d, A = "<< B::a<<"  : B is = "<<B::b<<" : D is = "<<d;
        // by making virtual to remove ambiguity
        cout << "\nfrom path a-c-d, A = " << a << "  : C is = " << c << " : D is = " << d;
        cout << "\nfrom path a-b-d, A = " << a << "  : B is = " << c << " : D is = " << d;
    }
};

int main()
{

    D Obj(10, 24, 35, 60);
    Obj.display();

    return 0;
}
