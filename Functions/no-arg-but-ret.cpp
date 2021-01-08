#include<iostream>
#include<conio.h>
using namespace std;
float  Simp_Int();
int main()
{
    int si=Simp_Int();
    cout<<si;
    return 0;
}
float Simp_Int()
{
    float p,r,t,si;
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    return si;
}
