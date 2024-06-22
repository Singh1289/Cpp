#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> emp;

    // adding data
    emp[101] = "John";
    emp[102] = "Rahul";
    emp[103] = "Ajay";
    emp[104] = "Sonam";
    emp[105] = "Sukhi";
    emp[106] = "Aman";

    cout << " Displaying the list..\n";
    map<int, string>::iterator show = emp.begin();

    // cout << "\n"<< show->first;

   // for(auto a : vector){}

    while (show != emp.end())
    {
        cout << show->first << " : " << show->second << "\n";
        show++;
    }

    return 0;
}