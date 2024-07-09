/*
Program		: To demonstate the private  inheritance
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
	A(){
		a=0;
	}
	A(int a){
		this->a=a;
	}
	
	void display(){
		cout << "a=" << a << "\n";
	}	
};

//derived class 
//private inheritance means all protected and public members become 
//private in derived class
class B: private  A{
/*
private:
	int a;
	void display(){
		cout << "a=" << a << "\n";
	}
*/
protected:
	int b;
public:
	B(int a, int b):A(a){
		this->b=b;
	}
	
	B(int b){
		this->b=b;
	}
	void display(){
		cout  << "a=" << a << "b=" << b << "\n";
	}	
};

class C: public B{
	int c;
public:
	C(int a, int b, int c):B(a, b){
		this->c=c;
	}
	
	void display(){
		cout  << "a=" << a << "b=" << b << " c=" << c <<"\n";
	}
};

int main(){
	B bObj(1, 2);
	bObj.display();
	
	C cObj(1, 2, 3);
	cObj.display();
	return 0;
}
