// check number is perfect square //
#include"iostream"
#include<limits.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"\n Enter number: ";
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
      if((i*i)==n)
      {
          cout<<"\nNumber is a perfect square of "<<i;
          break;
      }
    }
    if((i*i) != n)
    {
        cout<<"\n"<<n<<": is not a perfect square..!!";
    }
   return 0;
}
