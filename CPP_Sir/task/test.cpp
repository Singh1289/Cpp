#include <bits/stdc++.h>
using namespace std;

void tokenize(string s, string del = " ")
{
    int start, end = -1 * del.size();
    do
    {
        start = end + del.size();
        cout << "\nstart: " << start;
        cout << "\nend: " << end;
        end = s.find(del, start);
        cout << s.substr(start, end - start) << endl;
    } while (end != -1);
}
int main(int argc, char const *argv[])
{
    // Takes C++ string with any separator
    string a = "How$%do$%you$%do$%!";
    tokenize(a, "$%");
    cout << endl;

    return 0;
}