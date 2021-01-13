#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
void show (T a)
{
    cout<<a;
}
int main()
{
    show('N');
    show(10);
    show(12.34);
    show('NIls');
    return 0;
}
