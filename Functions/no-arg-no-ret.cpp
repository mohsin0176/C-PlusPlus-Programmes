#include<iostream>
#include<conio.h>
using namespace std;
int Sinp_Int();
int main()
{
    Sinp_Int();
    return 0;
}
int Sinp_Int()
{
    float p,i,r,t,si;
    cin>>p>>r>>t;
    si=(p*r*t)/100;
    cout<<si;
}
