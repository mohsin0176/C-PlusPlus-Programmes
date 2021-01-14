#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=10;
    int *p1,*p2,*p3;
    p1=&a;
    p2=&a;
    p3=&a;
    cout<<*p1;
    cout<<*p2;
    cout<<*p3;
    *p2=50;
    cout<<*p1;
    cout<<*p2;
    cout<<*p3;
    *p3=*p1+*p2;
    cout<<*p1;
    cout<<*p2;
    cout<<*p3;
    return 0;
}
