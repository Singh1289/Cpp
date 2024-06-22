#include<iostream>
using namespace std;
class Time
{
    int hr;
    int min;
    int sec;
    public :
    Time()  : hr(0),min(0),sec(0){

    }
    Time(int hr,int min,int sec){
        this->hr = hr;
        this->min = min;
        this->sec=sec;
    }
void acceptTime()
{
    cout << "enter hr\n";
    cin >> hr;
    cout << "enter min\n";
    cin >> min;
    cout << "enter sec";
    cin >> sec;
}
int getHour() const
{
    return hr;
}
int getMinute()const
{
    return min;
}
int getSeconds() const
{
    return sec;
}
void printTime() const
{
    cout << "Time - " << hr << ":" << min << ":" << sec << endl;
}
void setHour(int hr)
{
    this->hr = hr;
}
void setMinute(int min){
    this->min = min;
}
void setSeconds(int sec){
    this->sec = sec;
}
};
int main()
{
    Time t1(1,5,25);
    int hr, min, sec;
   Time *ptr = new Time[2]{Time(10, 5, 40)};
cout << "enter hr\n";
        cin >> hr;
        cout << "enter min\n";
        cin >> min;
        cout << "enter sec";
        cin >> sec;
    Time *acceptptr = new Time(hr, min, sec); ;
    int choice;
    while (true)
    {
        cout << "0.enter time\n1.set hr\n2.set min\n3.set sec\n4.get hr\n5.get min\n6.get sec\n7.display time" << endl;
        cout << "enter your choice\n";
        cin >> choice;

        switch (choice)
        {
    
    
        
            case 1:
                cout << "enter hr\n";
                cin >> hr;
                acceptptr->setHour(hr);
                break;
            case 2:
                cout << "enter min\n";
                cin >> min;
                acceptptr->setMinute(min);
                break;
            case 3:
                cout << "enter sec\n";
                cin >> sec;
                acceptptr->setSeconds(sec);
                break;
                case 4:
                    cout << "hr : " << acceptptr->getHour() << endl;
                    break;
                    case 5:
                        cout << "min : " << acceptptr->getMinute() << endl;
                        break;
                    case 6:
                    cout << "sec : " << acceptptr->getSeconds() << endl;
                        break;
                    case 7: 
                            acceptptr->printTime();
                        break;
                    default:
                    delete acceptptr;
                    delete[] ptr;
                    ptr = NULL;
                    acceptptr = NULL;
                    return 0;
                            }}
    

    return 0;
}