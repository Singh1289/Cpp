/*
Program		: To demonstrate the use STL container map for
				adding, displaying, insertion, deletion of pair 
				and finding of elements
Program	By	: Anil Donwade
Date		: 26-04-2024
*/

#include<iostream>
#include<map>
using namespace std;
/*
key	value
1	A
2	B
:
*/

int main(){
//function prototype
void display_map( char *, map<int, char>  );

	cout << "START \n";
	//create a map containig pair of int and char
	map<int, char> mymap;
	
	//populate a map
	mymap[1]='A';
	mymap[2]='B';
	mymap[3]='C';

	cout << "\nNow, displaying the vector elements using iterator. . . \n";	
	//find the value for the key 2 in the pairs of the map
	map<int, char>::iterator itr = mymap.find(2);
	
	//display the value at pair pointed by itr
	cout << itr->second;
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

