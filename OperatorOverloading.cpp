#include <iostream>
using namespace std;
#include <stdlib.h>

class myInt
{
    int *ptr;

public:
    myInt()
    {
        ptr = new int;
        *ptr = 0;
        cout << "\n Default constructor is called..";
    }
    myInt(int n)
    {
        ptr = new int;
        *ptr = n;
        cout << "\n Parameterzied constructor is called..";
    }
    ~myInt()
    {
        cout << "\n Destructor is called..";
        delete ptr;
    }
    void display()
    {
        cout << "\n Value is :" << *ptr;
    }

    int getValue()
    {
        return *ptr;
    }
    void setValue(int a)
    {
        *ptr = a;
    }

    myInt operator+(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr + o.getValue());
        return temp;
    }

    myInt operator-(myInt &o)
    {
        myInt temp;
        temp.setValue(*ptr - o.getValue());
        return temp;
    }

    /*    myInt operator *(const myInt &o)
        {
            myInt temp;
            temp.setValue(*ptr - o.getValue());
            return temp;
        }

        myInt operator /(const myInt &o)
        {
            myInt temp;
            temp.setValue(*ptr - o.getValue());
            return temp;
        }

        myInt operator %(const myInt &o)
        {
            myInt temp;
            temp.setValue(*ptr - o.getValue());
            return temp;
        }
*/
    bool operator>(myInt &o)
    {
        if (*ptr > *o.ptr)
            return true;
        else
            return false;
    }

    /*      bool operator>=(const myInt &o)
            {
                if(*ptr >= *o.ptr)
                    return true;
                else
                    return false;
            }

            bool operator==(const myInt &o)
            {
                if(*ptr == *o.ptr)
                    return true;
                else
                    return false;
            }

            void operator+=(const myInt &r)
            {

            }*/
    myInt &operator++()
    {
        *ptr++;
        return *this;
    }

    myInt &operator++(int i)
    {
        *ptr++;
        return *this;
    }

    myInt(const myInt &r)
    {
        ptr = new int;
        *ptr = *r.ptr;
        cout << "\n Copy constructor is called..";
    }

    void operator=(const myInt &r)
    {
        delete ptr;

        ptr = new int;
        cout << "\nObj3 add : " << ptr;
        cout << "\ntemp add : " << r.ptr;
        *ptr = *r.ptr;
        cout << "\nObj3 value : " << *ptr;
        cout << "\nObj3 value : " << *r.ptr;
    }

    void *operator new(size_t s)
    {
        cout << "\n new operator is called..";
        void *p;
        p = ::operator new(s);
        return p;
    }

    void operator delete(void *p)
    {
        free(p);
        cout << "\n delete operator is called..";
    }
};

int main()
{

    myInt obj1(14);
    myInt obj2(10);
    myInt obj3(obj1);

    obj3 = obj1 + obj2; // ==>  obj1.operator+(obj2)

    // obj3++;

    // obj3 = tempObj;   //==> obj3.operator = (tempobj)
    obj3.display();

    if (obj1 > obj2) //==   obj1.operator > (obj2)
        cout << "\nbj1 is greater than obj2 ";
    else
        cout << "\nbj1 is less than obj2 ";

    // obj1+=obj2;  //===  obj1 = obj1+obj2

    // obj1+=4;

    myInt *p = new myInt;
    delete p;
    return 0;
}
