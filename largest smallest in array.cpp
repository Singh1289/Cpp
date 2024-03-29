// Find largest and smallest array element. //

#include<iostream>
using namespace std;

int main()
{
    int arr[10]={10,23,42,4,12,34,56,90,72,22};
    int large, small;
    large= arr[0];
    small= arr[0];
    for(int i=1;i<10;i++)
    {
        if(large>arr[i]) large=arr[i];
        if(small<arr[i]) small=arr[i];
    }
    cout<<"\n Largest no is : "<<large;
    cout<<"\n Smallest no is : "<<small;

    return 0;
}
