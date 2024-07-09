#include<iostream>
using namespace std;
class boxVolume
{
    float length;
    float width;
    float height;

    public:
    boxVolume():length(1),width(1),height(1)
    {
    }
    void acceptData() 
    {
        cout << "Enter length : ";
        cin >>length;
        cout << "Enetr width : ";
        cin >> width;
        cout << "Enter height : ";
        cin >> height;
    }
    void displayVolume(){
        cout << "\nvolume of box is : " << length * width * height << " m^3\n" << endl;
    }
};
int main()
{
    boxVolume b1;
    int choice;
    while(1){
        cout << "1.Enter details: \n2.Calculate volume : \n3.Exit";
    cout << "\nEnter your choice : ";
    cin >> choice;
    switch(choice){
        case 1:
        b1.acceptData();
        break;
        case 2:
        b1.displayVolume();
        break;
        case 3:
            return 0;
            default:
                cout << "Invalid choice!!\n";
            }
    }
    cout << "thank you..";
}