// sum function with default value //
#include"iostream"
#include<limits.h>
using namespace std;

int sum(int x,int y=4)   // default y= 4 if no parameter pass  then 4 will be used
{                        // default will be pass in last
    return x+y;
}


int main()
{
    int n,m;
    cout<<"\n Enter number: ";
    cin>>n;
    cin>>m;

    cout<<"\nSum : "<<sum(n,m);     // Sum : 30
    cout<<"\nSum : "<<sum(m);       // Sum : 24
    cout<<"\nSum : "<<sum(n,100);   // Sum : 110
    cout<<"\nSum : "<<sum(100);     // Sum : 104

   return 0;
}
