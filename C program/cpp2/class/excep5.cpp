/*
Program		: To demonstrate restricting exceptions for a function 
Program	By	: Anil Donwade
Date		: 25-04-2024

A function can be restricted to throw only few exceptions, and if that fuction 
tries throw other tha restricted exceptions then that exception can not be handled by 
its called function and program crash occurs

CASE I : without writing local exception handler(catch block) => crash
CASE II : with writing local exception handler(catch block) => NO crash
*/

#include <iostream>
#include <cstring>
using namespace std;

//base class
class A{
 char message[100];
public:
	A(){
		strcpy(message, "A error message");
	}
	
	char *get_message(){
		return message;
	}
};

//derived class
class B: public A{
	char message[100];
public:
	B(){
		strcpy(message, "B error message");
	}
	
	char *get_message(){
		return message;
	}
};

//restricting exceptions to A and B only
//this function is restricted to throw only exceptions of type A and B
int accept_positive_int() throw(A, B){
	int v;
	
	cout << "Enter a positive value: ";
	cin >> v;
	
	if(v<0) throw *(new A());	
		
	if(v > 200) throw *(new B());	
	
	try{
		if( v == 0) throw v;	//This exception can not be handled by the caller 
								//of this function, because of restritcion
		cout << "The entered value is:"<< v << "\n";
	}catch(int x){					// ... but can be handled locally by the same function
		cout << "ZERO entered :"<< x << "\n";
	}
	
	return v;
}

int main(){
	cout << " --- START ---\n";
	try{
	
		cout << "The positive value entered is: "<< accept_positive_int();
		cout << " --- END ---\n";
	}catch(B b){
		cout << b.get_message() <<"\n";
	}catch(A a){
		cout << a.get_message() <<"\n";
	}catch (int x){
			cout << "value=" << x <<"\n";
	}catch(...){
		cout << " In catch block of main\n";
	}
	cout << " --- END ---\n";
}
