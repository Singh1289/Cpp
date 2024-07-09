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
    Distance operator+(Distance d)
    {
        Distance temp; // resulting object or local object
        temp.centimeter = this->centimeter + d.centimeter;
        temp.meter = this->meter + d.meter;

        if (temp.centimeter >= 100)
        {
            temp.centimeter -= 100;
            temp.meter++;
        }
        return temp; // returning object
    }
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
                // temp.meter = temp.meter * (-1);
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

    Distance operator++()
    {
        // pre increment
        ++this->meter;
        return *this;
    }

    Distance operator++(int x) // we can not writer ++ before operator to make it pre or post operator so we use int
    {
        // post increment
        this->meter++;
        return *this;
    }

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

    Distance operator-=(Distance d) // compound
    {
        if (this->meter < d.meter)
        {
            this->meter = d.meter - this->meter;
            if (d.centimeter < this->centimeter)
            {
                this->centimeter = (100 + d.centimeter) - centimeter;
                this->meter--;
                this->meter = this->meter * (-1);
            }
            else
            {
                this->centimeter = d.centimeter - centimeter;
                this->meter = this->meter * (-1);
            }
        }
        else
        {
            this->meter = this->meter - d.meter;
            if (centimeter < d.centimeter)
            {
                this->centimeter = (100 + centimeter) - d.centimeter;
                this->meter--;
            }
            else
            {
                this->centimeter = this->centimeter - d.centimeter;
            }
        }
        return *this; // returning object
    }

    void display()
    {
        cout << "\n Distance is : " << meter << "m " << centimeter << "cm";
    }
};

int main()
{
    Distance a(2, 50);
    a.display();
    Distance b(4, 70);
    b.display();
    Distance d;

    d = a - b;
    // d = a.operator+(b);
    d.display();
    /*
       d = d++;
       d.display();

       d = ++d;
       d.display();
          //
           Distance e(10, 30);
           e += a;
           e.display();
           cout << "\n -= ";
           // e -= b;
           b -= e;
           b.display();*/
    return 0;
}
