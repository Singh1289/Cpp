// print table-- take 4 input from user before printing every table//
#include"iostream"
using namespace std;

int main()
{
    int n,i,j;
    for(i=1;i<=4;i++)
    {
        cout<<"\n Enter number: ";
        cin>>n;
        cout<<"\n";
        for(j=1;j<=10;j++)
            cout<<"  "<<n*j;
        cout<<"\n";
    }
   return 0;
}
