#include<iostream>
#include<conio.h>
using namespace std;
template<class T>
void show(T a)
{
    cout<<a;
}
void show(int a)
{
    cout<<a;
}
int main()
{
    show(23);
    show('N');
    show(12.34);
    show("Nils");
    return 0;
}
