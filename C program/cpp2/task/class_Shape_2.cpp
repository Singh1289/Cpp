#include <iostream>
#include <algorithm>
#include "Shape.h"
using namespace std;

void swap_Circle(Circle &a, Circle &b)
{
    Circle temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_Rectangle(Rectangle &a, Rectangle &b)
{
    Rectangle temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_Sphere(Sphere &a, Sphere &b)
{
    Sphere temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_Cylinder(Cylinder &a, Cylinder &b)
{
    Cylinder temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int n, in, cc = 0, ss = 0, rr = 0, cy = 0, input, input2;
    char ch;
    Circle c1[20];
    Rectangle r1[20];
    Sphere s1[20];
    Cylinder cy1[20];

    do
    {
        cout << "\nPlease choose one of the option :";
        cout << "\n1. Add shape";
        cout << "\n2. Search shape in the set";
        cout << "\n3. Update shape";
        cout << "\n4. Delete shape";
        cout << "\n5. Display shapes";
        cout << "\n6. Exit";
        while (true)
        {
            cout << "\n Enter choice(1..6) : ";
            cin >> n;
            if (n > 0 && n < 7)
            {
                break;
            }
        }
        switch (n)
        {
        case 1:
            do
            {
                cout << "\nWhich shape to be added :";
                cout << "\na. Circle";
                cout << "\nb. Rectangle";
                cout << "\nc. Sphere";
                cout << "\nd. Cylinder";
                cout << "\ne. Return to main menu";
                cout << "\n Enter choice(a to e) ";
                cin >> ch;
                switch (ch)
                {
                case 'a': // circle
                    cout << "\nEnter radius : ";
                    cin >> input;
                    c1[cc].set_circle(input);
                    c1[cc].calculate_area();
                    c1[cc].calculate_perimeter();

                    cout << "\n Area is : " << c1[cc].get_area2D() << "\n";
                    cout << "\n perimeter is : " << c1[cc].get_perimeter2D() << "\n";
                    cout << "\n Shape added successfully..!!";
                    cc++;
                    break;
                case 'b': // rectangle
                    cout << "\nEnter length : ";
                    cin >> input;
                    cout << "\nEnter width : ";
                    cin >> input2;
                    r1[rr].set_rectangle(input, input2);
                    r1[rr].calculate_area();
                    r1[rr].calculate_perimeter();
                    cout << "\n Area is : " << r1[rr].get_area2D() << "\n";
                    cout << "\n perimeter is : " << r1[rr].get_perimeter2D() << "\n";
                    rr++;
                    cout << "\n Shape added successfully..!!";
                    break;
                case 'c': // sphere
                    cout << "\nEnter radius : ";
                    cin >> input;
                    s1[ss].set_sphere(input);
                    s1[ss].calculate_area();
                    s1[ss].calculate_vol();
                    cout << "\n Area is : " << s1[ss].get_area3D() << "\n";
                    cout << "\n volume is : " << s1[ss].get_volume3D() << "\n";
                    ss++;
                    cout << "\n Shape added successfully..!!";
                    break;
                case 'd': // cylinder
                    cout << "\nEnter radius : ";
                    cin >> input;
                    cout << "\nEnter height : ";
                    cin >> input2;
                    cy1[cy].set_cylinder(input, input2);
                    cy1[cy].calculate_area();
                    cy1[cy].calculate_vol();
                    cout << "\n Area is : " << cy1[cy].get_area3D() << "\n";
                    cout << "\n volume is : " << cy1[cy].get_volume3D() << "\n";
                    cy++;
                    cout << "\n Shape added successfully..!!";
                    break;
                case 'e':
                    break;

                default:
                    cout << "\nPlease choose another option..!!";
                }
            } while (ch != 'e');

            break;
        case 2:
            do
            {
                cout << "\nWhich shape you want to search...;";
                cout << "\na. Circle";
                cout << "\nb. Rectangle";
                cout << "\nc. Sphere";
                cout << "\nd. Cylinder";
                cout << "\ne. Return to main menu";
                cout << "\n Enter choice(a to e) ";
                cin >> ch;
                switch (ch)
                {
                case 'a': // circle search
                    while (true)
                    {
                        cout << "\nwhich circle (numbers only) : ";
                        cin >> input;
                        if (input >= 0 && input <= cc)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    c1[input - 1].display();
                    break;

                case 'b': // rectangle search
                    while (true)
                    {
                        cout << "\nwhich circle (numbers only) : ";
                        cin >> input;
                        if (input >= 0 && input <= rr)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    r1[input - 1].display();
                    break;

                case 'c': // sphere search
                    while (true)
                    {
                        cout << "\nwhich circle (numbers only) : ";
                        cin >> input;
                        if (input >= 0 && input <= ss)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    s1[input - 1].display();
                    break;

                case 'd': // cylinder search
                    while (true)
                    {
                        cout << "\nwhich circle (numbers only) : ";
                        cin >> input;
                        if (input >= 0 && input <= cy)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    cy1[input - 1].display();
                    break;
                case 'e':
                    break;

                default:
                    cout << "\nPlease choose another option..!!";
                }
            } while (ch != 'e');

            break;
        case 3:
            do
            {
                cout << "\nWhich shape to be updated :";
                cout << "\na. Circle";
                cout << "\nb. Rectangle";
                cout << "\nc. Sphere";
                cout << "\nd. Cylinder";
                cout << "\ne. Return to main menu";
                cout << "\n Enter choice(a to e) ";
                cin >> ch;
                switch (ch)
                {
                case 'a': // circle update
                    while (true)
                    {
                        cout << "\nwhich circle (numbers only) : ";
                        cin >> input;
                        if (input >= 0 && input <= cc)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    cout << "\nEnter new radius :";
                    cin >> input2;
                    c1[input - 1].set_circle(input2);
                    c1[input - 1].calculate_area();
                    c1[input - 1].calculate_perimeter();
                    c1[input - 1].display();
                    cout << "\n Shape updated successfully..!!";
                    break;
                case 'b': // rectangle update
                    while (true)
                    {
                        cout << "\nwhich rectangle (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && input <= rr)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    cout << "\nEnter length : ";
                    cin >> input;
                    cout << "\nEnter width : ";
                    cin >> input2;
                    r1[in - 1].set_rectangle(input, input2);
                    r1[in - 1].calculate_area();
                    r1[in - 1].calculate_perimeter();
                    r1[in - 1].display();
                    cout << "\n Shape updated successfully..!!";
                    break;
                case 'c': // sphere update
                    while (true)
                    {
                        cout << "\nwhich sphere (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && input <= ss)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    cout << "\nEnter radius : ";
                    cin >> input;
                    s1[in - 1].set_sphere(input);
                    s1[in - 1].calculate_area();
                    s1[in - 1].calculate_vol();
                    s1[in - 1].display();
                    cout << "\n Shape updated successfully..!!";
                    break;
                case 'd': // cylinder update
                    while (true)
                    {
                        cout << "\nwhich cylinder (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && input <= cy)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    cout << "\nEnter radius : ";
                    cin >> input;
                    cout << "\nEnter height : ";
                    cin >> input2;
                    cy1[in - 1].set_cylinder(input, input2);
                    cy1[in - 1].calculate_area();
                    cy1[in - 1].calculate_vol();
                    cy1[in - 1].display();
                    cout << "\n Shape updated successfully..!!";
                    break;
                case 'e':
                    break;

                default:
                    cout << "\nPlease choose another option..!!";
                }
            } while (ch != 'e');

            break;
        case 4:
            do
            {
                cout << "\nWhich shape to be deleted :";
                cout << "\na. Circle";
                cout << "\nb. Rectangle";
                cout << "\nc. Sphere";
                cout << "\nd. Cylinder";
                cout << "\ne. Return to main menu";
                cout << "\n Enter choice(a to e) ";
                cin >> ch;
                switch (ch)
                {
                case 'a': // circle delete
                    while (true)
                    {
                        cout << "\nwhich circle (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && in <= cc)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    for (int k = (in - 1); k < cc; k++)
                    {
                        c1[k] = c1[k + 1];
                    }
                    cc--;
                    cout << "\n Shape deleted successfully..!!";
                    break;
                case 'b': // rectangle delete
                    while (true)
                    {
                        cout << "\nwhich rectangle (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && input <= rr)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    for (int k = (in - 1); k < rr; k++)
                    {
                        r1[k] = r1[k + 1];
                    }
                    rr--;
                    cout << "\n Shape deleted successfully..!!";
                    break;
                case 'c': // sphere delete
                    while (true)
                    {
                        cout << "\nwhich sphere (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && input <= ss)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    for (int k = (in - 1); k < ss; k++)
                    {
                        s1[k] = s1[k + 1];
                    }
                    ss--;
                    cout << "\n Shape deleted successfully..!!";
                    break;
                case 'd': // cylinder delete
                    while (true)
                    {
                        cout << "\nwhich cylinder (numbers only) : ";
                        cin >> in;
                        if (in >= 0 && input <= cy)
                        {
                            break;
                        }
                        cout << "please enter only numbers ..";
                    }
                    for (int k = (in - 1); k < cy; k++)
                    {
                        cy1[k] = cy1[k + 1];
                    }
                    cy--;
                    cout << "\n Shape deleted successfully..!!";
                    break;
                case 'e':
                    break;

                default:
                    cout << "\nPlease choose another option..!!";
                }
            } while (ch != 'e');

            break;
        case 5:
            do
            {
                cout << "\nWhich shape to be displayed :";
                cout << "\na. All circle ordered by area and perimeter ";
                cout << "\nb. Display all circle";
                cout << "\nc. All rectangle ordered by area and perimeter";
                cout << "\nd. Display all rectangle";
                cout << "\ne. All sphere ordered by area and volume";
                cout << "\nf. Display all sphere ordered ";
                cout << "\ng. All cylinder ordered by area and volume";
                cout << "\nh. Display all cylinder";
                cout << "\ni. Return to main menu";
                Circle c2[30];
                Sphere s2[30];
                Rectangle r2[30];
                Cylinder cy2[30];

                cout << "\n Enter choice(a to e) ";
                cin >> ch;
                switch (ch)
                {
                case 'a': // circle ordered by area
                    // cout << "\n cc is : " << cc << "\n";
                    for (int k = 0; k < cc; k++)
                    {

                        c2[k] = c1[k];
                    }
                    for (int k = 0; k < cc - 1; k++)
                    {

                        for (int m = k + 1; m > 0; m--)
                        {
                            if (c2[m].get_area2D() < c2[m - 1].get_area2D())
                            {
                                cout << "\n entered condition";
                                swap_Circle(c2[m], c2[m - 1]);
                            }
                        }
                    }

                    for (int k = 0; k < cc; k++)
                    {
                        c2[k].display();
                    }

                    break;
                case 'b': // circle ordered by perimeter

                    for (int k = 0; k < cc; k++)
                    {
                        c1[k].display();
                    }
                    break;
                case 'c': // rectangle ordered by area
                    for (int k = 0; k < rr; k++)
                    {

                        r2[k] = r1[k];
                    }
                    for (int k = 0; k < rr - 1; k++)
                    {

                        for (int m = k + 1; m > 0; m--)
                        {
                            if (r2[m].get_area2D() < r2[m - 1].get_area2D())
                            {
                                cout << "\n entered condition";
                                swap_Rectangle(r2[m], r2[m - 1]);
                            }
                        }
                    }

                    for (int k = 0; k < rr; k++)
                    {
                        r2[k].display();
                    }

                    break;
                case 'd': // rectangle ordered by perimeter

                    for (int k = 0; k < rr; k++)
                    {
                        r1[k].display();
                    }
                    break;
                case 'e': // sphere ordered by area
                    for (int k = 0; k < ss; k++)
                    {

                        s2[k] = s1[k];
                    }
                    for (int k = 0; k < ss - 1; k++)
                    {

                        for (int m = k + 1; m > 0; m--)
                        {
                            if (s2[m].get_area3D() < s2[m - 1].get_area3D())
                            {
                                cout << "\n entered condition";
                                swap_Sphere(s2[m], s2[m - 1]);
                            }
                        }
                    }

                    for (int k = 0; k < ss; k++)
                    {
                        s2[k].display();
                    }

                    break;
                case 'f': // sphere ordered by perimeter

                    for (int k = 0; k < ss; k++)
                    {
                        s1[k].display();
                    }
                    break;

                case 'g': // cylinder ordered by area
                    for (int k = 0; k < cy; k++)
                    {

                        cy2[k] = cy1[k];
                    }
                    for (int k = 0; k < cy - 1; k++)
                    {

                        for (int m = k + 1; m > 0; m--)
                        {
                            if (cy2[m].get_area3D() < cy2[m - 1].get_area3D())
                            {
                                cout << "\n entered condition";
                                swap_Cylinder(cy2[m], cy2[m - 1]);
                            }
                        }
                    }

                    for (int k = 0; k < cy; k++)
                    {
                        cy2[k].display();
                    }

                    break;
                case 'h': // cylinder ordered by perimeter

                    for (int k = 0; k < cy; k++)
                    {
                        cy1[k].display();
                    }
                    break;
                case 'i':
                    break;
                default:
                    cout << "\nPlease choose another option..!!";
                }
            } while (ch != 'i');

            break;

        case 6:
            break;
        default:
            cout << "\n please choose another option..!!";
        }
    } while (ch != 6);
    cout << "\n\n~~ Thank you ~~\n";
    return 0;
}
