#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=10;
    int *p,**pp,***ppp,****pppp;
    p=&a;
    cout<<p;
    cout<<*p;
    pp=&p;
    cout<<pp;
    cout<<*pp;
    cout<<**pp;
    ppp=&pp;
    cout<<ppp;
    cout<<*ppp;
    cout<<**ppp;
    cout<<***ppp;
    pppp=&ppp;
    cout<<pppp;
    cout<<*pppp;
    cout<<**pppp;
    cout<<***pppp;
    cout<<****pppp;
    return 0;
}
