// Program      : To demonstrate the seekp() function
//				  This function allows you to change the particular 
//					character 
//				  in a file.
// Program By   : Anil Donwade
// Date         : 11-12-2023

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int change_char(char* filename,char* posp, char* chp);

/*
* change_char(char* filename,char* posp, char* chp)
*/
int change_char(char* filename, char* posp, char* chp) {
	
	//read data -------------------------------------
	fstream out(filename, ios::in | ios::out | ios::binary); //input from file
	if (!out) {
		cout << "Can not open file.";
		return 1;
	}
	cout << "atoi(posp):" << atoi(posp);
	out.seekp(atoi(posp), ios::beg);
	out.put(*chp);
		
	out.close();

	return 0;
}

//main() function
int main(){
	change_char("abc.txt", "9", "Z");
	return 0;
}
