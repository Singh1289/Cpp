#include<iostream>
using namespace std;

void accept_array(int **);
void display_2D_array(int **);

int main()
{
    int **mat, i, j;
    mat = new int*[3];

    cout<<"\n mat = "<<mat<<"\n\n";

    for(i=0;i<3;i++)
        mat[i] = new int[3];


    for(i=0;i<3;i++)
        cout<<"\nmat["<<i<<"] = "<<mat[i];


  //  accept_array(mat);
  //  display_2D_array(mat);

    for(i=0;i<3;i++)
        delete []mat[i];

    delete []mat;
    return 0;
}


void accept_array(int **m)
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter a number :";
            cin>>m[i][j];
        }
    }
}

void display_2D_array(int **a)  //int *a[]
{
    int i,j;
    for(i=0;i<3;i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
            cout<<"   "<<a[i][j];
    }
}
