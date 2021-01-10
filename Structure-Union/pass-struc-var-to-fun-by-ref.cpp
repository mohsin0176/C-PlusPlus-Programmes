#include<iostream>
#include<conio.h>
using namespace std;
struct distance{
int feet;
float inches;
};

void display(Distance&,float);
void display(Distance);
void main()
{
    Distance d1={12,65};
    Distance d2={10,60};
    display(d1);
    display(d2);
    scale(d1,0.5);
    scale(d2,.25);
    display(d1);
    display(d2);
}
void scale(Distance& dd,float factor)
{
    float inches=(dd.feet*12+dd.inches)*factor;
    dd.feet=inches/12;
    dd.inches=inches-dd.feet*12;
}
void scale(Distance dd)
{
    cout<<dd.feet<<dd.inches;
}
