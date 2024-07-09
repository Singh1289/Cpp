#include <iostream>
using namespace std;

int bl_var; // global variables
int i;      // the value of global variable can change and hold last updated value

class Circle
{
    int i;
    float rad;
    static string color; // static variables

public:
    Circle()
    {
        i = 10;
        rad = 0.0f;
        color = "Red";
    }
    Circle(float r)
    {
        i = 10;
        color = "Red";
        bl_var = 10;
        rad = r;
    }
    void set_radius(float r) { rad = r; }
    float get_radius() { return rad; }
    float area()
    {
        float a = 3.14 * rad * rad;
        bl_var = 350;
        return a;
    }
    void changeColor(string c)
    {
        color = c;
    }
    void display()
    {
        int i = 5;
        bl_var = 450;

        cout << "\n i = " << i;
        cout << "\n this->i = " << this->i;
        cout << "\n global i = " << ::i;
        cout << "\n Color of Circle is " << color;
        cout << "\n Radius = " << rad;
        cout << "\n Area = " << area();
    }
};
string Circle ::color = "Red";
int main()
{
    Circle c1(4.5f);
    // cout << "\n\nGlobal var = " << bl_var;
    // i = 500;
    // c1.display();

    cout << "\n\nGlobal var = " << bl_var;
    Circle c2(6.5f);

    c1.changeColor("Black");

    c1.display();

    c2.display();
    return 0;
}
