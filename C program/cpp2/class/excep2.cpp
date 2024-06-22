/*
Program		: To demonstrate User-defined Exception handling mechanism
Program	By	: Anil Donwade
Date		: 25-04-2024
*/

#include <iostream>
#include <cstring>
using namespace std;

class NegativeException{
	char message[100];
	int value;
public:
	NegativeException(){
		strcpy(message, "Negative Value Exception\n");
	}
	
	NegativeException(const char *mp, int value){
		strcpy(message, mp);
		this->value=value;
	}
	
	char *get_message(){
		return message;
	}
	
	int get_value(){
		return value;
	}
};

int accept_positive_int(){
	char msg[]={"The entered value is negative. Please enter +ve value\n"};
	int v;
	char resp;
	
	do{
		try{
			resp='N';
			cout << "Enter a positive value: ";
			cin >> v;
			if(v<0) 
				//throw *(new NegativeException());			CASE I
				throw *(new NegativeException(msg, v));		//CASE II
		
			cout << "The entered value is:"<< v << "\n";
			
		}catch(NegativeException nve){
			cout << "value ="<<  nve.get_value() << "\n";
			cout << nve.get_message();
			//accept response
			cout << "Do you want to continue (Y/N)?:";
			cin >> resp;
		}
		
	}while(resp == 'Y' ||resp == 'y');
	
	return v;
}
int main(){
	cout << " --- START ---\n";
	cout << "The positive value entered is: "<< accept_positive_int();
	cout << " --- END ---\n";
}
