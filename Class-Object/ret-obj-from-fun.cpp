#include<iostream>
#include<conio.h>
#define PI 3.1416
class Circle
{
    float radius;
public:
    void setRadius();
    float getRadius();
    void showRadius();
};
void Circle::setRadius()
{
    cin>>radius;
}
void Circle::getRadius()
{
    return radius;
}
Circle createCircle()
{
    Circle c;
    c.setRadius();
    return c;
}
float calArea(Circle c)
{
    float ar;
    ar=PI*c.getRadius()*c.getRadius();
    return ar;
}
void Circle:showRadius()
{
    cout<<radius;
}
void main()
{
    Circle c1=createCircle();
    c1.showRadius();
    float a=calArea(c1);
    cout<<a;
}
