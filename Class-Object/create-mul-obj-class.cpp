#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
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

int main()
{
    Circle c1,c2;
    c1.getRadius();
    c2.getRadius();
    c1.showRadius();
    c1.area();
    c2.showRadius();
    c2.area();
    return 0;
}
