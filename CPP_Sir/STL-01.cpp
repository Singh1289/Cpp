// STL - vector library

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    void display_vector(const char *msg, vector<char> ch);
    // create a integer vector
    vector<char> ch;
    // populate a vector
    ch.push_back('A');
    ch.push_back('b');
    ch.push_back('h');
    ch.push_back('i');
    ch.push_back('S');
    ch.push_back('i');
    ch.push_back('n');
    ch.push_back('g');
    ch.push_back('h');

    vector<char>::iterator p = ch.begin();
    // loop to cycle through the vector and display all elements
    cout << "now, displaying the vector element \n";
    for (; p != ch.end(); p++)
    {
        cout << *p << " ";
    }
    cout << "\n";

    p = ch.begin();
    p += 4;
    ch.insert(p, '+');
    ch.insert(p, 3, '+'); // number of time to be added

    cout << "now, displaying insert + in the vector element \n";

    p = ch.begin();
    ch.erase(p + 9, p + 10);
    // delete one element (range deletion is also possible)
    display_vector("now, displaying erase + in the vector element", ch);

    cout << "\n END..!!";

    return 0;
}

void display_vector(const char *msg, vector<char> ch)
{
    vector<char>::iterator p = ch.begin();
    p = ch.begin(); // get first element
    cout << msg << "\n";
    for (; p != ch.end(); p++)
    {
        cout << *p << "\n";
    }
    cout << "\n";
}