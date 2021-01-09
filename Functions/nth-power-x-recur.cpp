#include<iostream>
#include<conio.h>
using namespace std;
int power(int ,int);
int main()
{
    long x,n,p;
    cin>>x>>n;
    p=power(x,n);
    cout<<n<<p;
    return 0;
}
int power(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    else

    {
        return x*power(x,n-1);
    }
}
