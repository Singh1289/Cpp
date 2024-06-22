/* calloc... malloc.... realloc  */
#include <iostream>
using namespace std;

int main()
{
    int i=1321025;
    cout<<"\n : "<<i;
    cout<<"\n 1 "<<i<<": "<< (i=i%1000000);
    cout<<"\n 1 "<<i<<": "<<(i=i%100000);
    cout<<"\n 1 "<<i<<": "<<(i=i%10000);
    cout<<"\n 1 "<<i<<": "<<(i=i%1000);
    cout<<"\n 1 "<<i<<": "<<(i=i%100);
/* out put
  number   : 1321025        1010025
 1: 321025
 2: 21025
 3: 1025
 4: 25
 5: 25
 */
    return 0;

}
