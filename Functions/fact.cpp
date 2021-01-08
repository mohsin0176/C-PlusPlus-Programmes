#include<iostream>
#include<conio.h>
using namespace std;
long fact(long);
int main()
{
    long n,f;
    cin>>n;
    f=fact(n);
    cout<<f;
}
long fact(long a)
{
    long f=1;
    int i;
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
