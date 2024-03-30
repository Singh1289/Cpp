/*  complex number = 3 + 4i

  13 + 25i



*/
#include <iostream>
using namespace std;

class mycomplex
{
    int real, imag;

public:
    mycomplex()
    {
        cout << "\n Default constructor is called..";
        real = 0;
        imag = 0;
    }
    mycomplex(int i)
    {
        cout << "\n Single parameter constructor is called..";
        real = i;
        imag = i;
    }
    mycomplex(int i, int j)
    {
        cout << "\n Two parameter constructor is called..";
        real = i;
        imag = j;
    }
    void display()
    {
        cout << "\n\n"
             << real << " + " << imag << "i";
    }

    mycomplex operator-(mycomplex c)
    {
        mycomplex res;
        res.real = real - c.real;
        res.imag = imag - c.imag;
        return res;
    }

    mycomplex operator+(mycomplex c)
    {
        mycomplex res;
        res.real = real + c.real;
        res.imag = imag + c.imag;
        return res;
    }
    ~mycomplex() { cout << "\n Destructor is called.."; }
};

int main()
{
    mycomplex c1(2, 3);
    mycomplex c2(5);
    mycomplex c3;

    c3 = c1 + c2; //  ==   c1.operator+(c2)
    c3.display();

    c3 = c1 - c2;
    c3.display();
}
