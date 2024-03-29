/* WAP For each integer n in the inclusive interval [a, b] to check a number 1<=n<=9 if yes then print number as one for 1, two for 2, and so on
greater than 9 then print greater than 9 */

#include"iostream"
using namespace std;

int main()
{
    int a,b;
    char numbers[10][6]={".","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"\n Enter a range : ";
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    {
      if(i<10)
       {
           cout<<"\n: "<<numbers[i]<<" :";
       }
       else
       {
           if(i%2==0)
            cout<<"\n: EVEN :";
            else
            cout<<"\n: ODD :";
       }
    }

   return 0;
}
