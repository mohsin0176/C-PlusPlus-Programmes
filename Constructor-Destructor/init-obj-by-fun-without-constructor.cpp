#include<iostream>
#include<conio.h>
#define PI 3.1416
class Circle
{
    float radius;
public:
    void init(float r);
    void getRadius();
    float area();
    void showRadius();
};
void Circle::init(float r)
{
    radius=r;

void Circle::getRadius()
{
    cin>>radius;
}
float Circle::area()
{
    return PI*radius*radius;
}
void Circle::showRadius()
{
    cout<<radius;
}

void main()
{
    Circle c1,c2;
    c1.init(10);
    c1.getRadius();
    c1.showRadius();
    float a=c1.area();
    cout<<a;
}
