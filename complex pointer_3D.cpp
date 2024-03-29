/* complex pointer of 3D array */

#include<iostream>
using namespace std;

void display_3d_arr(int(*p)[2][2]);
void display(int *p);
void display1(int *p);

int main()
{
    int arr[2][2][2]= {{{1,2},{3,4}},{{5,6},{7,8}}};
    display_3d_arr(arr);
    //display(arr);  // not work that was void pointer
    cout<<"\n\n";
    display((int*)arr);  // work by force by type cast as integer pointer
    cout<<"\n\n";
    display1((int*)arr);
    return 0;
}

void display_3d_arr(int(*p)[2][2]) // (int p[2][2][2])  (int p[][2][2]) all will work
{
    int i,j,k;
    for(i=0; i<2; i++)
    {
        cout<<"\n";
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
              cout<<"  "<<p[i][j][k];
        }
    }
}

void display(int *p)
{
    int i;
    for(i=0;i<8;i++)
        cout<<" "<<p[i];
}

void display1(int *p)
{
    int i,j,k;
    for(i=0; i<2; i++)
    {
        cout<<"\n";
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
               cout<<"  "<< *(((p+i*2*2)+j*2)+k); // Dereferencing-> value at
        }
    }                   //     jump
}
