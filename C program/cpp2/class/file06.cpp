// Program      : To write a record to and read it from the file
// Program By   : Anil Donwade
// Date         : 27-04-2024
// 
//
#include <iostream>
#include <fstream>

using namespace std;

int gcount_demo();
/*
* gcount_demo()
*/

int gcount_demo() {
	//variable decalration
	double dnumsar[4] = { 99.74, -34.76, 1177.78, 200.1 };
	int i;

	//write data -------------------------------------
	ofstream outarray("dnums", ios::out | ios::binary);
	if (!outarray) {
		cout << "Can not open file.\n";
		return 1;
	}

	outarray.write((char *)&dnumsar, sizeof dnumsar);
	outarray.close();

	//read data -------------------------------------
	ifstream inarray("dnums", ios::in | ios::binary);
	if (!inarray) {
		cout << "Can not open file.";
		return 1;
	}

	inarray.read((char *)&dnumsar, sizeof dnumsar );
	
	//display the read data
	cout << inarray.gcount() << " bytes read." <<endl;
	for (i = 0; i < 4; i++) cout << dnumsar[i] << " ";

	inarray.close();

	return 0;
}

//main() function
int main(){
	gcount_demo();
	return 0;
}

