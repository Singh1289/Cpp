//Abstract class and its use

#include<iostream>
#include<cstring>
using namespace std;

class Shape{
protected:
    double area;

public:
    void calculate_area();


};

// static variable declaration
int Circle :: count=0;

class Circle: public Shape{
    double radius;
    static int count; // static variable
public:
    Circle(){
        radius=1;
        count++;
    }
    Circle(double radius){
        this->radius= radius;
        count++;
    }

    void calculate_area(){
        area=3.14*radius*radius;
    }
    void display(){
        cout<<"\n : "<<count<<"Radius : "<<radius<<"area : "<<area;
    }
};

int main()
{
    Circle c1;
    c1.calculate_area();
    c1.display();

    Circle c2(10);
    c2.calculate_area();
    c2.display();
}
