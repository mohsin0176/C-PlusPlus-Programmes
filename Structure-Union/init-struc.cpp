#include<iostream>
#include<conio.h>
using namespace std;
struct distance
{
    int feet;
    float inches;

};
int main()
{
    distance d1={15,6.5};
    distance d2,d3;
    d2.feet=d1.feet;
    d2.inches=d1.inches;
    d3=d1;
    cout<<d1.feet<<d1.inches<<endl;
    cout<<d2.feet<<d2.inches<<endl;
    cout<<d3.feet<<d3.inches<<endl;
    return 0;
}
