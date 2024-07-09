#include <iostream>
using namespace std;
class product // Base
{
    int id;
    string title;
    int price;
public:
    virtual void acceptData() {
        cout << "Enter id - ";
        cin >> id; 
        cout << "Enter title - ";
        cin >> title;
        cout << "Enter price - ";
        cin >> price;
    }
    int getPrice(){
        return price;
    }
     virtual void displaydata() {
        cout << "\nid is - "<<id<<endl;
        cout << "Enter title - " << title << endl;
        cout << "Enter price - "<<price<<endl;
      
    }
};

class book : public product // Derived
{
private:
    string author;
public:
    void acceptData()
    {
        product::acceptData();
        cout << "Enter author - ";
        cin >> author;
    }
    void displaydata()
    {
        product::displaydata();
        cout << "author is - "<<author<<endl;
    }
};

class tape : public product // Derived
{
private:
    string artist;
public:
    void acceptData()
    {
        product::acceptData();
        cout << "Enter artist - ";
        cin >> artist;
    }
    void displaydata()
    {
        product::displaydata();
        cout << "artist is - "<<artist<<endl;
    }
};
void calcbill(product *p[3]){int total_bill = 0;
                        int tape_total = 0;
                        int books_total = 0;
                        for(int i=0;i<3;i++){
                        if(typeid(*p[i])== typeid(book))
                        books_total= books_total +0.90* p[i]->getPrice();
                        if(typeid(*p[i])==typeid(tape))
                        tape_total = tape_total + 0.95*p[i]->getPrice();
                        total_bill = books_total + tape_total;
                        
                        }
                        cout << "\ntotal amount to pay for tape : " << tape_total<<endl;
                        cout << "\ntotal amount to pay for books : " << books_total<<endl;
                        cout << "\ntotal amount to pay : " << total_bill<<endl;

}
int main()
{
    int choice;
    int a = 0;

    int count = 0;
    product *p[3];
    do
    {
        cout << "\n0. EXIT" << endl;
        cout << "1. purchase book" << endl;
        cout << "2. purchase tape" << endl;
        cout << "3. display book data-" << endl;
        cout << "4. display tape data-" << endl;
        cout << "5. display bill-" << endl;
        cout << "Enter choice - ";
        cin >> choice;
        switch(choice){
            case 0:
                cout << "thank you";
                break;
            case 1:
                if(count<3)
                {
                    for (int i=0; i < 3;i++){
                        p[count] = new book();
                        p[count]->acceptData();
                        count++;
                        break;
                    }}
                     else
                        cout << "\narray is full\n" << endl;
                     break;

                case 2:
                    if(count<3){
                    for (int i=0; i < 3;i++){
                        p[count] = new tape();
                        p[count]->acceptData();
                        count++;
                        break;
                    }
                    }
                    else
                        cout << "\narray is full\n" << endl;
                    break;
                case 3:
                   // int a =0;
                    for (int i = 0; i < 3; i++)   
                    {   
                        if (typeid(*p[i]) == typeid(book))
                           { p[i]->displaydata();
                               a++;
                           }
                    }
                    if(a==0)
                        cout << "no book buy!!" << endl;

                        break;
                    case 4:
                        for (int i = 0; i < 3;i++){
                            if(typeid(*p[i])==typeid(tape))
                            p[i]->displaydata();
                        }
                        break;
                        case 5:
                            calcbill(p);
                            break;
                        }
                } while (choice != 0);

                for (int i = 0; i < count;i++){
                    delete p[i];
                    p[i] = NULL;
                }
    }

