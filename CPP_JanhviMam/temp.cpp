// Digits in words //

#include"iostream"
using namespace std;

int main()
{
    int a;
    char x[10][6]={".","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char y[10][10]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    char z[10][9]={" ","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    while(true)
    {
        cout<<"\n Enter a number : ";
        cin>>a;
        if((a>=1)&&(a<=10000000)) break;
    }

                    // 1321025  1010025  1000
    cout<<"\n";
    if (a>=1000000)
        {
          if(a/1000000 == 1)
          {
               cout<<y[(a/100000)-10]<<" "<<"Lakhs"<<" ";
               a=a%100000;

          }else
          {
              cout<<z[a/1000000]<<" ";
              a=a%1000000;
          }
        }



    if (a>=100000)  {cout<<x[a/100000]<<" "<<"Lakhs"<<" "; a=a%100000;}



    if (a>=10000) {
          if(a/10000 == 1)
          {
               cout<<y[(a/1000)-10]<<" "<<"Thousands"<<" ";
               a=a%1000;

          }else
          {
              cout<<z[a/10000]<<" ";
              a=a%10000;
          }
        }
    if (a>=1000)    {cout<<x[a/1000]<<" "<<"Thousands"<<" "; a=a%1000;}


    if (a>=100)
    {

          cout<<x[a/100]<<" "<<"Hundred"<<" ";
          a=a%100;

    }

    if (a>=10)
    {
        if(a/10==1)
        {
            cout<<y[a%10]<<" ";
            return 0;
        }
        else{
            cout<<z[a/10]<<" ";
            cout<<x[a%10]<<" ";
            return 0;
        }
    }
    if(a>=1)
    {
        cout<<x[a]<<" ";
    }
    cout<<"\n";
   return 0;
}
