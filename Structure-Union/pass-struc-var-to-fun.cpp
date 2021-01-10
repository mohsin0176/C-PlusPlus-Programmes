#include<iostream>
#include<conio.h>
struct Distance
{
    int feet;
    float inches;

};
void display(Distance d)
{
    cout<<d.feet<<d.inches;
}
void main()
{
    Distance d1;
    Distance d2;
    cin>>d1.feet>>d1.inches;
    display(d1);
    display(d2);
}
