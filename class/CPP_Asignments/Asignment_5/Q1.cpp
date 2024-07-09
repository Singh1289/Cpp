#include <iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
    void acceptdate(){
        cout << "enter day : ";
        cin >> day;
        cout << "enter month : ";
        cin >> month;
        cout << "enter year : ";
        cin >> year;

    }
    void displaydate(){
    
       cout << day << "/" << month << "/" << year << endl;
    }
};
class person{
    
    string adress;
    date dob;

    public:string name;
    void accept(){
        cout << "\n";
        cout << "enter name : ";
        cin >>name;
        cout << "enter adress : ";
        cin >> adress;
        cout << "enter dob : \n";
        dob.acceptdate();
    }
    void displayperson(){
        cout << "\nnext person-->\n";
        cout << "name is : " << name << endl;
        cout << "adress is : " << adress << endl;
        cout << "dob is : " ;
        dob.displaydate();
    }
};
class emp:public person{
    int id;
    double sal;
    date jon;
    public:
    void acceptemp(){
        accept();
        cout << "enter id : ";
        cin >>id;
        cout << "enter sal : ";
        cin >> sal;

        cout << "enter date of joining : \n";
        jon.acceptdate();
    }
    void displayemp(){

        displayperson();
        cout << "id is : " << id << endl;
        cout << "sal is : " << sal << endl;
        cout << "date of joining is : ";
        jon.displaydate();
    }
};
void searchbyname(emp p[],int size){
    string temp;
    int j = 0;
    int count = 1;
    cout << "enter name to search : ";
    cin >> temp;
    for (j; j <size; j++)
    {

        if (p[j].name == temp)
        {

            p[j].displayemp();
        }
        else
        {
            count++;
            if (count ==(size+1))
            {
                cout << "not found!!\n";
            }
        }    }
                j = 0;
                count = 1;
}
int main()
{
    int size,choice;
    cout << "enter no of emp : ";
    cin >> size;
    emp p[size];
    do{
    cout << "0.exit \n1.accept emp \n2.display emp\n3.search emp\nenter choice" << endl;
    cin >> choice;
    switch(choice){
        case 1:
    for (int i = 0; i < (size); i++)
        p[i].acceptemp();
    break;
    case 2:
    for (int i = 0; i < (size); i++)
        p[i].displayemp();
    break;
    case 3:
    searchbyname(p, size);
    break;
    }
    } while (choice != 0);

      return 0;
}