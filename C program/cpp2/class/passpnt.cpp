/*
Program			: To return a pointer
Program	By		: Anil Donwade
Date			: 22-04-2024
*/
#include<iostream>

using namespace std;
int *sort(){
	int a[]={1,2, 3, 4};
	//int *p=a;
	int *p = new int[4];
	for(int i=0; i<4; i++)
		*(p + i) = i+1;
	delete p;
	cout << "memory block deleted ..." << "\t";
	delete p;
	cout << "memory block deleted AGAIN ! ..." << "\t";
	return a;
}

int main(){
	
	int arr[10] ;
	
	arr=sort();
	// for(int i=0; i<4; i++)
	// 	cout << *(p + i)<< "\t";
	cout << "End of the program ...."<< "\t";
	return 0;
}
