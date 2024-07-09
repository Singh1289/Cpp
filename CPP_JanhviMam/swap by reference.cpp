#include<iostream>
using namespace std;

void swap_byAddress(int *, int *);
void swap_byRef(int &, int &);

int main()
{
    int num1 = 75, num2 = 30;

    swap_byAddress(&num1, &num2);

    cout<<"\n num1 = "<<num1<<" num2 = "<<num2;

    swap_byRef(num1, num2);

    cout<<"\n num1 = "<<num1<<" num2 = "<<num2;

    return 0;

}

void swap_byAddress(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


void swap_byRef(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
