// write a class of int array and make function to find key, count duplicates, find max min avg sum, print duplicate.

#include<iostream>
using namespace std;

class myArray{
    int size;
    int *ptr;
    public:
    myArray(float x=2.0 ) {
        size = x;
        ptr = new int[size];
        for(int i=0,a;i<size ; i++)
         {
             cout<<"\n value : ";
             cin>>a;
             ptr[i] = a;
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

    void findkey()
    {
        int a;
        cout<<"\n Enter what to find :";
        cin>>a;
        for(int i=0; i<size;i++)
        {
            if(ptr[i]==a){
                cout<<"\n : "<<i<<" : "<<ptr[i];
                break;
            }
        }
    }

    void countkey()
    {
        int a,c=0;
        cout<<"\n Enter what to find :";
        cin>>a;
        for(int i=0; i<size;i++)
        {
            if(ptr[i]==a)
                c+=1;
        }
        cout<<"\n count is : "<<c;
    }

    int sumofarray()
    {
        int c=0;
        for(int i=0; i<size;i++)
        {
                c+=ptr[i];
        }
        return c;
    }

    float avgofarray()
    {
        float c =0;
        for(int i=0; i<size;i++)
        {
                c= c + ptr[i];
        }
        return c/size;
    }

    int maxofarray()
    {
        int c=ptr[0];
        for(int i=1; i<size;i++)
        {
                if(ptr[i]>c){c= ptr[i];}
        }
        return c;
    }

    int minofarray()
    {
        int c=ptr[0];
        for(int i=1; i<size;i++)
        {
                if(ptr[i]<c){c= ptr[i];}
        }
        return c;
    }

};

int main()
{
    myArray a1(6);

    a1.display();
    float a = a1.sumofarray();

    cout<<"\n SUM is : "<<a;

    a=a1.avgofarray();
    cout<<"\n AVG is : "<<a;

    a=a1.maxofarray();
    cout<<"\n MAX is : "<<a;

    a=a1.minofarray();
    cout<<"\n MIN is : "<<a;

    a1.findkey();
    a1.countkey();

    return 0;
}
