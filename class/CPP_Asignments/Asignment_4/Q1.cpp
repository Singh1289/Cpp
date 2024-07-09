#include<iostream>
using namespace std;
class date{
    int day;
    int month;
    int year;
    public:
        date(){
            day = 0;
            month = 0;
            year = 0;
        }
        void accept(){
            cout << "enter day :\n";
            cin >> day;
            cout << "enter month\n";
            cin >> month;
            cout << "enter year\n";
            cin >> year;
        }
        void displaydate() const
{
    cout << day << "/" << month << "/" << year << endl;
}
};
class person{
    
    date obj;
    protected:
    string name;
    public:
    void dob(){
        cout << "enter dob ";
        obj.accept();
    }
    void dispbirth(){
        obj.displaydate();
    }
};
class employee:public person
{
    int id;
    double sal;
    string dept;
    date d1;
    person p;

public:
    employee(){}
    employee(int id, double sal,string dept){
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }
    void dispemp(){
        cout << "emp id :" << id << "\n"
             << "sal is : " << sal << "\n"
             << "dept : " << dept<<endl;

        cout << "date of joining :";
        d1.displaydate();
cout << "date of birth :";
        p.dispbirth();
    }
void accemp(){
    cout << "enter name : ";
    cin >> name;
    cout << "enter emp id :" << endl;
    cin >> id;
    cout<<"enter emp dept :"<<endl;
    cin >> dept;
    cout<<"enter emp sal :"<<endl;
    cin >> sal;
    cout << "enter joining date ";
    d1.accept();
    p.dob();
}
int getid()const
{
    return this->id;
}
int getsal() const
{
    return this->sal;
}
string getdept()const
{
    return this->dept;
}

void setid(int id)
{
    this->id = id;
}
void setsal(int sal){
    this->sal = sal;
}
void setdept(string dept){
    this->dept = dept;
}
};


int main()
{
    employee e1(1, 1000, "HR");
    int id, sal;
    string dept;
    int choice;
   
    while(true){
         cout << "0.enter emp detail\n1.set id\n2.set sal\n3.set dept\n4.get id\n5.get sal\n6.get dept\n7.accept emp\n8.display emp" << endl;
    cout << "enter your choice\n";
    cin >> choice;
    switch (choice)
    {
        

    case 0:
        e1.accemp();
        break;
    case 1:
        cout << "enter id : " << endl;
        cin >> id;
        e1.setid(id);
        break;
    case 2:
        cout << "enter sal : " << endl;
        cin >> sal;
        e1.setsal(sal);
        break;
    case 3:
        cout << "enter dept : " << endl;
        cin >> dept;
        e1.setdept(dept);
        break;
    case 4:
        cout << "id : " << e1.getid() << endl;
        break;
    case 5:
        cout << "sal : " << e1.getsal() << endl;
        break;
    case 6:
        cout << "dept : " << e1.getdept() << endl;       
         break;
         case 7:
             e1.accemp();
             break;
              case 8:
             e1.dispemp();
             break;
    default:
        
        return 0;
                            }
    }
}