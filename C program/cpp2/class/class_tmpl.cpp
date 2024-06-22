/*

*/

#include<iostream>
using namespace std;

const int TABWIDTH=8;
//generic class
template<typename T1, typename T2>
class MyClass{
	T1 a;
	T2 b;
public:
	MyClass(T1 a, const T2 b){
		this->a=a;
		this->b=b;
	}

	void show(){
		cout << a << ", " << b << "\n";
	}
};

int main(){
	MyClass<int, float>  ob1(1, 90.34f);
	ob1.show();
	MyClass<char, const char *>  ob2('A', "Administration");
	ob2.show();
	return 0;
}
