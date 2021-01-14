#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
int main()
{
    Distance d;
    Distance *p;
    p=&d;
    p->feet=10;
    p->inches=6.35;
    cout<<p->feet<<endl<<p->inches;

}
