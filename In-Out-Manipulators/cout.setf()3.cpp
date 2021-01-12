
#include<iostream>
#include<conio.h>
#include<iomanip.h>
using namespace std;
int main()
{
    cout.setf(ios::showpos);
    cout.setf(ios::showpoint);
    cout.setf(ios::scientific,ios::floatfield);
    cout.precision(2);
    cout.width(8);
    cout<<12.3456;
    cout.width(8);
    cout<<-12.3456;
    cout.width(8);
    cout<<12;

    return 0;
}
