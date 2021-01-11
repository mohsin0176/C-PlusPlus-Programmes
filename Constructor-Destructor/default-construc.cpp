#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Circle{
float radius;
public:
    Circle();
    void getRadius();
    float area();
    void showRadius();
};
Circle::Circle()
{
    radius=10;
}
void Circle::getRadius()
{
    cin>>radius;
}
float Circle::area()
{
    float ar;
    ar=PI*radius*radius;
    return ar;
}
void Circle::showRadius()
{
    cout<<radius;
}
int  main()
{
    Circle c1;
    c1.showRadius();
    float a=c1.area();
    cout<<a;
    return 0;
}
