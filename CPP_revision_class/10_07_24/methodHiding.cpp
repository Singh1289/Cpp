#include <iostream> 
using namespace std; 
  
class Base { 
public: 
    int fun() { cout << "\nBase::fun() called"; } 
    int fun(int i) { cout << "\nBase::fun(int i) called"; } 
}; 
  
class Derived : public Base { 
public: 
    int fun(char p) { cout << "\nDerived::fun(char p) called"; } 
    
}; 
  
// Driver Code 
int main() 
{ 
    Derived d;
	//d.fun(); // Compiler Error 
    d.fun('5'); 
    Base *b = new Derived();
    b->fun();
    //b->fun(9);  //compiler Error
    b->fun('i');
    return 0; 
}
