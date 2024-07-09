// Program      : To read a file line by line
// Program By   : Anil Donwade
// Date         : 27-04-2024

#include <iostream>
#include <fstream>

using namespace std;

int linebyline_demo(char* filename);
/*
* gcount_demo()
*/

int linebyline_demo(char* filename) {
	//variable decalration
	char str[255];

	//read data -------------------------------------
	ifstream in(filename); //input from file
	if (!in) {
		cout << "Can not open file.";
		return 1;
	}

	//display the read data
	while (in) {
		in.getline(str, 255);	//delimiter defaults to '\n'
		if (in) cout << str << endl;
	}
	in.close();

	return 0;
}

//main() function
int main(){
	linebyline_demo("C:\\Users\\Anil\\Documents\\C++ Progs\\file01.cpp");
	return 0;
}

