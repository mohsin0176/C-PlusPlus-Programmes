#include<iostream>
#include<conio.h>
using namespace std;
struct distance {

int feet;
float inches;
};
void display(Distance);
void display(float);
void main()
{
    Distance d1;
    float d2;
    cin>>d1.feet;
    cin>>d1.inches;
    cin>>d2;
    display(d1);
    display(d2);

}
void display(Distance dd)
{
    cout<<dd.feet<<dd.inches;
}
void display(float dd)
{
    int feet=dd/2;
    float inches=dd-(feet*12);
    cout<<feet<<inches;

}
