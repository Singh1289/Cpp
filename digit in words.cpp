// Digits in words //
/*
#include"iostream"
using namespace std;

int main()
{
    int a,temp,c=0;
    char x[10][6]={".","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char y[10][10]={".","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    char z[10][9]={".","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    while(true)
    {
        cout<<"\n Enter a number : ";
        cin>>a;
        if((a>=1)&&(a<=10000000)) break;
    }
    temp=a;
    while(temp>0)
    {
        c=(c*10)+(temp%10);
        temp=temp/10;
    }
    cout<<"\n";                                // 63,54,321 => 12,34,536
    if (a>1000000) {cout<<z[c%10]<<" "; c=c/10;}                // 123453 6
    if (a>100000)  {cout<<x[c%10]<<" "<<"Lakhs"<<" "; c=c/10;}       // 12345 3
    if (a>10000)   {cout<<z[c%10]<<" "; c=c/10;}                // 1234 5
    if (a>1000)    {cout<<x[c%10]<<" "<<"Thousands"<<" "; c=c/10;}   // 123 4
    if (a>100)     {cout<<x[c%10]<<" "<<"Hundred"<<" "; c=c/10;}  // 12 3
    if (a>10)
    {   //
       if((c<20)&&(c>10))
       {
           cout<<y[c-10];
       }
       else
       {
          cout<<z[c%10]<<" ";
          c=c/10;
          cout<<x[c];
       }
    }
    cout<<"\n";
   return 0;
}


// Digits in words //

#include"iostream"
using namespace std;

int main()
{
    int a,temp,c=0;
    char x[10][6]={".","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char y[10][10]={" ","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    char z[10][9]={" ","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    while(true)
    {
        cout<<"\n Enter a number : ";
        cin>>a;
        if((a>=1)&&(a<=10000000)) break;
    }
    temp=a;
    while(temp>0)
    {
        c=(c*10)+(temp%10);
        temp=temp/10;
    }                       // 1321025  1010025
    cout<<"\n";
    if (a>1000000)
        {
          if(c%10 == 1)
          {
            if(c%100==1)
            {
               cout<<z[c%100]<<" "<<"Lakhs"<<" ";
                c=c/100;
                a=a%100000;
            }else{
                c=c/10;
                cout<<y[c%10]<<" "<<"Lakhs"<<" ";
                c=c/10;
                a=a%100000;
            }
          }else
          {cout<<z[c%10]<<" "; c=c/10;a=a%1000000;}
        }



    if (a>100000)  {cout<<x[c%10]<<" "<<"Lakhs"<<" "; c=c/10;a=a%100000;}



    if (a>10000) { if(c%10 == 1)
                    {
                        if(c%100==1)
                            {
                                cout<<z[c%100]<<" "<<"Thousands"<<" ";
                                c=c/100;
                                a=a%1000;
                            }else{
                                c=c/10;
                                cout<<y[c%10]<<" "<<"Thousands"<<" ";
                                c=c/10;
                                a=a%1000;
                            }
                    }else
                        {cout<<z[c%10]<<" "; c=c/10;a=a%10000;}
                 }
    if (a>1000)    {cout<<x[c%10]<<" "<<"Thousands"<<" "; c=c/10;a=a%1000;}


    if (a>100)
    {
        if((c%10)==0)
        {
          c=c/10;
        }
        else
        {
          cout<<x[c%10]<<" "<<"Hundred"<<" ";
          c=c/10;
          a=a%100;
        }
    }

    if (a>10)
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


       if((c<20)&&(c>10))
       {
           cout<<y[c-10];
       }
       else
       {
          cout<<z[c%10]<<" ";
          c=c/10;
          cout<<x[c];
       }
    }
    if(a>=1)
    {
        cout<<x[a]<<" ";
    }
    cout<<"\n";
   return 0;
}
*/

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
        if((a>=0)&&(a<=10000000)) break;
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
    if(a==0){cout<<"Zero";}
    cout<<"\n";
   return 0;
}

