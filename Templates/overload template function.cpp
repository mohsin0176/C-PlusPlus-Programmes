#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
void show(T a)
{
    cout<<a;
}
template <class T>
void show(T a,int b)
{
    cout<<a<<b;
}
int main()
{
    show(10);
    show('N');
    show(12.34);
    show("NILS");
    show(10,3);
    show('N',4);
    show(12.34,5);
    show("NILS",6);
    return 0;
}
