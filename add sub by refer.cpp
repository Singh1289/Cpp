// write a function to do add,sub & multiply parameter pass by reference.

#include<iostream>
using namespace std;

void calc(int *,int *,int *,int &,int &,int &);

int main()
{
    int a=10,b=20,c=30,add,sub,mul;
    calc(&a,&b,&c,add,sub,mul);
    cout<<"\n addition = "<<add;
    cout<<"\n subtraction = "<<sub;
    cout<<"\n multiply = "<<mul;

    return 0;
}

void calc(int *m,int *n,int *o,int &ad,int &su,int &mu)
{
    ad= *m+ *n;
    su= *o - *n;
    mu= (*m) * (*n) * (*o);
}
