// Find sum and average of array element. //

#include<iostream>
using namespace std;

int main()
{
    int arr[10]={23,2,12,56,78,9,78,54,41,21};
    int sum=0;
    float avg;

    for(int i=0;i<10;i++)
    {
        sum= sum+ arr[i];
    }
    avg= sum/10.0;
    cout<<"\n Sum of array is : "<<sum;
    cout<<"\n Avg of array is : "<<avg;
    return 0;
}
