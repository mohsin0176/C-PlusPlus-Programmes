#include<iostream>
#include<conio.h>
using namespace std;
#if (!defined (USA)||!defined(IND))
  #error ERROR:NO_CURRENCY rate is specified.
#endif
int main()
{
    int amt;
    amt=1000;
    cout<<amt;
    return 0;
}
