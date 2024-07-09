#include <iostream>
#include <string>
#include "alphabet.h"
using namespace std;

void alphabet(int, char);

int main()
{
    int i, k, count = 0;

    string test, input;

    // taking input
    while (true)
    {
        cout << "\nEnter your name: ";
        getline(cin, input);
        for (i = 0; i < input.size(); i++)
        {
            if (!((input[i] >= 'A' && input[i] <= 'Z') || input[i] == ' '))
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            break;
        }
        else
        {
            cout << "\nNAME MUST BE IN CAPITAL LETTERS ONLY";
            count = 0;
        }
    }
    cout << "\nName is : " << input;

    for (i = 1; i < 8; i++)
    {
        cout << "\n";
        // printing pattern
        for (k = 0; k < input.size(); k++)
        {
            if (input[k] == ' ')
            {
                break;
            }
            else
            {
                alphabet(i, input[k]);
            }
        }
        // resting the counter for next line
        if (input[k] == ' ' && i == 7)
        {
            input = input.substr(k + 1, (input.size() - k));
            i = 0;
            cout << "\n";
        }
    }
    return 0;
}
