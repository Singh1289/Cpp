/*  #18. Program to input and display a matrix.
    #19. Program to add of two matrices.
    #20. Program to multiply two matrices.
    #22. Program to print each row of a matrix in reverse order
    #23. Program to transpose 2-D array.
    #24. Program to print the values and address of elements of a 2-D array.
    #25. Program to print sum of diagonal elements.
    matrix of 3*3
*/

#include<iostream>
using namespace std;

void input(int (*p)[3],int (*q)[3]);
void display(int (*p)[3]);
void add_matrix(int (*p)[3],int (*q)[3]);
void each_row_reverse(int (*p)[3]);
void multiply(int (*p)[3],int (*q)[3]);
void transpose(int (*p)[3]);
void print_address(int (*p)[3]);
int add_diagonals(int (*p)[3]);
int add_diagonals1(int (*p)[3]);
void add_diagonals2(int (*p)[3]);

int main()
{
    int x[3][3];
    int y[3][3];
    int ch, pos, sum;

    do{
        cout<<"\n1. Input elements";
        cout<<"\n2. Display matrix";
        cout<<"\n3. add of two matrices";
        cout<<"\n4. multiply two matrices";
        cout<<"\n5. each row of a matrix in reverse order";
        cout<<"\n6. transpose 2-D array";
        cout<<"\n7. print the values and address";
        cout<<"\n8. sum of diagonal elements";
        cout<<"\n9. sum of 2nd diagonal elements";
        cout<<"\n10. Exit";

        cout<<"\n Enter choice(1..9) ";
        cin>>ch;
        switch(ch)
        {
            case 1: input(x,y); break;
            case 2: display(x); display(y); break;
            case 3: add_matrix(x,y); break;
            case 4: multiply(x,y); break;
            case 5: each_row_reverse(x); break;
            case 6: transpose(x);transpose(y); break;
            case 7: print_address(x);print_address(y); break;
            case 8: add_diagonals2(x); break;
                    //sum=add_diagonals1(x);
                    //cout<<"\n Sum of diagonals is : "<<sum<<"\n";
            case 9: sum=add_diagonals1(x);
                    cout<<"\n Sum of diagonals is : "<<sum<<"\n";
                    break;
            case 10: break;
            default: cout<<"\n enter valid response";
        }
      }while(ch!=10);

   return 0;
}

void input(int (*p)[3],int (*q)[3])
{
   int i,j;
   cout<<"\nInput in first :\n";
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
        {
           cout<<"\nvalues : ";
           cin>>p[i][j];
        }
   }
   cout<<"\n\nInput in second :\n";
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
        {
          cout<<"\nvalues : ";
          cin>>q[i][j];
        }
   }
}

void display(int (*p)[3])
{
   int i,j;
   cout<<"\n";
   for(i=0;i<3;i++)
   {
       cout<<"\n";
       for(j=0;j<3;j++)
        cout<<" "<<p[i][j];
   }
   cout<<"\n";
}

void add_matrix(int (*p)[3],int (*q)[3])
{
    int i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
        {
            p[i][j]=(p[i][j])+(q[i][j]);
        }
   }
   display(p);
}

void multiply(int (*p)[3],int (*q)[3])
{

}

void each_row_reverse(int (*p)[3])
{
  int i,j=0,temp;
  for(i=0;i<3;i++)
  {
      temp=p[i][j];
      p[i][j]=p[i][j+2];
      p[i][j+2]=temp;

  }
  display(p);
}

void transpose(int (*p)[3])
{
   int i=0,j,temp;
  for(j=0;j<3;j++)
  {
      temp=p[i][j];
      p[i][j]=p[j][i];
      p[j][i]=temp;

  }
  i++;
  for(j=1;j<3;j++)
  {
      temp=p[i][j];
      p[i][j]=p[j][i];
      p[j][i]=temp;

  }
  display(p);
}

void print_address(int (*p)[3])
{
  int i,j;
   cout<<"\n";
   for(i=0;i<3;i++)
   {
       cout<<"\n";
       for(j=0;j<3;j++)
        cout<<" "<<&(p[i][j]);
   }
   cout<<"\n";
}


int add_diagonals(int (*p)[3])
{
   int i,j,sum=0;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
        {
            if(i==j) sum=sum+p[i][j];
        }
   }
   return sum;
}

int add_diagonals1(int (*p)[3])
{
   int i,j,sum=0;
   display(p);
   cout<<"\n";
   for(i=0,j=2;i<3;j--,i++)
   {

        sum=sum+ p[i][j] ;  // *((p+i*3)+j)

   }
   return sum;
}

void add_diagonals2(int (*p)[3])
{
   int *ptr=(int*)p;
   cout<<" "<<*ptr;

   ptr=ptr+3;
   cout<<" "<<*ptr;
   ptr=ptr+3;
   cout<<" "<<*ptr;



}

