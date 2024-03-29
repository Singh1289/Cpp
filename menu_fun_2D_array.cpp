#define SIZE 10
#include<iostream>
using namespace std;


void accept_array_elements(int *);
void display_array(int *);
void left_shift(int *);
void right_shift(int *);
void left_rotate(int *);
void right_rotate(int *);
void insert_arr(int *, int, int);
int delete_by_pos(int *, int);
int search_ele(int *, int);
void print_reverse(int *);

int main()
{
    int ch, pos, key;
    int arr[SIZE];
    do{
        cout<<"\n1. Read Array elements";
        cout<<"\n2. Display array elements";
        cout<<"\n3. Left shift";
        cout<<"\n4. Rigth shift";
        cout<<"\n5. Left rotate";
        cout<<"\n6. Right rotate";
        cout<<"\n7. Insert array element by position";
        cout<<"\n8. Delete array element by position";
        cout<<"\n9. Search a key into array";
        cout<<"\n 10. Print array in reverse order";
        cout<<"\n 11. Exit";
        cout<<"\n Enter choice(1..11) ";
        cin>>ch;
        switch(ch)
        {
            case 1: accept_array_elements(arr); break;
            case 2: display_array(arr); break;
            case 3: left_shift(arr); break;
            case 4: right_shift(arr); break;
            case 5: left_rotate(arr); break;
            case 6: right_rotate(arr); break;
            case 7: cout<<"\n Enter position :";
                    cin>>pos;
                    if(pos>SIZE) {cout<<"\n Invalid position" ; break;}
                    cout<<"\n Enter value to insert :";
                    cin>>key;
                    insert_arr(arr,pos,key);
                    break;
            case 8: cout<<"\n Enter position to delete ";
                    cin>>pos;
                    if(!(pos>=1)&&(pos<=10)) break;
                    key = delete_by_pos(arr, pos);
                    cout<<"\n Deleted Value = "<<key;
                    break;
            case 9: cout<<"\n Enter value to search :";
                    cin>>key;
                    pos = search_ele(arr, key);
                    if(pos!=-99)
                         cout<<"\n Found at "<<pos<<" position ";
                    else
                         cout<<"\n Not found";
                    break;
            case 10: print_reverse(arr);
                     break;
            case 11: break;
            default: cout<<"\n Invalid choice..";
                     break;
        }
    }while(ch!=11);
    return 0;
}



void accept_array_elements(int *a)
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        cout<<"\n Enter a number :";
        cin>>a[i];
    }
}


void display_array(int *arr)
{
    int i;
    cout<<"\n\n Array elements : ";
    for(i = 0; i < SIZE ; i++)
        cout<<"  "<<arr[i];

    cout<<"\n\n";
}


void left_shift(int *a)
{
    int i;
    for(i=0 ; i<SIZE-1 ; i++)
        a[i] = a[i+1];

    a[i] = 0;
}

void right_shift(int *a)
{
    int i;
    for(i = SIZE-1 ; i>0 ; i--)
        a[i] = a[i-1];

    a[i] = 0;
}

void left_rotate(int *arr)
{
    int temp, i;
    temp = arr[0];
    for(i=0 ; i<SIZE-1 ; i++)
        arr[i] = arr[i+1];

    arr[i] = temp;
}


void right_rotate(int *arr)
{
    int temp, i ;
    temp = arr[SIZE-1];
    for(i=SIZE-1 ; i>0 ;i--)
        arr[i] = arr[i-1];

    arr[i] = temp;
}

void insert_arr(int *arr, int pos, int key)  //pos = 11
{
    int i;
    for(i = SIZE-1 ; i>=pos ; i--)
        arr[i] = arr[i-1];

    arr[i] = key;
}

int delete_by_pos(int *arr, int pos)
{
   int i;
   int k = arr[pos-1];
   for(i=pos-1 ; i<SIZE-1 ; i++)
        arr[i] = arr[i+1];

   arr[i] = 0;
   return k;
}

int search_ele(int *a, int key)
{
    int i,pos = -99;
    for(i = 0 ; i<SIZE ; i++)
    {
        if(a[i] == key)
        {
            pos = i+1;
            break;
        }
    }
    return pos;
}

void print_reverse(int *arr)
{
    int i;
    cout<<"\n\n Reverse Array : ";
    for(i = SIZE-1 ; i>=0 ; i--)
        cout<<"   "<<arr[i];

}


