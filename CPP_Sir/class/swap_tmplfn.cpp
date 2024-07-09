/*

*/

#include<iostream>
using namespace std;

//generic unction
template<class T>
void swapargs(T &a, T &b){
	cout << "Now, generic function is called .....\n";
	T temp = a;
	a = b;
	b = temp;
}

//explicit specialization
template<>
void swapargs<int>(int &a, int &b){
	cout << "Now, explicit specialization function is called .....\n";
	int temp = a;
	a = b;
	b = temp;
}


int main(){
	//int
	int x=10, y=20;
	swapargs(x, y);
	cout << "x=" << x << " y="<< y << "\n\n";

	//float
	float xf=10.10f, yf=20.20f;
	swapargs(xf, yf);
	cout << "xf=" << xf << " yf="<< yf << "\n\n";

	//double
	double xd=100.10, yd=200.20;
	swapargs(xd, yd);
	cout << "xd=" << xd << " yd="<< yd << "\n\n";

	//char
	char xc='A', yc='Z';
	swapargs(xc, yc);
	cout << "xc=" << xc << " yc="<< yc << "\n\n";

	return 0;
}
