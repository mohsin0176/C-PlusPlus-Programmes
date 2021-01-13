#include<iostream>
#include<conio.h>
using namespace std;
template <class T1,class T2>
void show(T1 a,T2 b)
{
    cout<<a<<b;
}
int main()
{
    show(10,'B');
    show('B',20.75);
    show(10.25,'B');
    return 0;
}
