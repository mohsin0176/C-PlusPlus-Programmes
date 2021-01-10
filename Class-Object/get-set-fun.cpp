#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;.
class Circle
{
    float radius;
public:
    void setRadius(float r);
    float getRadius();
    inline float area();
};

void Circle::setRadius(float r)
{
    radius=r;
}
float Circle::getRadius()
{
    return radius;
}
inline float Circle::area()
{
    return PI*radius*radius;
}
void main()
{
    Circle c1;
    c1.setRadius(10);
    float a=c1.area();
    cout<<c1.getRadius();
    cout<<a;
}
