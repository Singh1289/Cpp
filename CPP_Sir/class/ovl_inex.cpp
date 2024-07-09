// Program      : To demonstrate the operator overloading functions
//					for inserter (<<) and 
//						extractor (>>)
// Program By   : Anil Donwade
// Date         : 27-04-2024

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;


class Student{
	char name[20];
	int rollno;
public:
	Student(){
		rollno=0;
		strcpy(name, "");
	}
	Student(int rollno, char name[20]){
		 strcpy(this->name, name);
		this->rollno= rollno;
	}

	char* get_name(){
		return name;
	}
	int get_rollno(){
		return rollno;
	}
   void set_name(char* name){
		strcpy(this->name, name);
	}
	void set_rollno(int rollno){
		this->rollno= rollno;
	}

	void display(){
		cout << rollno << " " << name << endl;
	}
	
	friend ofstream& operator<<(ofstream &os, Student sobj);
	friend ifstream& operator<<(ifstream &os, Student &sobj);
};
Student accept(){
	int rollno;
	char name[20];
	cout << "Enter Roll Number:";
	cin >> rollno;
	cout << "Enter name:";
	cin >> name;
	Student s(rollno, name);
	return s;
}

	//overloading inserter
	ofstream& operator<<(ofstream &os, Student sobj){
		os << sobj.get_rollno() << " " << sobj.get_name() << endl;
		cout << sobj.rollno;
	}
	//overloading extractor
	ifstream& operator>>(ifstream &is, Student &sobj){
		int r;
		char n[20];
		is >> r >> n;
		sobj.set_rollno(r);
		sobj.set_name(n);
	}


int main(){
	ofstream out("stud.txt");
	Student sobj = accept(), sobj1;
	//Student sobj, sobj1;
	//cin >> sobj;
	out << sobj;
	out.close();
	
	ifstream in("stud.txt");
	cout << "Displaying student data:"<< endl;
	in>>sobj1;
	sobj1.display();
	//cout << sobj;
	return 0;
}
