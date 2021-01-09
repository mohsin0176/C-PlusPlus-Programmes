#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
    int feet;
    int inches;
};

int main()
{
    Distance d1,d2;
    d1.feet=12;
    d1.inches=9.5;
    cin>>d2.feet;
    cin>>d2.inches;
    cout<<d1.feet<<endl<<d1.inches<<endl;
    cout<<d2.feet<<endl<<d2.inches<<endl;
    return 0;
}
