#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Circle
{
    float radius;
public:
    Circle();
    Circle(float);
    Circle(Circle&);
    void getRadius();
    float area();
    void showRadius();

};
Circle::Circle()
{
    radius=10;
}
Circle::Circle(float r)
{
    radius=r;
}
Circle::Circle(Circle &c)
{
    radius=c.radius;
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
int main()
{
    Circle c1(10);
    Circle c2(c1);
    c2.showRadius();
    float a=c2.area();
    cout<<a;
    return 0;

}
