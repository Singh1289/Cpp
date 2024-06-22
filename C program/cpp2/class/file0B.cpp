// Program      : To demonstrate the use of seekg() as well as seekp() 
//					functions for randomm access of file
//				    This function allows you to reverse the first 
//					n characters in a file.
// Program By   : Anil Donwade
// Date         : 11-12-2023
 
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int reverse_firstn(char* filename,char* posp);

/*
* reverse_firstn(char* filename,char* posp, char* chp)
*/
int reverse_firstn(char* filename, char* posp) {
	
	//read data -------------------------------------
	fstream inout(filename, ios::in | ios::out | ios::binary); //input from file
	if (!inout) {
		cout << "Can not open file.";
		return 1;
	}

	//variable declaration
	long e, i, j;
	char c1, c2;
	e = atoi(posp);

	cout << "atoi(posp):" << atoi(posp);		//ASSERTION

	for(i=0, j=e; i<j; i++, j--){
		inout.seekg(i, ios::beg);
		inout.get(c1);
		inout.seekg(j, ios::beg);
		inout.get(c2);

		inout.seekp(i , ios::beg);
		inout.put(c2);
		inout.seekp(j, ios::beg);
		inout.put(c1);
	}
		
	inout.close();

	return 0;
}

//main() function
int main(){
	reverse_firstn("abc.txt", "22");
	return 0;
}
