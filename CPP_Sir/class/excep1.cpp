/*
Program		: To demonstrate Exception handling mechanism
Program	By	: Anil Donwade
Date		: 25-04-2024
	NORMAL CASE 
	ERRONOUS CASE
*/

#include <iostream>
using namespace std;

void function1(int n){
	int x = 100, y;
	int arr[]={100, 200, 300, 400};
	y=n;
	try{
		cout << " entered in try block....\n";
		if(y==0) throw 10;
		cout << "value=" << x*n << "\n";
		
		if(n>3) throw 1.0*n;
			cout << arr[n]<< "\n";
		
	}catch(int e){		//replace in with double, as one error case
		cout << "Now, in catch block. e=" << e<< "\n";
	}/*catch(double e){		
		cout << "Now, in second catch block. e=" << e<< "\n";
		cout << "Array Index out of bound: " << (int)e<< "\n";
	}*/
}

int main(){
	cout << " --- START ---\n";
	try{
	
		function1(0);		//error case
		function1(1);
		function1(2);
		
		function1(4);		//error case
	}catch(...){		//capable of handling all exception 
						//catch all exceptions block
		cout << "Now, you are safe. Crash is avoided......\n";
	}
	cout << " --- END ---\n";
	return 0;
}

