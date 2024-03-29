// perfect numbers //
#include"iostream"

using namespace std;

void printprefectno(int x, int y)
{
    int i,j,sum;
    for(i=x;i<=y;i++)
    {
        sum=0;
       for(j=1;j<i;j++)
       {
           if(i%j==0)
           {
               sum+=j; //1 2 3
           }
       }
       if(sum==i) cout<<"\nNumber : "<<i;
    }
}


int main()
{
    int n,m;
    cout<<"\n Enter range : ";
    cin>>m;
    cin>>n;
    printprefectno(m,n);
   return 0;
}
