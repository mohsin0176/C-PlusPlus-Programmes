
#include<iostream>
#include<conio.h>
#include<iomanip.h>
using namespace std;
int main()
{
    cout<<setiosflags(ios::showpos);
    cout<<setiosflags(ios::showpoint);
    cout<<setiosflags(ios::scientific);
    cout<<precision(2);
    cout<<setw(8)<<12.345678;
     cout<<setw(8)<<-12.345678;
      cout<<setw(8)<<12.34000;
    return 0;
}
