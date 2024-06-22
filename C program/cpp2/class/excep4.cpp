/*
Program		: To demonstrate User-defined derived class Exception handling mechanism
Program	By	: Anil Donwade
Date		: 25-04-2024

Whenever a derived exception class is involved in the  exception handling mechanism, 
then the catch block having derived type should appear before its base class  
catch block.

rethrow an exception
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


int accept_positive_int(){
	int v;

		try{
			cout << "Enter a positive value: ";
			cin >> v;
			if(v<0) 
				throw *(new A());	
			if(v > 200) throw *(new B());	
			
			cout << "The entered value is:"<< v << "\n";
			
		}catch(A a){
			//if( strcmp(a.get_message(), "A error message") == 0 )
											//rethrow
			cout << a.get_message() <<"\n";
				throw;
		}catch(B b){
			cout << b.get_message() <<"\n";
		}
		
	return v;
}
int main(){
	cout << " --- START ---\n";
	try{
	
		cout << "The positive value entered is: "<< accept_positive_int();
		cout << " --- END ---\n";
	}catch(...){
		cout << " In catch block of main\n";
	}
	cout << " --- END ---\n";
}
