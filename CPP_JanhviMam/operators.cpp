// const and constexpr //
#include"iostream"
using namespace std;

int main()
{
    cout<<"\n Good Morning..!";
    cout<<"\n Hello world";
    cout<<"\n Hello\aworld";   //\a connect both
    cout<<"\n Hello\bworld";    //\b  backspace
    cout<<"\n Hello\\world";    // \\ print \ in string
    cout<<"\n Hello\tworld";    // \t for tab space
    cout<<"\n Hello\rworld";    // \r return to first and start overwrite the rest part
    cout<<"\n Hello wor\rld";
    cout<<"\n He\rllo wo\rrld";
   return 0;
}
/*  OUT-PUTS
 Good Morning..!
 Hello world
 Helloworld
 Hellworld
 Hello\world
 Hello  world
worldo
ldello wor
rld wo
*/
