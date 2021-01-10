#include<iostream>
#include<conio.h>
#define PI 3.1416
class Circle
{
    float radius;
public:
    void setRadius();
    void showRadius();
    float getRadius();

};
void Circle::setRadius()
{
    cin>>radius;
}
void Circle::showRadius()
{
    cout<<radius;
}
void Circle::getRadius()
{
    return radius;
}
float calArea(Circle c)
{
    float ar;
    ar=PI*c.getRadius()*c.getRadius();
    return ar;

}

void main()
{
    Circle c1;
    c1.setRadius();
    c1.showRadius();
    float a=calArea(c1);
    cout<<a;
}
