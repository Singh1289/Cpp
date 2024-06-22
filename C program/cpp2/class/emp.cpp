/*
Program		: To monstate the use of constructors and destructors
Program	By	: Anil Donwade
Date		: 22-04-2024
*/
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	//char name[20];
	char *nameptr;
	float salary;
public:
	
	Employee(){
		cout << "Default constructor invoked ........" <<"\n";
		nameptr = new char;
		*nameptr='\0';
		this->salary=0.0f;		
	}
	
	Employee(/*Employee *this,*/ const char name[20], float salary){
		cout << "Parameterized constructor invoked ........" <<"\n";
		nameptr = new char[strlen(name)+1];
		strcpy(nameptr, name);
		this->salary=salary;
	}
	
	float get_salary(){
		return salary;
	}
	
	//copy constructor
	Employee(Employee &eref){
		cout << "copy constructor invoked .......\n";
		nameptr = new char[strlen(eref.nameptr)+1];	//alocate new memory for new object
		strcpy(nameptr, eref.nameptr);
		salary = eref.salary;
	}
	void set_salary(float salary){
		this->salary=salary;
	}

	void increment(float pc){
		salary += salary*(pc/100);
	}
	void display(){
		cout << nameptr << " " << salary<< "\n";
	}
	
	//destructor
	~Employee(){
		cout << "Destructor invoked ........" <<"\n";
		delete nameptr;
	}
};

float check_increment(Employee e){
	cout << "Copy of e got created\n";
	if(e.get_salary() < 15000) return 10;
	else if(e.get_salary() < 20000) return 8;
	else if(e.get_salary() < 40000) return 5;
}

int main(){
	Employee e1;					//1
	Employee emparr[4];				//2,3,4,5
	Employee ex("A", 1000);			//6, 7 => p.constructor
	Employee ey("B", 2000);
	Employee emparr1[]={ex, ey};	//
	
	e1.display();
	Employee e2("Vijay", 12000);
	e2.display();
	int  ipc = check_increment(e2);
	e2.increment(ipc);
	cout <<"After salary increment:"<< "\n";
	e2.display();
	return 0;
}
