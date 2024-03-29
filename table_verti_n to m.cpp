// print table between n to m  vertical//
#include"iostream"
using namespace std;

int main()
{
    int n,m ,i ,j,k;
    cout<<"\n Enter range: ";
    cin>>n;
    cin>>m;
    for(i=1;i<=10;i++)
    {
        cout<<"\n";
        for(j=n;j<=m;j++)
            cout<<"     "<<i*j;
    }
   return 0;
}
