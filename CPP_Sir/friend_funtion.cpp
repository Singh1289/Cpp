// operator overloading

#include <iostream>
#include <cstring>
using namespace std;

class Distance
{
    int meter;
    int centimeter;

public:
    // default constructor
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }

    // parameterize constructor
    Distance(int m, int cm)
    {
        meter = m;
        centimeter = cm;
    }

    // Operator overloading
    // Distance operator+(Distance d)
    // {
    //     Distance temp; // resulting object or local object
    //     temp.centimeter = this->centimeter + d.centimeter;
    //     temp.meter = this->meter + d.meter;

    //     if (temp.centimeter >= 100)
    //     {
    //         temp.centimeter -= 100;
    //         temp.meter++;
    //     }
    //     return temp; // returning object
    // }
    Distance operator-(Distance d)
    {
        Distance temp; // resulting object or local object
        ;

        if (meter < d.meter)
        {
            temp.meter = d.meter - this->meter;
            if (d.centimeter < centimeter)
            {
                temp.centimeter = (100 + d.centimeter) - centimeter;
                temp.meter--;
                // temp.meter = temp.meter * (-1);
            }
            else
            {
                temp.centimeter = d.centimeter - centimeter;
            }
        }
        else
        {
            temp.meter = this->meter - d.meter;
            if (centimeter < d.centimeter)
            {
                temp.centimeter = (100 + centimeter) - d.centimeter;
                temp.meter--;
            }
            else
            {
                temp.centimeter = this->centimeter - d.centimeter;
            }
        }
        return temp; // returning object
    }

    // Distance operator++()
    // {
    //     // pre increment
    //     ++this->meter;
    //     return *this;
    // }

    // Distance operator++(int x) // we can not writer ++ before operator to make it pre or post operator so we use int
    // {
    //     // post increment
    //     this->meter++;
    //     return *this;
    // }

    Distance operator+=(Distance d) // compound
    {
        this->meter += d.meter;
        this->centimeter += d.centimeter;
        if (this->centimeter >= 100)
        {
            this->centimeter -= 100;
            this->meter++;
        }

        return *this;
    }

    void display()
    {
        cout << "\n Distance is : " << meter << "m " << centimeter << "cm";
    }

    // for friend function
    friend Distance operator++(Distance d);
    friend Distance operator--(Distance d);
    friend Distance operator+(Distance d, int m);
    friend Distance operator-(Distance d, int m);
    friend Distance operator+(int m, Distance d);
    friend Distance operator-(int m, Distance d);

    // assignment operator
    Distance operator=(Distance d)
    {
        this->meter = meter;
        this->centimeter = centimeter;
        return *this;
    }
};

int main()
{
    Distance a(2, 50);
    a.display();
    Distance b(4, 30);
    b.display();
    Distance d(8, 20);
    /*
        d = a - b;
        // d = a.operator+(b);
        d.display();

        // d = d++;
        // d.display();*/
    cout << "\n friend function output";
    cout << "\n ++";
    d = ++d;
    d.display();

    cout << "\n d + a";
    d += a;
    cout << "\n D is";
    d.display();

    cout << "\n 10 + a";
    a = 10 + a;
    a.display();

    cout << "\n a + 10";
    a = a + 10;
    a.display();

    cout << "\nsubtract fuction";

    d = d - 4;
    d.display();

    d = 5 - d;
    d.display();

    return 0;
}

// non-member operator function
// for pre-increment
Distance operator++(Distance d)
{
    d.meter++;
    return d;
}

// for adding constant meter to distance
Distance operator+(int m, Distance d)
{
    d.meter += m;
    return d;
}

// for adding constant meter to distance, in different way
Distance operator+(Distance d, int m)
{
    d.meter += m;
    return d;
}

// for pre-increment
Distance operator--(Distance d)
{
    d.meter--;
    return d;
}

// for adding constant meter to distance
Distance operator-(int m, Distance d)
{
    d.meter -= m;
    return d;
}

// for adding constant meter to distance, in different way
Distance operator-(Distance d, int m)
{
    d.meter -= m;
    return d;
}
