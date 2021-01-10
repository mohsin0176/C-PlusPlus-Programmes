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
    distance d1,d3;
    distance d2={10,6.5};
    cin>>d1.feet>>d1.inches;
    d3.feet=d1.feet+d2.feet;
    d3.inches=d1.inches+d2.inches;
    if(d3.inches>=12.0)
    {
        d3.inches-=12;
        d3.feet++;
    }
    cout<<d1.feet<<d1.inches;
    cout<<d2.feet<<d2.inches;
    cout<<d3.feet<<d3.inches;
    return 0;
}
