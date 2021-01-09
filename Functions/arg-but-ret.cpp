#include<iostream>
using namespace std;
float Simp_Int();
int main()
{
    float si;
    si=Simp_Int();
    cout<<si;
    return 0;
}
float Simp_Int()
{
    float p,r,t,si;
    cin>>p>>r>>t;
    si=(p*t*r)/100;
    return si;
}
