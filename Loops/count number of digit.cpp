#include<iostream>
using namespace std;
int main()
{
    long int n,c;
    cin>>n;
    c=0;
    while(n!=0)
    {
        n=n/10;
        c=c+1;
    }
    cout<<c;
    return 0;
}
