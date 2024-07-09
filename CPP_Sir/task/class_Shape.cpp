#include <iostream>
#include <cstdlib> 
using namespace std;

// abstract class
class Shape
{
protected:
    double area;

public:
    virtual void calculate_area() = 0;
};

class Two_D : public Shape
{
protected:
    double perimeter;

public:
    Two_D()
    {
        perimeter = 0;
        area = 0;
    }
    double get_area2D()
    {
        return area;
    }
    double get_perimeter2D()
    {
        return perimeter;
    }

    virtual void calculate_area() {}
};

class Circle : public Two_D
{
    double radius;

public:
    Circle()
    {
        radius = 1;
        area = 0;
    }

    Circle(double rad)
    {
        radius = rad;
    }
    void calculate_area()
    {
        area = 3.14 * radius * radius;
    }
    void calculate_perimeter()
    {
        perimeter = 2 * 3.14 * radius;
    }
    void set_circle(float rad)
    {
        this->radius = rad;
    }
    double get_circle()
    {
        return this->radius;
    }

    void display()
    {
        cout << "\n Radius is : " << radius << "  :  Area is : " << area;
    }
};

class Rectangle : public Two_D
{
    double length;
    double width;

public:
    Rectangle()
    {
        length = 1;
        width = 1;
    }

    Rectangle(double len, double wid)
    {
        length = len;
        width = wid;
    }
    void calculate_area()
    {
        area = length * width;
    }

    void calculate_perimeter()
    {
        perimeter = 2 * (length + width);
    }
    void set_rectangle(float len, float wid)
    {
        this->length = len;
        this->width = wid;
    }
    double get_rectangle()
    {
        return this->length;
    }

    void display()
    {
        cout << "\n Length is : " << length << "  : width is : " << width << "  :  Area is : " << area;
    }
};

class Three_D : public Shape
{
protected:
    double volume;

public:
    Three_D()
    {
        area = 0;
        volume = 0;
    }
    double get_volume3D()
    {
        return this->volume;
    }
    double get_area3D()
    {
        return this->area;
    }
    virtual void calculate_vol() {}
};

class Sphere : public Three_D
{
    double radius;

public:
    Sphere()
    {
        radius = 0;
    }

    Sphere(double rad)
    {
        radius = rad;
    }
    void set_sphere(float rad)
    {
        this->radius = rad;
    }
    double get_sphere()
    {
        return this->radius;
    }
    void calculate_area()
    {
        area = 4 * 3.14 * radius * radius;
    }
    void calculate_vol()
    {
        area = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
    void display()
    {
        cout << "\n Radius is : " << radius << "  :  Area is : " << area;
    }
};

class Cylinder : public Three_D
{
    double radius;
    double height;

public:
    Cylinder()
    {
        radius = 0;
        height = 0;
    }

    Cylinder(double r, double h)
    {
        radius = r;
        height = h;
    }
    void set_cylinder(float rad, float h)
    {
        this->radius = rad;
        this->height = h;
    }
    double get_cylinder()
    {
        return this->radius;
    }
    void calculate_area()
    {
        area = (2 * 3.14 * radius * (radius + height));
    }
    void calculate_vol()
    {
        volume = 3.14 * radius * radius * height;
    }
    void display()
    {
        cout << "\n Radius is : " << radius << "  :  Area is : " << area;
    }
};

int main()
{
    int ch, input, input2;
    Circle c1;
    Rectangle r1;
    Sphere s1;
    Cylinder cy1;

    do
    {
        cout << "\n1. Circle Circumference";
        cout << "\n2. Circle Area";
        cout << "\n3. Rectangle perimeter";
        cout << "\n4. Rectangle Area";
        cout << "\n5. Sphere Surface";
        cout << "\n6. Sphere Volume";
        cout << "\n7. Cylinder Surface";
        cout << "\n8. Cylinder Volume";
        cout << "\n9. Exit";
        cout << "\n Enter choice(1..7) ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter radius : ";
            cin >> input;
            c1.set_circle(input);
            c1.calculate_perimeter();
            cout << "\n Circumference is : " << c1.get_perimeter2D() << "\n";

            break;
        case 2:
            cout << "\n Enter radius : ";
            cin >> input;
            c1.set_circle(input);
            c1.calculate_area();
            cout << "\n Area is : " << c1.get_area2D() << "\n";

            break;
        case 3:
            cout << "\n Enter length : ";
            cin >> input;
            cout << "\n Enter width : ";
            cin >> input2;
            r1.set_rectangle(input, input2);
            r1.calculate_perimeter();
            cout << "\n Perimeter is : " << r1.get_perimeter2D() << "\n";
            break;
        case 4:
            cout << "\n Enter length : ";
            cin >> input;
            cout << "\n Enter width : ";
            cin >> input2;
            r1.set_rectangle(input, input2);
            r1.calculate_area();
            cout << "\n Area is : " << r1.get_area2D() << "\n";
            break;

        case 5:
            cout << "\n Enter radius : ";
            cin >> input;
            s1.set_sphere(input);
            s1.calculate_area();
            cout << "\n Surface area is : " << s1.get_area3D() << "\n";

            break;

        case 6:
            cout << "\n Enter radius : ";
            cin >> input;
            s1.set_sphere(input);
            s1.calculate_vol();
            cout << "\n Volume is : " << s1.get_volume3D() << "\n";

            break;

        case 7:
            cout << "\n Enter radius : ";
            cin >> input;
            cout << "\n Enter height : ";
            cin >> input2;
            cy1.set_cylinder(input, input2);
            cy1.calculate_area();
            cout << "\n Surface area is : " << cy1.get_area3D() << "\n";
            break;

        case 8:
            cout << "\n Enter radius : ";
            cin >> input;
            cout << "\n Enter height : ";
            cin >> input2;
            cy1.set_cylinder(input, input2);
            cy1.calculate_vol();
            cout << "\n Volume is : " << cy1.get_volume3D() << "\n";
            break;

        case 9:
            cout << "\nThank you";
            exit;
        }

    } while (ch != 9);
    return 0;
}
