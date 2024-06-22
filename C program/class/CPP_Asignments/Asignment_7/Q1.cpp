#include <iostream>
using namespace std;

class Employee
{
private:
    int empid;
    double salary;

public:
    Employee()
    {
        empid = 0;
        salary = 0;
    }
    Employee(int empid, double salary)
    {
        this->empid = empid;
        this->salary = salary;
    }
    void setEmpId(int empid)
    {
        this->empid = empid;
    }
    virtual void accept()
    {
        cout << "Enter empid - ";
        cin >> empid;
        cout << "Enter salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Empid - " << empid << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee(){

    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter bonus - ";
        cin >> bonus;
    }

    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        bonus = 0;
    }
    Manager(int empid, double salary, double bonus) : Employee(empid, salary)
    {
        this->bonus = bonus;
        // this->setEmpId(empid); // way 2
    }

    void accept()
    {
        Employee::accept(); // id,sal
        acceptManager();    // bonus
    }
    void display()
    {
        Employee::display();
        this->displayManager();
    }
};

class SalesMan : virtual public Employee
{
private:
    double comm;

protected:
    void acceptSalesman()
    {
        cout << "Enter Commission - ";
        cin >> comm;
    }

    void displaySalesman()
    {
        cout << "Commission - " << comm << endl;
    }

public:
    SalesMan()
    {
        comm = 0;
    }
    SalesMan(int empid, double salary, double comm) : Employee(empid, salary)
    {
        this->comm = comm;
    }

    void accept()
    {
        Employee::accept(); // id , sal
        acceptSalesman();   // comm
    }
    void display()
    {
        Employee::display();
        this->displaySalesman();
    }
   
};

class SalesManager : public Manager, public SalesMan
{
public:
    SalesManager()
    {
    }

    SalesManager(int empid, double salary, double bonus, double comm)
    {
        this->setEmpId(empid);
        // todo
    }
    void accept()
    {
        Employee::accept(); // id,sal
        acceptManager();    // bonus
        acceptSalesman();   // comm
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{

    int count;
    int choice;
    int size;
    int no_man1=0;
    int no_sal_manager=0;
    int no_sal_man=0;
    cout << "enter size : ";
    cin >> size;
    Employee *ptr[size];

    
    while(1){
        cout << "0.exit\n1.accept sales manager\n2.accept saleman\n3.accept manager\n4.display sales manager\n5.display sales man\n6.display manager\n7.display all employee\nenter your choice : ";
        cin >> choice;
    switch (choice)
    {
    case 0:
        cout << "Thank you!!" << endl;
        for (int i = 0; i <= count; i++)
        {
            delete ptr[i];
            ptr[i]=NULL;
        }
        return 0;
        break;
    case 1:
        if(count<size){
        ptr[count] = new SalesManager();
        ptr[count]->accept();
        count++;
        }
        else
            cout << "array is full !!" << endl;
        break;
    case 2: 
        if(count<size){   
        ptr[count] = new SalesMan();
        ptr[count]->accept();
        count++;}
        else
            cout << "array is full !!" << endl;
        break;
    case 3:
        if(count<size){
        ptr[count] = new Manager();
        ptr[count]->accept();
        count++;}
        else
            cout << "array is full !!" << endl;
        break;
    case 4:
        for (int i = 0; i < count; i++)
        {
            if(typeid(*ptr[i])==typeid(SalesManager))
            {ptr[i]->display();
            no_sal_manager++;}
        }
        cout << "total no of sales manager are : " << no_sal_manager<<endl;
            break;
    case 5:
        
        for (int i = 0; i < count; i++)
            {
            if(typeid(*ptr[i])==typeid(SalesMan))
            {ptr[i]->display();
            no_sal_man++;}
            }
            cout << "total no of sales man are : " << no_sal_man<<endl;
        break;
        case 6:
            
            for (int i = 0; i < count; i++)
            {
            if(typeid(*ptr[i])==typeid(Manager))
            {ptr[i]->display();
            no_man1++;}
            }
            cout << "total no of manager are : " << no_man1<<endl;
            break;
        case 7:
        for (int i = 0; i < count;i++)
            {
                ptr[i]->display();
            }
            cout << "total no of emp are : " << count<<endl;
            break;
            default:
                cout << "invalid choice !!" << endl;
                break;
    }
    
        }
        
}
