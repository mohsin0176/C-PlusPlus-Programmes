#include<iostream>
#include<conio.h>
using namespace std;
void AreaCircum(float,float&,float&);
void main()
{
    float radius,area,circum;
    cin>>radius;
    AreaCircum(radius,area,circum);
    cout<<area;
    cout<<circum;

}
void AreaCircum(float r,float &ar,float &cir)
{
    ar=3.1416*r*r;
    cir=2*3.1416*r;

}
