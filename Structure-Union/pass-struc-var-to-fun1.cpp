
#include<iostream>
#include<conio.h>
using namespace std;
struct distance
{
    int feet;
    float inches;

};
void display(Distance d)
{
    cout<<d.feet<<d.inches;
}
void add_dist(Distance dd1,Distance dd2)
{
    Distance dd3;
    dd3.feet=dd1.feet+dd2.feet;
    dd3.inches=dd1.inches+dd1.inches;
    if(dd3.inches>=12)
    {
        dd3.inches-=12;
        dd3.feet++;
    }
    display(dd3);
}
void main()
{
    Distance d1;
    Distance d2;
    cin>>d1.feet>>d1.inches;
    cin>>d2.feet>>d2.inches;
    display(d1);
    display(d2);
    add_dist(d1,d2);
}
