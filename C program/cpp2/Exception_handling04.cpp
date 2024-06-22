// user define exception handling

#include <iostream>
#include <cstring>
using namespace std;

class NegativeException
{
    char message[100];
    int value;

public:
    NegativeException()
    {
        strcpy(message, "Negative Value Exception");
    }
    NegativeException(const char *mp, int value)
    {
        strcpy(message, "Negative Value Exception");
        strcpy(message, mp);
        this->value = value;
    }
    string get_message()
    {
        return message;
    }
    int get_value()
    {
        return value;
    }
};

int accept_positive_int()
{
    int v;
    char resp;
    char msg[] = {"the entered value is negative. please entered +ve value"};
    do
    {
        try
        {
            // resp = 'N';
            cout << "\n entered a positive value : ";
            cin >> v;

            if (v < 0)
                throw new NegativeException(msg, v); // *(new NegativeException())
            cout << "\n the enterred value is : " << v;
            
        }
        catch (NegativeException *nve)
        {
            cout << "\nvalue= " << nve->get_value();
            cout << nve->get_message();

            // accepting response
            cout << "\nDo you want to continue (Y/N) :  ";
            cin >> resp;
        }

    } while (resp == 'Y' || resp == 'y');
    return v;
}

int main()
{
    cout << "\n ~~~~ Start ~~~~";
    cout << "\n The positive value entered is : " << accept_positive_int();
    cout << "\n ~~~~ the end ~~~~";
    return 0;
}

// new is returning pointer  and in catch
