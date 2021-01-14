#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p;
    p=new int(10);
    cout<<*p;
    delete p;
    return 0;
}
