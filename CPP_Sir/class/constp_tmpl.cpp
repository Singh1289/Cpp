/*

*/

#include<iostream>
using namespace std;

const int TABWIDTH=8;
//generic unction
template<class T>
void display(T a, int tab){
	for(int i=tab*TABWIDTH; i>=0; i--)
		cout <<' ';
	cout << a << "\n";
}


int main(){
 	display("I like C++", 0);
 	display('A', 1);
 	display(100, 2);
 	display((float)10/3, 3);
 	return 0;
}
