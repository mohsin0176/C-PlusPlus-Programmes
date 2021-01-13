#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
void swap(T a,T b)
{
    T t;
    t=a;
    a=b;
    b=t;
    cout<<a<<b;
}
int main()
{
    swap(10,20);
    swap(10.25,20.25);
    swap('A','B');
    return 0;
}
