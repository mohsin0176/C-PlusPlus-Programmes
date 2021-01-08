
#include<iostream>
#include<conio.h>
using namespace std;
long fact(int);
int main()
{
    int n;
    cin>>n;
    long f=fact(n);
    cout<<f;


}
long fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return a*fact(a-1);
    }
}
