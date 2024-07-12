#include<iostream>
using namespace std;
#include <limits>
#include<iomanip>

class base {};
class derived : public base{};

int main()
{
    //STREAM IO

    // Output the address of a pointer
/*
    base *obj = new base();
    derived *obj1 = new derived();
    cout<<"\n obj = "<<obj<<" obj1 = "<<obj1<<endl;

    char *c = "ABCEFG";

    cout<<"\n c = "<<c<<endl;

    cout<<"(void *)c = "<<(void *)c<<endl;

    cout.write(c, 4);
    cout<<"\n";
    //Method put

    cout.put('A').put('B');
    cout<<"\n\n\n";

// *******************************************************************

    // Floating-Point Output Precision

    float a = 3.14159265f;
   // cout.setprecision(2) ; // "3.14" will be outputted
    cout<<a<<endl;
    cout.precision(4);
    cout << a <<endl;// "3.142" will be outputted
    cout.precision(5);
    cout << a<<endl ;// "3.142" will be outputted

//*********************************************************************
  //Stream Input

    char line[30];

    cout<<"\n Enter line :";
    cin.getline(line,30,'\n');
    cout<<"\n \n Entered Line : "<<line<<endl;

    //clear input buffer

    char ch;
    cin.get(ch); // get   getch   getche    getchar
    // Print ch
    cout << ch;
    char str[120];
   // cin.read(str,120); //reads till ^z
  // cout<<str;
 // clear buffer before taking
 // new line
   // cin.ignore(numeric_limits<streamsize>::max(), '\n');    //need to include limits.h
    cin.getline(str,20);
    cout<<"\n Entered line is :"<<str;

//****************************************************************
*/
    //column wise printing

    int numb; //define loop variable
    for(numb=1; numb<=10; numb++) //loop from 1 to 10
    {
        cout << setw(4) << numb; //display 1st column      #include<iomanip>
        int cube = numb*numb*numb; //calculate cube
        cout << setw(6) << cube << endl; //display 2nd column
        cout<<setfill('*');
    }
    return 0;
}
