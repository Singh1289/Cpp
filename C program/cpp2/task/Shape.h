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
    virtual void display() {}

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
        cout << "\n Radius is : " << radius;
        cout << "\nArea is : " << area;
        cout << "\nPerimeter is " << perimeter;
    }

    // void swap_circle(Circle b)
    // {
    //     Circle temp;
    //     temp.radius = b.radius;
    //     b.radius = this->radius;
    //     this->radius = temp.radius;

    //     temp.perimeter = b.perimeter;
    //     b.perimeter = this->perimeter;
    //     this->perimeter = temp.perimeter;

    //     temp.area = b.area;
    //     b.area = this->area;
    //     this->area = temp.area;
    //     cout << "\n swap done";
    // }
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
        cout << "\n Length is : " << length;
        cout << "\n Width is : " << width;
        cout << "\n Area is : " << area;
        cout << "\n Perimeter is : " << perimeter;
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
    virtual void display() {}
    virtual void calculate_vol() {}
    virtual void calculate_area() {}
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
        volume = (4.0 / 3.0) * 3.14 * radius * radius * radius;
    }
    void display()
    {
        cout << "\n Radius is : " << radius;
        cout << "\nSurface area is : " << area;
        cout << "\nVolume is : " << volume;
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
        cout << "\n Radius is : " << radius;
        cout << "\n Surface area is : " << area;
        cout << "\n volume is : " << area;
    }
};