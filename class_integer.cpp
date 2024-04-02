#include <iostream>
using namespace std;
#include <stdlib.h>

class Integer
{
    int *ptr; // pointer varaible means it will hold address of integer value
public:
    Integer();
    Integer(int);
    ~Integer();
    void display();
    void set_value(int);
    int get_value();
    Integer operator+(const Integer &);
    Integer operator+(int);
    Integer operator-(const Integer &);
    Integer operator*(const Integer &);
    Integer operator/(const Integer &);
    int operator>(const Integer &);
    int operator<(const Integer &);
    int operator>=(const Integer &);
    int operator<=(const Integer &);
    int operator==(const Integer &);

    void operator+=(const Integer &); // i+=9   int i  i=2
    friend Integer operator+(int, Integer &);
    Integer(const Integer &);
    Integer &operator=(const Integer &);

    friend ostream &operator<<(ostream &, const Integer &);
    friend istream &operator>>(istream &, const Integer &);

    void *operator new(size_t size)
    {
        void *p;
        cout << "\n new operator is called...";
        p = ::operator new(size);
        return p;
    }

    void operator delete(void *p)
    {
        free(p);
        cout << "\n delete operator is called....";
    }
};

istream &operator>>(istream &is, const Integer &I)
{
    is >> *I.ptr;
    return is;
}
ostream &operator<<(ostream &os, const Integer &I)
{
    os << "\n Value = " << *I.ptr;
    return os;
}

Integer::Integer(const Integer &I)
{
    cout << "\n Copy constructor is called..";
    ptr = new int;
    *ptr = *I.ptr;
}

Integer &Integer ::operator=(const Integer &I)
{
    cout << "\n Assignment operator is called...";
    delete ptr;
    ptr = new int;
    *ptr = *I.ptr;
    return *this;
}

Integer::Integer()
{
    cout << "Default constructor is called" << endl;
    ptr = new int;
    *ptr = 0;
}

Integer::Integer(int i)
{
    cout << "Parameterized constructor is called" << endl;
    ptr = new int;
    *ptr = i;
}

Integer::~Integer()
{
    cout << "Destructor is called" << endl;
    delete ptr;
}

void Integer::display()
{
    cout << ptr << endl;
    cout << " " << *ptr << endl;
}

void Integer::set_value(int i)
{
    *ptr = i;
}

int Integer::get_value()
{
    return *ptr;
}

Integer Integer::operator+(const Integer &I)
{
    Integer t;
    int temp;
    temp = *ptr + *I.ptr; //*I.ptr
    t.set_value(temp);
    return t;
}

Integer Integer::operator+(int x)
{
    Integer t;
    t.set_value(*ptr + x);
    return t;
}

int Integer::operator>(const Integer &I)
{
    if (*ptr > *I.ptr)
        return 1;
    else
        return 0;
}

int Integer::operator<(const Integer &I)
{
    if (*ptr < *I.ptr)
        return 1;
    else
        return 0;
}

int Integer::operator>=(const Integer &I)
{
    if (*ptr >= *I.ptr)
        return 1;
    else
        return 0;
}

int Integer::operator<=(const Integer &I)
{
    if (*ptr <= *I.ptr)
        return 1;
    else
        return 0;
}

int Integer::operator==(const Integer &I)
{
    if (*ptr == *I.ptr)
        return 1;
    else
        return 0;
}

void Integer::operator+=(const Integer &I)
{
    *ptr = *ptr + *I.ptr;
}

Integer operator+(int x, Integer &obj)
{
    Integer t;
    t.set_value(x + obj.get_value());
    return t;
}

int main()
{
    Integer obj;
    Integer obj1(90), obj2;
    obj.display();
    cout << obj1.get_value() << endl;
    obj.set_value(88);
    obj.display();
    obj1.display();
    if (obj > obj1)
        cout << "obj is greater than obj1";
    else
        cout << "obj1 is greater than obj";

    obj2 = obj + obj1;
    obj2 = obj1 + 12; // obj1.operator+(12);
    obj2 = 15 + obj1; // friend function  operator+(15,obj1)

    obj2.display();
    obj += obj1; // obj=obj+obj1;

    obj.display();

    Integer obj4;
    cout << "\n Enter value...";
    cin >> obj4;

    cout << obj4;

    Integer *p = new Integer();
    cout << "\n p = " << p;

    p->set_value(10);
    p->display();

    delete p;
    return 0;
}