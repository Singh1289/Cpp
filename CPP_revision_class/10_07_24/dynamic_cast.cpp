#include <iostream>
#include <typeinfo> // Header for typeid operator
using namespace std;

// Base class
class MyBase {
  public:
    virtual void Print() {
        cout << "Base class" << endl;
    }
    
};

// Derived class
class MyDerived : public MyBase {
  public:
    void Print() {
        cout << "Derived class" << endl;
    }
    void fun()
    {
    	cout<<" \nfun of MyDerived is called..";
	}
};

int main()
{
    // Using typeid on built-in types types for RTTI
    cout << typeid(100).name() << endl;
    cout << typeid(100.1).name() << endl;

    // Using typeid on custom types for RTTI
    MyBase* b1 = new MyBase();
    MyBase* d1 = new MyDerived();

    MyBase* ptr1;
    ptr1 = d1;

    cout << typeid(*b1).name() << endl;
    cout << typeid(*d1).name() << endl;
    cout << typeid(*ptr1).name() << endl;

    if ( typeid(*ptr1) == typeid(MyDerived) ) {
    cout << "\n Inside if - Ptr1 has MyDerived object" << endl;
    }

    // Using dynamic_cast for RTTI
    MyDerived* ptr2 = dynamic_cast<MyDerived*> ( b1 );
    cout<<"\n ptr2 = "<<ptr2;
    if ( ptr2 ) {
    cout << "Ptr2 has MyDerived object" << endl;
    ptr2->fun();
    }

	return 0;
}
/*
Output -
i
d
6MyBase
9MyDerived
9MyDerived
Ptr has MyDerived object
Ptr has MyDerived object
*/
