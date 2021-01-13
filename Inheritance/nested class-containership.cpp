#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Circle
{
private:
    float radius;
public:
    Circle()
    {
        radius=0;
        cout<<"Default Constructor";
    }
    Circle(float r)
    {
        radius=r;
        cout<<"Parameterized Constructor";
    }
    void readRadius()
    {
        cin>>radius;
    }
    void showRadius()
    {
        cout<<radius;
    }
    float area()
    {
        float ar;
        ar=PI*radius*radius;
        return ar;
    }
    float getRadius()
    {
        return radius;
    }
};
class Cylinder
{
private:
    float height;
    Circle c;
public:
    Cylinder():c()
    {
        height=0;
        cout<<"Default Constructor";
    }
    Cylinder(float r,float h):c(r)
    {
        height=h;
        cout<<"Parameterized Constructor";
    }
    void readHeight()
    {
        c.readRadius();
        cin>>height;
    }
    void showHeight()
    {
        c.showRadius();
        cout<<height;
    }
    float volume()
    {
        float v;
        v=PI*c.getRadius()*c.getRadius()*height;
        return v;
    }
};
int main()
{
    Cylinder cl1(10,10);
    cl1.showHeight();
    cl1.readHeight();
    cl1.showHeight();
    float v=cl1.volume();
    cout<<v;
    return 0;
}
