#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
class Circle
{
protected:
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
};
class Cylinder:public Circle
{
protected :
    float height;
public :
    void readHeight()
    {
        cin>>height;
    }
    void showheight()
    {
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
    cl1.readRadius();
    cl1.readHeight();
    cl1.showheight();
    cl1.showRadius();
    return 0;
}
