#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Circle
{
protected:
    float radius;
public:
    Circle()
    {
        radius=0;
        cout<<"Default Constructor";
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
};
class Cylinder:public Circle
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
            v=PI*radius*radius*height;
            return v;
        }
};

int main()
{
    Cylinder cl1;
    cl1.showRadius();
    cl1.readRadius();
    cl1.readHeight();
    cl1.showHeight();
    cl1.showRadius();
    float v=cl1.volume();
    cout<<v;
    return 0;
}

