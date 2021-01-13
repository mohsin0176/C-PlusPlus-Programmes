#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Circle
{
private:
    float radius;
public:
    void readRadius()
    {
        cin>>radius;
    }
    float area()
    {
        float ar;
        ar=PI*radius*radius;
        return ar;
    }
    void showRadius()
    {
        cout<<radius;
    }
    float getRadius()
    {
        return radius;
    }
};


class Cylinder:public Circle
{

    float height;
public:
    void readHeight()
    {
        cin>>height;
    }
    float volume()
    {
        float v;
        v=PI*getRadius()*getRadius()*height;
        return v;
    }
    void showHeight()
    {
        cout<<height;
    }

};
int main()
{
    Circle c1;
    c1.readRadius();
    c1.showRadius();
    float a=c1.area();
    cout<<a;
    Cylinder cl1;
    cl1.readRadius();
    cl1.readHeight();
    cl1.showRadius();
    cl1.showHeight();
    float v=cl1.volume();
    cout<<v;
    return 0;
}
