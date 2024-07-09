// PQogram    Q : To write data to file
// Program By   : Anil Donwade
// Date         : 26-04-2024
// fileprogs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#ifndef MAIN2_CPP
#define MAIN2_CPP
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // std::cout << "Hello World!\n";
    // this is input stream
    ifstream in(".\\data\\student.txt"); // local variable

    if (!in)
    { // check for the existance of stream
        cout << "File not opened.\n";
        return 1;
    }

    char name[20]; // local variable
    double marks;
    char ch;

    // read data
    in >> name >> ch >> marks;
    cout << name << ", " << marks << endl;

    in >> name >> ch >> marks;
    cout << name << ", " << marks << endl;

    in >> name >> ch >> marks;
    cout << name << ", " << marks << endl;

    // close the file
    in.close();

    return 0;
}

#endif // MAIN2_CPP
