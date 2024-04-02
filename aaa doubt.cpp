// write a class of int array and make function to find key, count duplicates, find max min avg sum, print duplicate.

#include<iostream>
using namespace std;

class myArray{
    int size;
    int *ptr;
    public:
    myArray( ) {
        size = 5;
        ptr = new int[size];
        for(int i=0,a;i<size ; i++)
         {
             //cout<<"\n value : ";
             //cin>>a;
             ptr[i] = 0;
         }
         cout<<"\n address : "<<ptr;
    }

    void display(){
        cout<<"\n ADD : "<< ptr;
        for(int i=0;i<size;i++)
           {
             cout<<"\n "<<i<<" : "<<ptr[i];
           }
    }
  /*
    myArray operator = (myArray &m ) {
        delete [ ] ptr;
        size = m.size;
        ptr = new int[size];
        for(int i=0 ;i<size ; i++)
           }
        ptr[i] = m.ptr[i];
        cout<<"\n Copy constructor is called..!!";
    }*/

    ~myArray( ) {
        delete []ptr;
        cout<<"\n Destructor is called..!!";
    }

    void findkey( int a)
    {
        for(int i=0; i<size;i++)
        {
            if(ptr[i]==a){
                cout<<"\n : "<<i<<" : "<<ptr[i];
                break;
            }
        }
    }

    void countkey( int a)
    {
        int c=0;
        for(int i=0; i<size;i++)
        {
            if(ptr[i]==a)
                c+=1;
        }
        cout<<"\n count is : "<<c;
    }

    myArray sumofarray()
    {
        int c=0;
        for(int i=0; i<size;i++)
        {
                c+=ptr[i];
        }
        return c;
    }

    myArray avgofarray()
    {
        float c=0;
        for(int i=0; i<size;i++)
        {
                c+=ptr[i];
        }
        return c/size;
    }

    myArray maxofarray()
    {
        int c=0;
        for(int i=0; i<size;i++)
        {
                c+=ptr[i];
        }
        return c;
    }

    myArray minofarray()
    {
        int c=0;
        for(int i=0; i<size;i++)
        {
                c+=ptr[i];
        }
        return c;
    }

};

int main()
{
    myArray a1;

    int *a= new int;
    {

    myArray a2(a1);

    }
    myArray a3(a1);
    myArray a4,a5(a3);
                       //not crash with default constructor
    a1.display();
    a3.display();
    a5.display();
    //a2.display();

    //for(int i=0;i<5;i++)
           {
     //        cout<<" "<<i<<" : "<<*(a1.ptr[i])<<"\n";
           }
    //cout << "\n value :";

    return 0;
}
