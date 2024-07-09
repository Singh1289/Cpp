/* complex pointer of 2D array */

#include<iostream>
using namespace std;

void display_2d_arr(int(*p)[3]);
void display(int *p);
void display1(int *p);

int main()
{
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    display_2d_arr(arr);
    //display(arr);  // not work that was void pointer
    cout<<"\n\n";
    display((int*)arr);  // work by force by type cast as integer pointer
    cout<<"\n\n";
    display1((int*)arr);
    return 0;
}

void display_2d_arr(int(*p)[3]) // (int p[3][3])  (int p[][3]) all will work
{
    int i,j;
    for(i=0; i<3; i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
            cout<<"  "<<p[i][j];
    }
}

void display(int *p)
{
    int i;
    for(i=0;i<9;i++)
        cout<<" "<<p[i];
}

void display1(int *p)
{
    int i,j;
    for(i=0; i<3; i++)
    {
        cout<<"\n";
        for(j=0;j<3;j++)
            cout<<"  "<< *((p+i*3)+j); // Dereferencing-> value at
    }                   //     jump
}
