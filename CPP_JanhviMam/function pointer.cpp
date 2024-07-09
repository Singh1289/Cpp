// function pointer //
#include<iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int power(int, int);

int main()
{
    int n1 = 23, n2 = 12;

    int (*fun[3])(int,int) = {add,sub,mul};

    for(int i = 0;i<3;i++)
        cout<<"\n"<<fun[i](n1,n2);

    /*
    fun = add;

    cout<<"\n "<<fun(n1,n2);


    fun = sub;

    cout<<"\n "<<fun(n1,n2);

    fun = mul;

    cout<<"\n "<<fun(n1,n2);
*/
    return 0;

}

int add(int a, int b)
{

    return a+b;
}

int mul(int a, int b)
{
    return a*b;
}

int sub(int a, int b)
{
    return a-b;
}

