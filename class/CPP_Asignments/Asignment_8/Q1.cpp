#include<iostream>
using namespace std;
void fact(int number){
    int fact=1;
    if(number<0)
        throw 1;

     for(int i=1;i<=number;i++){    
      fact=fact*i;  
      
}
cout << "factorail is : " << fact<<endl;
}
int main(){

    int i,choice;
    do
    {
        
    
        cout << "enter any num : ";
        cin >> i;
        try
        {
            fact(i);
        }
        catch (...)
        {
            cout << "can't calc facto of negative number" << endl;
        }
        cout << "enter 0 if want to exit!! or hit any other num : " << endl;
        cin >> choice;
    } while (choice != 0);

    return 0;
}