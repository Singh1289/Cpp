/*
Program		: To demonstate the aMultiple inheritance
			 CASE I 
Program	By	: Anil Donwade
Date		: 23-04-2024
*/
 
#include<iostream>
using namespace std;

//base class-1
class A{
protected:
	int a;
public:
	A(int a){
		this->a=a;
	}
	
	void display(){
		cout << "a=" << a << "\n";
	}	
};

//base class-2
class B{
protected:
	int a;
	int b;
public:
	B(int b){
		this->b=b;
	}
	
	void display(){
		cout << "b=" << b << "\n";
	}	
};

//derived class C from A and B => Multiple Inheritance
class C: public A, public B{
	int c;
public:
	C(int a, int b, int c):A(a), B(b){
		this->c=c;
	}
	
	void display(){
		cout << "from class A, a=" << A::a << " a=" << B::a << " b=" << b << " c=" << c <<"\n";
	}	
};

int main(){
	C cObj(1, 2, 3);
	cObj.display();
	return 0;
}
