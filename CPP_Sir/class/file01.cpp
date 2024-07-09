// Program      : To write data to file
// Program By   : Anil Donwade
// Date         : 26-04-2024
// fileprogs.cpp : This file contains the 'main' function.
//				  Program execution  begins and ends there.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";

    // open stream, which will be attached to the stream
    ofstream out(".\\data\\student.txt"); // local variable

    if (!out)
    {                                 // check for the existance of stream
        cout << "File not opened.\n"; // and if not, then display error message
        return 1;
    }

    // write data
    out << "Sanjay" << " , ";
    out << 89.90 << endl;
    out << "Vijay" << " , " << 78.50 << endl;
    out << "Ajay" << " , " << 92.20 << endl;

    // close the stream, which the detached from the file
    out.close();

    return 0;
}
