/*
Program			: To create a class to determine whether the string is palindrome
Program	By		: Anil Donwade
Date			: 22-04-2024
*/

#include<iostream>
#include<cstring>
using namespace std;

class Palindrome{
//	char *str;
	char str[100];
public:
	Palindrome(){
		//str = new char[6];
		strcpy(str, "NITIN");
	}
	
	Palindrome(const char *str){
		//str = new char[strlen(str)];
		strcpy(this->str, str);		
	//	cout << "allocted memory for << " << str<< "\n";
	}

	bool palindrome(){
		int len = strlen(str);
		char *p1=(str + 0);	
		char *p2=(str + len-1);
		
		while(p1 < p2){
			if(*p1 == * p2){
				p1++; p2--;
			}else
				return false;
		}	
}

	bool palindrome2(){
		bool value;
		for(char *p1=(str + 0), *p2=(str + strlen(str)-1);p1 < p2 ; p1++, p2--)
			value = *p1 != * p2 ?  false:  true;
	
		return value;
	}
};

void display(bool b){
	//cout << "entered in display()........"<< "\n";
	if(b==true)
		cout << "The string is palinderome......"<< "\n";
	else
		cout << "The string is NOT palinderome......"<< "\n";
}

int main(){
	Palindrome s1;				//default constructor
	bool b = s1.palindrome();
	display(b);
	
	cout << "Now, second string ........"<< "\n";
	Palindrome s2("COMPUTER");
	b = s2.palindrome();
	display(b);
	
	b = s2.palindrome2();
	display(b);
}

