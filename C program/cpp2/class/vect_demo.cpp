/*
Program		: To demonstrate the use STL container vector
Program	By	: Anil Donwade
Date		: 26-04-2024

The vector is a dynamic array
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
	cout << "START \n";
	//create an integer vector of initial size 2
	vector<int> intv(2);
	
	//populate the vector using array subscript notation
	intv[0]=10;
	intv[1]=20;
	
	//another way to populate a vector, by adding elements at the end of
	//existing elements
	intv.push_back(100);
	intv.push_back(200);
	intv.push_back(300);
	intv.push_back(400);
	intv.push_back(500);
	intv.push_back(600);

	//loop to cycle through the vector and display all elements
	cout << "\nNow, displaying the vector elements . . . \n";
	for(int i=0; i<intv.size(); i++)
		cout << intv[i] << "\t";
	
	cout << "\nNow, displaying the vector elements using iterator. . . \n";
	//obtain the iterator
	vector<int>::iterator itr = intv.begin();
	
	//for loop to cycle through the vector, 
	//till iterator position is after the last element
	for(; itr != intv.end(); itr++)
		cout << *itr << "\n";	//display element pointed by itr
	
	cout << "\nEND \n";
}

