#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char p[]="This is a test";
    cout<<sizeof(p)<<" , "<<strlen(p); // 15 , 14
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    int a=0,x;
  //  cout<<"\n a: "<<++a;  //when a=2   ++a =3   a++=2
    x=++a*(--a); // 0 * -1     right to left
    cout<<++a<<" "<<a++<<" "<<x; //  2,0,0
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    int i=5,j=0;
    while(i-- || j++)   //0 0 break
    {
        cout<<i<<", "<<j<<", ";
    }
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    int b; bool c;
    a= 12>100;  // gives 0 or 1 for true and false
    b= 12>=100;
    cout<<a<<" "<<b;
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";


    int m=0;
 //   cout<<"\n m: "<<(m=10/m);   // crash
 //   cout<<"\n 0/0 : "<<(0/0);  // crash
    cout <<"\n 0/3 : "<<(0/3);  // 0 no-crash
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    int z=0;
    while(x++<5)
    {
     //   static z; // complile time error
        z+=2;
        cout<< z<<", ";
    }
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    char s1[]="Abhi", s2[]="Abhi";
    if(s1==s2)                  // not same because it compare only address
        cout<<"\n same";
    else
        cout<<"\n not same";
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    int arr[]={10,20,30,40,50};
    int *ptr= arr;
    cout<<*ptr++<<", "<<*ptr;  // 10 10
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
     int *ptr2 = &ptr[3];
     x= ptr2-ptr;  // 3 three integer gap
     cout<<x;
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    return 0;

}
