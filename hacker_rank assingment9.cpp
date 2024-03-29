/* make void function take value and pass by *a *b and print addition
    and absolute difference. */

#include<iostream>
using namespace std;

void update(int *a,int *b)
{
    int temp;
    temp= *a + *b;
    *b = abs(*a - *b);
    *a= temp;
}
int main()
{
    int a, b;
    cout<<"\n Enter numbers : ";
    cin>>a;
    cin>>b;
    int *pa = &a, *pb = &b;
    cout <<&a<<" "<<&b<<"\n\n";
    update(pa, pb);
    cout<<a<<"  "<<b;
    return 0;

}
