// string.length, sting.append, string .at() //

#include"iostream"
#include"string.h"
using namespace std;

int main()
{
    string str;
    cout<<"\n Enter your string : ";
    cin>> str;
    cout<<"\n string is : "<< str;

    str= "Abhishek Pratap Singh";
    cout<<"\n Changed string : "<<str;   // copy string is easy

    str= str.append (" (Programmer)");
    cout<<"\n string append : "<< str;

    cout<<"\n string at : "<< str.at(5);

    cout<<"\n Length : "<< str.length();
    return 0;
}
