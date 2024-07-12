#include<iostream>
using namespace std;
#include<string.h>
namespace Library ::Engg :: CompSc{
			class Book{
				int pages;
				float cost;
				char author[15];
				bool cd_given;

				public:
				 Book()
				 {
				 	pages = 100;
				 	cost = 150.50f;
				 	strcpy(author,"Janhavi");
				 	cd_given = false;
				 }
				 void display_book()
				 {
				 	cout<<"\n Author is :"<<author;
				 }
			};
	}

namespace Library::Sports::Cricket {
	class Bat {
		int id;
		char owner[15];
		float rent;
		public:
			Bat() {
				id =15;
				strcpy(owner,"Sachin");
				rent = 500;
			}
			void display()
			{
				cout<<"\n id = "<<id<<" Owner = "<<owner<<" Rent = "<<rent;
			}
	};
}
/*
using namespace Library::Engg::CompSc;
int main()
{
	Book b;
	b.display_book();
	return 0;
}
*/
using namespace Library::Sports::Cricket;
int main()
{
	Bat b;
	b.display();
	return 0;
}
