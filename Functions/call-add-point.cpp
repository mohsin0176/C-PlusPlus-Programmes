
#include<iostream>
#include<conio.h>
using namespace std;
float Simp_Int(float,float,float);
int  main()
{
    float p,r,t,si;
    cin>>p>>r>>t;
    si=Simp_Int(p,r,t);
    cout<<si;
    return 0;
}
float Simp_Int(float p,float r,float t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}
