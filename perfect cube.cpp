// check number is perfect cube //
#include"iostream"
#include<limits.h>
using namespace std;

int main()
{
    int n,i;
    cout<<"\n Enter number: ";
    cin>>n;
    for(i=1;i*i*i<=n;i++)
    {
      if((i*i*i)==n)
      {
          cout<<"\nNumber is a perfect cube of "<<i;
          break;
      }
    }
    if((i*i*i) != n)
    {
        cout<<"\n"<<n<<": is not a perfect cube..!!";
    }
   return 0;
}
