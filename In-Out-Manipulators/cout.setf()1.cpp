#include<iostream>
#include<conio.h>
#include<iomanip.h>
using namespace std;
int main()
{
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout.width(8);
    cout<<12.345678;
    cout.width(8);
    cout<<12.30;
    cout.width(8);
    cout<<12.00;
    return 0;
}
