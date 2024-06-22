// Program		: To write a record to and read it from the file
// Program By   : Anil Donwade
// Date         : 27-04-2024
// 
//
#ifndef MAIN04_CPP
#define MAIN04_CPP
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int rec_readwrite_demo();
/*
* rec_readwrite_demo()
*/
struct status {
	char name[80];
	double balance;
	unsigned long account_num;
};

//function to read and write record
int rec_readwrite_demo() {

	struct status acc;
	strcpy(acc.name, "Ajay Gupta");
	acc.balance = 10000.50;
	acc.account_num = 121;

	//write data -------------------------------------
	ofstream outbal("balance", ios::out | ios::binary);
	if (!outbal) {
		cout << "Can not open file.\n";
		return 1;
	}

	outbal.write((char*)&acc, sizeof(struct status));
	outbal.close();

	//read data -------------------------------------
	/*char ch;
	if (n != 2) {
		cout << "USAGE: file04 <filename>\n";
		return 1;
	}
	const  char path[] = ".\\data\\";
	char* fullfilepath_ptr = new char[80];    //allocate memory
	char fullfilepath[80];

	fullfilepath_ptr = mystrcpy(fullfilepath, path, 10);
	cout << "fullfilepath_ptr:" << fullfilepath_ptr << "\n";    //ASSERTION 

	fullfilepath_ptr = mystrncat(fullfilepath, file);
	cout << "fullfilepath_ptr:" << fullfilepath_ptr << "\n";    //ASSERTION 
*/
	ifstream inbal("balance", ios::in | ios::binary);
	if (!inbal) {
		cout << "Can not open file.";
		return 1;
	}

	inbal.read((char*)&acc, sizeof(struct status));

	//display the read data
	cout << acc.name << endl;
	cout << "Account # " << acc.account_num;
	cout.precision(2);
	cout.setf(ios::fixed);
	cout << endl << "Balance: Rs." << acc.balance;
	
	inbal.close();

	return 0;
}

/*
* putdemo(): function to write characters to file
*/

int putdemo() {
	int i;

	ofstream out("CHARS", ios::out | ios::binary);
	if (!out) {
		cout << "Can not open output file";
		return 1;
	}

	//write all characters to disk
	for (i = 0; i < 256; i++) 
			out.put((char)i);

	out.close();
	return 0;
}

//function to read characters from file
int getdemo() {
	int i;

	ifstream in("CHARS", ios::in | ios::binary);
	if (!in) {
		cout << "Can not open output file";
		return 1;
	}

	//write all characters to disk
	int x = in.get();
	while(x != -1) {	//if not EOF
		cout << (char)x;//display character
		x = in.get();	//read next character
	}
	
	in.close();
			
	return 0;
}

//main() function
int main(){
	//rec_readwrite_demo();
	//putdemo();
	getdemo();
	return 0;
}
#endif //MAIN04_CPP
