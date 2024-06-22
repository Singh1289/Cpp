// const and constexpr //
#include"iostream"
using namespace std;
int main()
{
    //int number= 6;
    const int i = 10;
    int i= 6;   //  can't be changed const i is read only
    cout<<"\n i ="<<i;

    constexpr int num = 45* i;  // user define variable not work because it may change during program
    cout<<"\n num = "<<num;     // i is const so can work with constexpr
    return 0;
}
