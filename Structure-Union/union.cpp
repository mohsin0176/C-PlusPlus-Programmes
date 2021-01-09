#include<iostream>
#include<conio.h>
using namespace std;
union Abc
{
    char c;
    int i;
    float f;
};
int main()
{
    union Abc x;
    x.c='B';
    x.i=100;
    x.f=123.456;
    cout<<x.c<<endl;
    cout<<x.i<<endl;
    cout<<x.f<<endl;
    return 0;
}
