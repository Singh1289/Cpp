/*
Program		: To demonstate the aMultiple inheritance
			 CASE IIb
Program	By	: Anil Donwade
Date		: 23-04-2024
*/

#include <iostream>
using namespace std;

// base class-1
class A
{
protected:
	int a;

public:
	A()
	{
		a = 0;
	}
	A(int a)
	{
		this->a = a;
	}

	void display()
	{
		cout << "a=" << a << "\n";
	}
};

// derived class - 1
class B : virtual public A
{
protected:
	int b;

public:
	B(int a, int b) : A(a)
	{
		this->b = b;
	}

	B(int b)
	{
		this->b = b;
	}
	void display()
	{
		cout << "a=" << a << "b=" << b << "\n";
	}
};

// derived class - 2
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
		cout << "a=" << a << "c=" << c << "\n";
	}
};

// derived class D from B and C => Multiple Inheritance
class D : public B, public C
{
protected:
	int d;

public:
	D(int a, int b, int c, int d) : B(b), C(c), A(a)
	{
		this->d = d;
	}

	void display()
	{
		cout << "From path A-C, a=" << a << " a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
	}
};

int main()
{
	D dObj(10, 20, 30, 40);
	dObj.display();
	return 0;
}
