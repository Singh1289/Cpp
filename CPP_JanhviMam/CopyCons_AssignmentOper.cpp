#include <iostream>
using namespace std;

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

    myInt operator +(myInt &o)
    {
        myInt temp;
         *(temp.ptr) = *(this->ptr) + *(o.ptr);    //temp.setValue(*ptr + o.getValue());
        return temp;
    }

    myInt operator -(myInt o)
    {

        myInt temp;
        temp.setValue(*ptr - o.getValue());
        return temp;
    }
    myInt operator *(myInt &o)
    {

        myInt temp;
        *(temp.ptr) = *(this->ptr) * *(o.ptr);
        return temp;
    }
    myInt operator /(myInt &o)
    {

        myInt temp;
        *(temp.ptr) = *(this->ptr) / *(o.ptr);
        return temp;
    }
    myInt operator %(myInt o)
    {

        myInt temp;
        *(temp.ptr) = *(this->ptr) % *(o.ptr);
        return temp;
    }
    void operator++()
    {
        *ptr+= 1;

    }
    void operator--()
    {
        *ptr-= 1;
    }

    bool operator >(myInt &o)
    {
        if (*ptr > *o.ptr)
            return true;
        else
            return false;
    }

    bool operator <(myInt &o)
    {
        if (*ptr < *o.ptr)
            return true;
        else
            return false;
    }

    bool operator >=(myInt &o)
    {
        if (*ptr >= *o.ptr)
            return true;
        else
            return false;
    }

    bool operator <=(myInt &o)
    {
        if (*ptr <=  *o.ptr)
            return true;
        else
            return false;
    }

    bool operator ==(myInt &o)
    {
        if (*ptr == *o.ptr)
            return true;
        else
            return false;
    }

    myInt(const myInt &r)
    {
        ptr = new int;
        *ptr = *r.ptr;
        cout << "\n Copy constructor is called..";
    }

    void operator =(const myInt &r)
    {
        delete ptr;
        ptr = new int;
        *ptr = *r.ptr;
    }
};

int main()
{

    myInt obj3;
    myInt obj1(400);
    myInt obj2(300);
   // {
   //   myInt obj1(400);
    //  myInt obj2(300);
   // }

    obj3 = obj1 + obj2; // ==>  obj1.operator+(obj2)
    // obj3 = tempObj;   //==> obj3.operator = (tempobj)
    obj3.display();
    (obj1 > obj2)?cout << "\nobj1 is greater "<<obj1.getValue():cout << "\nObj2 is greater "<<obj2.getValue();
    (obj1 < obj2)?cout << "\nobj1 is smaller "<<obj1.getValue():cout << "\nObj2 is smaller "<<obj2.getValue();
    (obj1 >= obj2)?cout << "\n greater equal ":cout << "\nno greater equal ";
    (obj1 <= obj2)?cout << "\n smaller equal":cout << "\n no smaller equal ";
    (obj1 == obj2)?cout << "\nBoth are equal ":cout << "\nBoth are not equal";
    //obj3++;
    ++obj3;    //obj3.operator ++();
    obj3.display();
    --obj3;
    obj3.display();
    obj3 = obj1 - obj2;
    obj3.display();
    obj3 = obj1 * obj2;
    obj3.display();
    obj3 = obj1 / obj2;
    obj3.display();
    obj3 = obj1 % obj2;
    obj3.display();

    return 0;
}
