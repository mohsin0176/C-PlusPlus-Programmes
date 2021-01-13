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
class Cylinder:private Circle
{
private:
    float height;
public:
    void readHeight()
    {
        readRadius();
        cin>>height;
    }
    void showHeight()
    {
        showRadius();
        cout<<height;
    }
    float volume()
        {
            float v;
            v=PI*getRadius()*getRadius()*height;
            return v;
        }
};

int main()
{
    Cylinder cl1;
    cl1.readHeight();
    cl1.showHeight();
    float v=cl1.volume();
    cout<<v;
    return 0;
}

