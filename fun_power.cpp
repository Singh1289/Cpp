// Power function //
#include"iostream"
#include<limits.h>
using namespace std;

int pow(int x,int y)
{
    int res=1,i;
    for(i=1;i<=y;i++)
        res= res*x;
    return res;
}


int main()
{
    int n,m;
    cout<<"\n Enter number: ";
    cin>>n;
    cin>>m;

    cout<<"\nPower : "<<pow(n,m);

   return 0;
}
