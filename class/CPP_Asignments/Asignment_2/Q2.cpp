#include<iostream>
using namespace std;
class tollbooth
{
    unsigned int no_of_cars;
    unsigned int no_of_paying_cars;
    unsigned int no_of_nonpaying_cars;
    double collected_money;

public:
    tollbooth():no_of_cars(0),collected_money(0),no_of_nonpaying_cars(0),no_of_paying_cars(0)
    {
    }
    void payingCar(){
        no_of_paying_cars++;
        no_of_cars++;
        collected_money=collected_money + 0.50;
    }
    void nopayCar(){
        no_of_cars++;
        no_of_nonpaying_cars++;
    }
    void displayData() 
    {
        cout << "\n1.total no of cars are : " << no_of_cars << "\n2.total paying cars : " << no_of_paying_cars << "\n3.no of non paying : " << no_of_nonpaying_cars<<endl;
        cout << "4.cash collected : " << collected_money << " cents\n"<<endl;
    }
};
int main()
{
    int choice;
    tollbooth t1;
    while(1){
    cout << "Welcome to tollbooth : \n";
    cout << "0.enter 0 for paying car \n1.Enter 1 for nonpaying car\n2.display data \n3.Exit";
    cout << "\nEnter your choice : ";
    cin >> choice;

    switch(choice){
        case 0:
            t1.payingCar();
            break;
            case 1:
                t1.nopayCar();
                case 2:
                    t1.displayData();
                    break;
                case 3:
                    return 0;

                    }
    }
}