#include <iostream>
using namespace std;

// generic pointer
template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 23, b = 65;
    // int
    swap(a, b);
    cout << "a: " << a << "  b: " << b << "\n";

    // float
    float c = 22.45, d = 77.34;
    swap(c, d);
    cout << "c: " << c << "  d: " << d << "\n";

    // double
    float e = 22.4534, f = 77.3445;
    swap(e, f);
    cout << "e: " << e << "  f: " << f << "\n";

    // char
    char c = 'D', d = 'C';
    swap(c, d);
    cout << "c: " << c << "  d: " << d << "\n";
    return 0;
}