/* WAP take number T from user and then take a anfd find next special no. */

#include"iostream"
using namespace std;

int main()
{
    int a,T,temp,sum;
    cout<<"\n Enter number of test case : ";
    cin>>T;
    if((1<=T)&&(T<=100000))
    {
        for(int i=1;i<=T;i++)    // T=2
        {
            cout<<"\n Enter sample input : ";
            cin>>a;
            for(int j=a;j<a+5;j++)
            {
                temp=j;
                sum=0;
                while(temp>0)                //  432 === 435   99===103
                {
                    sum=sum + (temp%10);
                    temp=temp/10;
                }
                if(sum%4==0)
                {
                   cout<<"\n: "<<j;
                   break;
                }
            }
        }
    }

   return 0;
}
