// Power function with constraints //
#include"iostream"
#include<limits.h>
using namespace std;

float pow(float x,float y)
{
    float res=1;
    for(int i=1;i<=y;i++)
        res= res*x;
    return res;
}


int main()
{
    float n;
    int m;
    float check;
    cout<<"\n Enter number: ";
    cin>>n;
    cin>>m;
    if((n> -100) && (n< 100))
    {
        if(INT_MAX/10 > m && INT_MIN/10 < m)
        {
          if(m < 0)
          {
              m=abs(m);
              check= pow(n,m);
              check= 1/check;
          }else
          {
            check= pow(n,m);
          }
        }
    }
    else
    {
        cout<<"\n value of n is not in range -100 to 100";
        return 0;
    }

    cout<<"\nPower : "<<check;

   return 0;
}
