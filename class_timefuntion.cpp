#include <iostream>
using namespace std;
class time
{
    int hh, mm, ss;

public:
    time()
    {
        hh = 12;
        mm = 00;
        ss = 00;
    }
    void set_time(int a, int b, int c)
    {
        if ((a >= 1) && (a <= 24))
        {
            hh = a;
        }
        if ((b >= 1) && (b <= 59))
        {
            mm = b;
        }
        if ((c >= 1) && (c <= 59))
        {
            ss = c;
        }
    }
    void add_time(int h)
    {
        for (int i = 1; i <= h; i++)
        {
            if ((hh + i) < 24)
            {
                hh = hh + 1;
            }
            else
            {
                hh = 0;
            }
        }
    }
    void display()
    {
        cout << "\n | " << hh << " : " << mm << " : " << ss << " | ";
    }

    void compare(time *b)
    {
        if (hh == b->hh)
        {
            if (mm > b->mm)
            {
                display();
            }
            else
            {
                if (mm < b->mm)
                {
                    b->display();
                }
                else
                {
                    cout << "\n Both are equal..!!";
                }
            }
        }
        if (hh != b->hh)
        {
            if (hh > b->hh)
            {
                display();
            }
            else
            {
                
                    b->display();
                
            }
        }
    }
};

int main()
{
    time t1, t2;
    t1.display();
    t2.display();

    t2.set_time(23, 45, 20);
    t2.display();
    t1.add_time(10);
    t1.display();
    t2.add_time(4);
    t2.display();

    t1.compare(&t2);

    return 0;
}