// reverse number with constraint //
#include"iostream"
#include<limits.h>
using namespace std;

int main()
{
    int n,i,rev_num=0,j;
    cout<<"\n Enter number: ";
    cin>>n;
    while (n>0)
    {
        j= n%10;
        if(rev_num *10 < rev_num)  // if(INT_MAX/10 < rev_num || INT_MIN/10 > rev_num)
        {                           //          use INT_MAX we need limit.h library
           cout<<"Number is too big";
           return 0;
        }
        rev_num = rev_num * 10 + j;
        n/=10;
    }
    cout<<"\n Reverse number is : "<<rev_num;
   return 0;
}
