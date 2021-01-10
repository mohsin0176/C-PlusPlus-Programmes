#include<iostream>
#include<conio.h>
using namespace std;
#define PI 3.1416
class Circle
{
    float radius;
    public:
        void getRadius();
        float area();
        void showRadius();

};
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
float Circle::showRadius()
{
    cout<<radius;
}
void main()
{
    Circle c1;
    c1.getRadius();
    c1.showRadius();
    float a=c1.area();
    cout<<a;
}
