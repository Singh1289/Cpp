#include<iostream>
#define SIZE 5
#define TRUE 1
#define FALSE 0
using namespace std;

typedef enum 
{EXIT,PUSHELEMENT,POPELEMENT,PEEKELEMENT} MENU; 

typedef int BOOL;
typedef int ELEMENT;

ELEMENT eles[SIZE]; //stack of elements //int eles[5]
int top=-1; //initial state   //to retain index of top most element


int menu_choice()
{
    int mchoice;
    printf("0. Exit \n");
    printf("1. Add Element on Stack \n");
    printf("2. Delete Element from Stack \n");
    cout<<("3. Retrieve Element from Stack \n");
    cin>>mchoice;
    return mchoice;
}

BOOL isEmpty()
{
    return top == -1 ? TRUE : FALSE ;
}

ELEMENT peek_element()
{
    return eles[top];
}//retrieve element from stack

void pop_element()
{
    //assume top most element is deleted
    top--;  //decide which element will be next top element
} //remove element from stack
BOOL isFull()
{
    return top ==SIZE-1 ? TRUE : FALSE ;
} //check state of stack for its fullness


void push_element(ELEMENT *p)
{
    top++;//manage top area 
    eles[top] = *p; //add element on stack
}//add element on stack

void accept_element(ELEMENT *p)
{
    printf("Specify element to element to push on stack \n");
    scanf("%d",p);
}
void display_element(const ELEMENT *p)
{
    printf("Element=%d\n",*p);
}
int main()
{
    int mchoice;
    ELEMENT ele;
    while ( (mchoice = menu_choice())!=EXIT)
    {
        switch(mchoice)
        {
            case PUSHELEMENT:
                            if(isFull())//1.1 if stack is full 
                            {
                                printf("Stack has reached to overflow state\n");  //show message
                            }   
                            else  //1.2 if stack is not full
                            {   
                                accept_element(&ele); //1.2.1. accept element
                                push_element(&ele); //1.2.2. push element on stack
                            }
                            break;
            case POPELEMENT:
                            if(isEmpty())//if stack is empty
                                printf("Stack is empty now !!!\n");//show message
                            else //if stack is not empty
                            {
                                ele = peek_element();//peek element
                                display_element(&ele); //display element
                                pop_element(); //delete element 
                            }
                            break;
            case PEEKELEMENT:
                            if(isEmpty())//if stack is empty
                                printf("Stack is empty now !!!\n");//show message
                            else //if stack is not empty
                                {
                                    ele = peek_element();//peek element
                                    display_element(&ele); //display element
                                }
                            break;
        }

    }
}