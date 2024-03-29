#include<iostream>
using namespace std;

int main()
{
    int a[15]={24,31,312,43,23,42,312,42,87,97,312,76,335,423,42};
    int b[15];
    int i,j,k=-999;


    for(i=0;i<15;i++)
    {
        b[i]=a[i];
    }

    for(i=0;i<15;i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\n";

    for(i=0;i<15;i++)
    {
        for(j=i+1;j<15;j++)
        {
            if(b[i]==b[j])
            {
              cout<<"\nNumber is :"<<a[i];
                b[j]=k;
                k++;
                break;

            }

        }
    }
    cout<<"\n";
    for(i=0;i<15;i++)
    {
        cout<<" "<<b[i];
    }


    return 0;
}
