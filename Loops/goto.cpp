
#include<iostream>
using namespace std;
int main()
{
    int i;
    i=1;
    Nils:

        cout<<i<<endl;
        i++;
    if(i<=10)
    {
        goto Nils;
    }
    return 0;
}
