#include <iostream>
#include<string>
#include<vector>
using namespace std;
enum account_type
{
    SAVING,
    CURRENT,
    DMAT
} type;
class account
{
    int id;
    double balance=0;
    account_type type;
    public:
    account(){
        this->balance = 0;
    }
    account (int id,account_type type){
        this->id = id;
        this->type = type;
    }
    void accept(){
        cout << "enter id : ";
        cin >> id;
        string data;
        cout << "enter account type : ";
        cin>>data;
        int a;
    if(data=="saving")
        a = 0;
    else if (data == "current")
        a = 1;  
                switch (a)
                {
                case SAVING:
                    this->type = SAVING;
                    break;
                case CURRENT:
                    this->type = CURRENT;
                    break;
                case DMAT:
                    this->type = DMAT;
                    break;
                }
    }
    void set_id(){
        int id;
        cout << "enter id : ";
        cin >> id;
        this->id= id;
    }
    void set_type(){
       int a;
    string data;
    cin >> data;
    if(data=="saving")
        a = 0;
    else if (data == "current")
        a = 1;

    cout << a;
                
                switch (a)
                {
                case SAVING:
                    this->type = SAVING;
                    break;
                case CURRENT:
                    this->type = CURRENT;
                    cout << "hi";
                    break;
                case DMAT:
                    this->type = DMAT;
                    break;
                }
    }
    int get_id(){
        return id;
    }
    account_type get_type()
    {
        return type;
    }
    double get_balance(){
        return balance;
    }
    void depoit(){
        double deposit;
        cout << "enter amount to deposit : ";
        cin >> deposit;
        this->balance = balance + deposit;
    }
    void withdraw(){
        double withdraw;
        // cout << "enter amount to withdraw : ";
        // cin >> withdraw;
        // try{
        //     if(balance<=0||balance<withdraw)
        //         throw 1; 
        //         else 
                this->balance = balance - withdraw;
        //}
        // catch(int err){
        //     cout << "not enough balance "<<endl;
        // }
       
    }
    void display(){
        cout << "\n";
        cout << "id is : " << id << endl;
        if (this->type == 0)
        {cout << "account type : " << "saving"<<endl;}
        else if(this->type==1)
        {cout << "account type : " << "current"<<endl;}
        else if(this->type==2)
        cout << "account type : " << "d-mat"<<endl;
        cout << "balance is : " << balance<<endl;
        cout << "\n";
    }
};
class insufficient:public account{
    double withdraw;
    public:
        void withdraw1()
        {
            cout << "enter amount to withdraw : ";
            cin >> withdraw;
            try
            {
                if (get_balance() <= 0 || get_balance() < withdraw)
                    throw 1; 
                else 
                account::withdraw();
        }
        catch(int err){
            cout << "not enough balance "<<endl;
        }
        }
};

int main()
{
    vector<account*>list;
    account t[5];
    insufficient m[5];
    int choice;
    int i=0;
    while (1)
    {
    
    cout << "\n";
    cout << "0. EXIT" << endl;
    cout << "1. create acc " << endl;
    cout << "2. deposit" << endl;
    cout << "3. withdraw" << endl;
    cout << "4.display details" << endl;
    cout << "Enter your choice - ";
    cin >> choice;

        switch (choice)
        {
        
        case 1:
            if(i<5)
            {t[i].accept();
            i++;}
            else
                cout << "\nreach the limit!!\n";
            break;
        case 2:
            int id;
            cout << "enter id : ";
            cin >> id;
            for (int i = 0; i < 5;i++)
                {if (id ==t[i].get_id())
                    t[i].depoit();}
                break;
        case 3:
            int id1;
            cout << "enter id : ";
            cin >> id1;
            for (int i = 0; i < 5;i++)
                {if (id1 ==t[i].get_id())
                    m[i].withdraw1();}
                break;
        case 4:
                int id2;
            cout << "enter id : ";
            cin >> id2;
            for (int i = 0; i < 5;i++)
                {if (id2 ==t[i].get_id())
                    t[i].display();}
                break;
        }
    }
    return 0;
}