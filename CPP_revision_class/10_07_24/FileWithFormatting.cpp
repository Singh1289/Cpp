#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	const int SIZE=80;
	char line[SIZE];

	ofstream fout;
	fout.open("country");
	fout<<"U S A \n";
	fout<<"U K \n";
	fout<<"South Korea \n";
	fout<<"INDIA \n";
	fout<<"Pakistan \n";
	fout<<"China \n";
	fout.close();

	fout.open("capital");
	fout<<"Washington \n";
	fout<<"London \n";
	fout<<"Seoul \n";
	fout<<"DELHI \n";
	fout<<"Isalamabad \n";
	fout<<"Beijing \n";
	fout.close();

	ifstream fin1, fin2;
	fin1.open("country");
	fin2.open("capital");

	cout<<"Country\t\t\tCapital\n\n";
	//for(int i=1;i<=10;i++)
	while(((!fin1.eof()))||(!fin2.eof()))
	{
		if(fin1.eof()!=0)
		{
			cout<<"Exit from Country\n";
			exit(1);
		}
		fin1.getline(line,SIZE);
		
		cout<<left<<setw(25)<<line;

		if(fin2.eof()!=0)
		{
			cout<<"Exit from Capital\n";
			exit(0);
		}
		fin2.getline(line,SIZE);
		cout<<left<<setw(25)<<line<<"\n";
	}
}
