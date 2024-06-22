// Program      : To demonstrate the ignore() function
//				  This function ignores charcters until either a space 
//				  is encountered or 10 characters have been read.
//				  It then reads rest of the file.
// Program By   : Anil Donwade
// Date         : 27-04-2024

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>

using namespace std;

int ignore_demo(char* filename);

/*
* ignore_demo(char* filename)
*/
int ignore_demo(char* filename) {
	
	//read data -------------------------------------
	ifstream in(filename); //input from file
	if (!in) {
		cout << "Can not open file.";
		return 1;
	}

	//variable decalration
	char c;
	//ignore upto 10 characters or until first space found
	in.ignore(10, ' ');
		
	//display the read data
	while (in) {
		in.get(c);
		if (in) cout << c;
	}
		
	in.close();

	return 0;
}

//main() function
int main(){
	ignore_demo("C:\\Users\\Anil\\Documents\\C++ Progs\\file01.cpp");
	return 0;
}

