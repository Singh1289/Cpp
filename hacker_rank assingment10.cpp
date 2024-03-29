// leet code problem ??

#include<iostream>
using namespace std;

int main()
{
    int target,i,j,n;
    while(true)
    {
        cout<<"\n Enter size of array : ";
        cin>>n;
        if((n>=2)&&(n<=104))
            break;

        cout<<"\n Enter size in range 2 to 104";
    }
    int num[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter value : ";
        cin>>num[i];
        if(!((num[i]>= -109)&&(num[i]<= 109)))
        {
            cout<<"\n Enter range -109 to 109";
            i--;
        }
    }
    while(true)
    {
        cout<<"\n enter target : ";
        cin>>target;
        if((target>= -109)&&(target<=109))
            break;

        cout<<"\n Enter range -109 to 109";
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((num[i]+num[j])== target)
            {
                cout<<"\n pair is : ["<<i<<","<<j<<"]";
                return 0;
            }
        }
    }

    cout<<"\n Not found...!!!";
    return 0;
}
