/*
Program		: To demonstrate the use STL container list for
				adding, displaying, insertion and deletion of elements
Program	By	: Anil Donwade
Date		: 26-04-2024
*/

#include<iostream>
#include<list>
using namespace std;

int main(){
//function prototype
void display_list( char *, list<char *> );
	cout << "START \n";
	//create a list of  strings 
	list<char *> books;
	
	//populate the list
	books.push_back("Let Us C");
	books.push_back("C++: The Complete Reference");
	books.push_back("Let Us C++");
	books.push_back("Effective C++");
	books.push_back("C++ Unleashed");
	
	books.push_front("Core Java");//adds element at the begining of the list

	cout << "\nNow, displaying the vector elements using iterator. . . \n";	
	//obtain the iterator
	list< char *>::iterator itr = books.begin();
	
	//loop to cycle through the list, 
	//till iterator position is after the last element
	while(itr != books.end()){
		cout << *itr << "\n";	//display an element pointed by itr
		itr++;
	}
	
	//decrement iterator twice, from current position i.e. at end of list
	itr--;	
	itr--;
	char bn[]={"BASIC"};
	books.insert(itr, bn);
	display_list("Book list after insertion:\n", books);

	//deletion of element	
	itr = books.begin();	//re-position the iterator at the begining	
	books.erase(++itr);		//move iterator one position ahead before
							//removing an element
							
	display_list("Book list after deletion:\n", books);
	cout << "\nEND \n";
}

//function to cycle through the vector
void display_list( char *mp, list<char*> b){
	list< char*>::iterator itr = b.begin();
	itr = b.begin();	//obtain iterator at the 1st element
	cout << mp << "\n";
	itr = b.begin();	//obtain iterator at the 1st element
	while(itr != b.end()){
		cout << *itr << "\n";	//display element pointed by itr
		itr++;
	}
}

