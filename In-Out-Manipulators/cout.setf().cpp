#include<iostream>
#include<conio.h>
#include<iomanip.h>
using namespace std;
int main()
{
    cout.setf(ios::left,ios::adjustfield);
    cout.fill('*');
    cout.precision(2);
    cout.width(8);
    cout<<12.34569;
    cout.width(8);
    cout<<12.3;
    cout<<width(8);
    cout<<12;
    return 0;
}
