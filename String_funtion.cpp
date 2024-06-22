#include <iostream>
#include <string>
#include "alphabet.h"
using namespace std;

void alphabet(int, char);

int main()
{
    int i, k, count = 0, length;
    char temp;
    string test, input = "ABHI";

    length = input.size();
    cout << "length is: " << length << "\n";

    cout << "enter your name: ";
    getline(cin, test);
    cout << "\nName is : " << test;
    cout << "\n index : " << test[2];
    for (i = 0; i < test.size(); i++)
    {
        if (test[i] == ' ')
        {
            count++;
            test = test.substr(i + 1, (test.size() - i));
            break;
        }
    }
    cout << "\nspace is :  " << count;
    cout << "\nName is : " << test;
    cout << "\nlentgh is : " << test.size();

    // temp = input[0];
    // cout << " :-  " << temp << "\n";
    // for (i = 1; i < 8; i++)
    // {
    //     cout << "\n";
    //     for (k = 0; k < length; k++)
    //     {

    //         temp = input[k];

    //         alphabet(i, temp);
    //     }
    // }
    return 0;
}
