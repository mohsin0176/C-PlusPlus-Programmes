#include<iostream>
#include<conio.h>
#define PI 3.1416
class Circle
{
private:
    float radius;
public:
    void getRadius()
    {
        cin>>radius;
    }
    void area()
    {
        float ar;
        ar=PI*radius*radius;
        cout<<ar;
    }
    void showRadius()
    {
        cout<<radius;
    }
};
void main()
{
    Circle c1;
    c1.getRadius();
    c1.showRadius();
    c1.area();
}
