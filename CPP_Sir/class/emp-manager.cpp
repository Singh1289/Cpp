 /*
Program		: To demonstate the inheritance of classes
Program	By	: Anil Donwade
Date		: 23-04-2024
 */
 
#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	//char name[20];
//protected:
	char *nameptr;
	float salary;
public:
	
	Employee(){
		cout << "Default base class constructor invoked ........" <<"\n";
		nameptr = new char;
		*nameptr='\0';
		this->salary=0.0f;		
	}
	
	Employee(/*Employee *this,*/ const char name[20], float salary){
		cout << "base class Parameterized constructor invoked ........" <<"\n";
		nameptr = new char[strlen(name)+1];
		strcpy(nameptr, name);
		this->salary=salary;
	}
	
	float get_salary(){
		return salary;
	}
	
	char *get_name(){
		return nameptr;
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
	//polymorphic function
	virtual void display(){
		cout << nameptr << " " <<salary<< "\n";
	}
	
	//destructor
	~Employee(){
		cout << "Destructor invoked ........" <<"\n";
		delete nameptr;
	}
};

//derived class
class Manager : public Employee{
	float allowance;
public:
	Manager(){
		cout << "Default derived class constructor invoked ........" <<"\n";
		allowance=0;
	}
	
	//parameterized constructor
	Manager(const char name[20], float salary, float allowance)
			:Employee(name, salary){
		cout<<"Derived class parameterized constructor invoked ....\n";
		this->allowance=allowance;
	}
	
	//overriding base class member function
	//void display(){
	//	cout << nameptr << " " << salary <<  " "<< allowance << "\n";
	//}
	void display(){
		cout << get_name() << " " << get_salary() << " "<< allowance << "\n";
	}
	
	//Destructor
	~Manager(){
			cout << "Manager class Destructor invoked ...." << "\n";
	}
}; 

/*
int main(){
	Manager m1;	//default constructor
	m1.display();
	
	Manager m2("Mahesh", 20000, 2400);//parameterized constructor
	m2.display();
	return 0;
}
*/
/*
Dynamic polymorphism means, whenever a message is passess to different types of 
objects, they behave differently.

Requirments for dynamic polymorphism:
1. Base class pointer
2. virtual function (polymorphic function)
3. overriding of virtual function
4. late-binding
5. up-casting
*/

int main(){
	Employee *eptr;	//vbase class pointer
	
	eptr = new Employee("Vijay", 1200);
	eptr->display();		//1
	
	eptr = new Manager("Mahesh", 20000, 2400);		//up-casting
	eptr->display();		//2
	
	Employee *emp_arr[4];
	
	//instantiate classes from employee class hierarchy
	emp_arr[0]=new Employee( . . .);
	emp_arr[1]=new Employee( . . .);
	emp_arr[2]=new Manager( . . .);	//up-casting
	emp_arr[3]=new Employee( . . .);
	
	//loop to display all employees
	for(int i=0; i<4; i++)
		emp_arr[i]->display();
}
