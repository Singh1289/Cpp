#include <iostream>
#include <string.h>
using namespace std;
class item
{
    char itemcode[6];
    char itemname[20];
    float rate;

public:
    item()
    {
        strcpy(itemcode, "abc");
        strcpy(itemname, "hello");
        rate = 10;
    }
    item(const char *a, const char *b, float r)
    {
        for (int i = 0; i < 6; i++)
            itemcode[i] = a[i];
        for (int i = 0; i < 20; i++)
            itemname[i] = b[i];

        rate = r;
    }

    void set_itemcode(const char *a)
    {
        for (int i = 0; i < 6; i++)
            itemcode[i] = a[i];
    }

    void set_itemname(const char *a)
    {
        for (int i = 0; i < 20; i++)
            itemname[i] = a[i];
    }
    void set_rate(float a)
    {
        rate = a;
    }

    char *get_itemcode()
    {
        return itemcode;
    }

    char *get_itemname()
    {
        return itemname;
    }
    float get_rate()
    {
        return rate;
    }
    void display()
    {
        int i;
        cout << "\n Itemcode : ";
        for (i = 0; i < strlen(itemcode); i++)
        {
            cout << itemcode[i];
        }
        cout << "\n Itemname : ";
        for (i = 0; i < strlen(itemname); i++)
        {
            cout << itemname[i];
        }
        cout << "\n   Rate   : " << rate;
    }
};

int main()
{
    item A1("ABh", "asd", 23.23), A2;
    // char a[12]= {"Abhishek"};
    // item A2("xyz","aaaa",25.50);

    // for(int i=0;i<12;i++)
    //     cout<<a[i];
    A1.display();
    A2.display();
    A2.set_itemcode("box");
    A2.set_itemname("cup001");
    A2.set_rate(49.99);
    A2.display();
    // for (int i = 0; i < 6; i++)
    //    cout << "\n code : " << A2.get_itemcode[i];
    cout << "\n Item name : " << A2.get_itemname();
    cout << "\n rate : " << A2.get_rate();

    A2.set_itemname("cupsABC");
    cout << "\n Item name : " << A2.get_itemname();
    return 0;
}
