/*
Program		: To demonstrate the use STL container map for
				adding, displaying, insertion, deletion of pair 
				and finding of elements
Program	By	: Anil Donwade
Date		: 26-04-2024
*/

#include<iostream>
#include<map>
#include<cstring>
using namespace std;

//class 
class Student{
	int rollno;
	string name;
public:
	Student(int rollno, const string name){
		this->rollno=rollno;
		this->name=name;
	}
	int get_rollno(){
		return rollno;
	}
	int set_rollno(int rollno){
		this->rollno= rollno;
	}
	string  get_name(){
		return name;
	}
	void set_name(string  name){
		this->name = name;
	}
};

int main(){
//function prototype
void display_map( char *, map<int, char>  );

	cout << "START \n";
	//create a map containig pair of int and Student
	map<int, Student> studmap;
	Student s1(1, "Vijay"),
		s2(2, "Ajay"),
		s3(3, "Dhananjay"),
		s4(4, "Jayprakash");
	
	Student sarr[] ={ s1, s2, s3, s4};
	//populate a map
	studmap.insert(pair<int, Student>(sarr[0].get_rollno(), sarr[0]));
	studmap.insert(pair<int, Student>(sarr[1].get_rollno(), sarr[1]));
	studmap.insert(pair<int, Student>(sarr[2].get_rollno(), sarr[2]));
	studmap.insert(pair<int, Student>(sarr[3].get_rollno(), sarr[3]));
	
	cout << "\nNow, displaying the vector elements using iterator. . . \n";	
	//find the value for the key 2 in the pairs of the map
	map<int, Student>::iterator itr = studmap.find(3);
	
	//display the value at pair pointed by itr
	cout << "Roll No.:" << itr->first << " Name:"<< itr->second.get_name();
	cout << "\nEND \n";
}

//function to cycle through the vector
void display_map( char *mp, map<int, char> m){
	/*
	list< char*>::iterator itr = b.begin();
	itr = b.begin();	//obtain iterator at the 1st element
	cout << mp << "\n";
	itr = b.begin();	//obtain iterator at the 1st element
	while(itr != b.end()){
		cout << *itr << "\n";	//display element pointed by itr
		itr++;
	}*/
}

