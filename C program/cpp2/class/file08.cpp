// Program      : To detect EOF, and display contents of a file in hex 
//					as well as in text format
// Program By   : Anil Donwade
// Date         : 27-04-2024
// 
//
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
using namespace std;

int display_hex_ascii(char* filename);

/*
* display_hex_ascii()
*/
int display_hex_ascii(char* filename) {
	
	//read data -------------------------------------
	ifstream in(filename); //input from file
	if (!in) {
		cout << "Can not open file.";
		return 1;
	}

	//variable decalration
	register int i, j; 
	int count;
	char c[16];

	cout.setf(ios::uppercase);
		
	//display the read data
	while (!in.eof()) {
		for(i=0; i<16 && !in.eof(); i++)
				in.get(c[i]);	

		if (i < 16) i--;		//get rid of eof

		for(j=0; j<i; j++)
			cout << setw(4) << hex << (int)c[j];
			
		for (; j < 16; j++) cout << "    ";

		cout << "\t";
		for (j = 0; j < i; j++)
			if (isprint(c[j])) cout << c[j];
			else cout << ".";
		cout << endl;

		count++;				//increment line count
		if (count == 16) {
			count = 0;
			cout << "Press ENTER to continue:\t";
			cin.get();
			cout << endl;
		}
	}
	in.close();

	return 0;
}

//main() function
int main(){
	display_hex_ascii("C:\\Users\\Anil\\Documents\\C++ Progs\\file01.cpp");
	return 0;
}

