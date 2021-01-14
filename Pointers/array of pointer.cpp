#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60};
    int *p;
    int i;
    p=&a[0];
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<i[a];
    }
    for(i=0;i<5;i++)
    {
        cout<<*(a+i);
    }
    for(i=0;i<5;i++)
    {
        cout<<*(p+i);

    }
    for(i=0;i<5;i++)
    {
        cout<<p[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<*p++;
    }
    return 0;
}
