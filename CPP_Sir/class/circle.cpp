 /*
Program		: To demonstate the abstract class and its use
Program	By	: Anil Donwade
Date		: 23-04-2024
 */
 
#include<iostream>
#include<cstring>
using namespace std;

//abstract class
class Shape{
protected:
	double area;
public:
	//pure virtual function
	virtual void calculate_area()=0; //abstract function	
};


//derived class Circle
class Circle : public Shape{
	double radius;
	static int count;//static variable to keep the count of Circle objects
	public:
		Circle(){
			count++;
			radius=1;
		}
		Circle(double radius){
			count++;
			this->radius=radius;
		}
		//overriding base class member function
		void calculate_area(){
			area = 3.14*radius*radius;
		}
				
	void display(){
		cout <<count<< " " << "radius:" << radius << " area:"<< area <<"\n";
	}
};

//derived class Rectangle 



int Circle::count=0;	//static variable initialization
int main(){
	Circle c1;	//default constructor
	c1.calculate_area();
	c1.display();
	
	Circle c2(10);//parameterized constructor
	c2.calculate_area();
	c2.display();
	
	Circle c3(100);//parameterized constructor
	c3.calculate_area();
	c3.display();
	return 0;
}


