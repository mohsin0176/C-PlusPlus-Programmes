
#include<iostream>
#include<conio.h>
using namespace std;
int fibo(int);
int main()
{
    int n,t;
    cin>>n;
    t=fibo(n);
    cout<<n<<t;
}
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
