#include<iostream>
#include<conio.h>
#define PI 3.1416
class Circle
{
    float radius;
public:
    void setRadius(float radius);
    float getRadius();
    float area();

};
void Circle::setRadius(float radius)
{
    this->radius=radius;
}
float Circle::getRadius()
{
    this->radius=radius;
}
float Circle::area()
{
    return PI*radius*radius;
}
int main()
{
    Circle c1;
    c1.setRadius(10);
    float a=c1.area();
    cout<<c1.getRadius();
    cout<<a;
    return 0;
}
