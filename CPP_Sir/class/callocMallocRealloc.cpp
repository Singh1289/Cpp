#include<iostream>
using namespace std;

int main()
{
    int *ptr;
    int i;
    ptr =(int *)malloc(10*sizeof(int));

    for(i=0;i<=9;i++)
        *(ptr+i) = i;

    cout<<"\n ptr = "<<ptr;

    for(i=0;i<10;i++)
    {
        cout<<"\n"<<*(ptr+i);

    }

   // int *reptr;

   ptr = (int *)realloc(ptr,sizeof(int)*20);
    cout<<"\n reptr = "<<reptr;

    for(i=0;i<20;i++)
        cout<<"  "<<reptr[i];

    free(ptr);

    ptr = NULL;

    if(ptr==NULL)
        return;
    else{




    }
    //free(reptr);
    return 0;

}
