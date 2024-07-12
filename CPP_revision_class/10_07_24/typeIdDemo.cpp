#include<iostream>
#include<typeinfo>
using namespace std;
class A{
	
};
class B{
	
};
main() {
  int i, j; 
  float f; 
  char* p;
  A a;	// where A and B are classes B b;
  B b;
  cout <<"\nThe type of i is: "<< typeid(i).name();
  cout <<"\nThe type of f is: "<< typeid(f).name();	//float 
  cout <<"\nThe type of p is: "<< typeid(p).name(); //char*
  cout	<<"\nThe type of a is: "<< typeid(a).name();	//class A 
  cout <<"\nThe type of b is: "<< typeid(b).name(); //class B
}
