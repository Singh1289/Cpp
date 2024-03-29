// Global variable //
#include"iostream"

using namespace std;
//int i=5;  // Global variable
            //int static i= 4   static initialize once
int fun()
{
    int static i= 4;  // i=5 now it will not going to reinitialize through out program
    i++;
    cout<<"\n i= "<<i;
}


int main()
{
    int i;
    for(i=1;i<=5;i++) fun();
   return 0;
}
