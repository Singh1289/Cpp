/*
Program		: To demonstrate the use STL container vector for
				insertion and deletion of elements
Program	By	: Anil Donwade
Date		: 26-04-2024
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
//function prototype
void display_vector(const char *mp, vector<char> v);

	cout << "START \n";
	//create an integer vector
	vector<char> cv;
	
	//populate a vector
	cv.push_back('A');
	cv.push_back('B');
	cv.push_back('C'); // '+'
	cv.push_back('D');
	cv.push_back('E');
	cv.push_back('F');

	cout << "\nNow, displaying the vector elements using iterator. . . \n";	
	//obtain the iterator
	vector<char>::iterator itr = cv.begin();
	
	//while loop to cycle through the vector, 
	//till iterator position is after the last element
	while(itr != cv.end()){
		cout << *itr << "\n";	//display element pointed by itr
		itr++;
	}
	
	//INSERT one or more elements
	itr = cv.begin();	//obtain iterator at the 1st element
	itr+=3;

	//cv.insert(itr, '+');
	cv.insert(itr, 4, '+');	//insert 4 elements starting at position
							//pointed by itr
	display_vector("Displying vector content after inserting 4 elements:\n", cv);
	/*This code is commented after moving this logic in display_vector()
	function.
	cout << "Displying vector content after inserting 4 elements:\n";
	itr = cv.begin();	//obtain iterator at the 1st element
	while(itr != cv.end()){
		cout << *itr << "\n";	//display element pointed by itr
		itr++;
	}
	*/	
	
	//deleting an element from the vector
	itr = cv.end(); //obtain the iterator at the end of the vector
	itr-=4;
	cv.erase(itr, itr+1);//delete one element (range deletion is also possible)
    display_vector("Displying vector content after deleting an element:\n", cv);
	cout << "\nEND \n";
}

//function to cycle through the vector
void display_vector(const char *mp, vector<char> v){
	vector<char>::iterator itr = v.begin();
	itr = v.begin();	//obtain iterator at the 1st element
	cout << mp << "\n";
	itr = v.begin();	//obtain iterator at the 1st element
	while(itr != v.end()){
		cout << *itr << "\n";	//display element pointed by itr
		itr++;
	}
}
