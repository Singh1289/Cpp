// different types of pointer //

#include<iostream>
using namespace std;

int main()
{
    int a =10;
    char ch ='A';
    int *aa;
    void *ptr;    //void pointer it can store only address of any type...
    ptr=&a;

    cout<<"\n void ptr into int : "<<(*(int*)ptr); // derefer to a value  if ((int*)ptr) = print address of a.
    ptr=&ch;
    cout<<"\n void ptr into int : "<<(*(char*)ptr); // we can rewrite it.

    int *ptr1;  // wild pointer because we did not initialize it with any value.

    ptr1= NULL; // null pointer now it stored 0

    ptr1= new int*[3];

    ptr1[1] = &a;
    cout<<"\n ptr1 into int : "<<(*ptr1);


    free(ptr1);

    cout<<"\n ptr1: "<< *ptr1;

    return 0;
}
