// function max of 4 numbers //
#include"iostream"

using namespace std;

int maxnumber(int w, int x, int y, int z)
{
    int max;
    max = w;
    if(max < x) max= x;
    if(max < y) max= y;
    if(max < z) max= z;
    return max;
}


int main()
{
    int n,m,o,p;
    cout<<"\n Enter number: ";
    cin>>n;
    cin>>m;
    cin>>o;
    cin>>p;

    cout<<"\nMAX number is : "<<maxnumber(m,n,o,p);

   return 0;
}
